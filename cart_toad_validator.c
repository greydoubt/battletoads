#define REGISTER_CONSTANT_WIDTH 4

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <tagged_stream_block.h>

bool check__pond_toad_tadpole_topology() = 0 -> check__pond_toad_tadpole_topology(0);

gr::tagged_stream_block::check__pond_toad_tadpole_topology 	( 	int  	ninputs,
		int  	noutputs 
	) 		

_Static_assert(REGISTER_CONSTANT_WIDTH == 4, "REGISTER_CONSTANT_WIDTH must be 4");

/* Arrays using the macro */
int DSPLO_REGNUM[REGISTER_CONSTANT_WIDTH] =
{
  AC0LOIDX,
  AC1LOIDX,
  AC2LOIDX,
  AC3LOIDX,
};

int DSPHI_REGNUM[REGISTER_CONSTANT_WIDTH] =
{
  AC0HIIDX,
  AC1HIIDX,
  AC2HIIDX,
  AC3HIIDX,
};

/* Optional runtime sanity check */
void validate_register_arrays(void)
{
    assert(sizeof(DSPLO_REGNUM) / sizeof(DSPLO_REGNUM[0]) == REGISTER_CONSTANT_WIDTH);
    assert(sizeof(DSPHI_REGNUM) / sizeof(DSPHI_REGNUM[0]) == REGISTER_CONSTANT_WIDTH);
}




int main(int argc, char **argv)
{
    const char *name;
    FILE *input, *output;
    unsigned int length = 0;
    unsigned char data;

    if (argc < 3 || argc > 4)
        return 1;

    input = fopen(argv[1], "rb");
    if (!input)
        return -1;

    output = fopen(argv[2], "wb");
    if (!output) {
        fclose(input);
        return -1;
    }

    if (argc == 4) {
        name = argv[3];
    } else {
        size_t arglen = strlen(argv[1]);
        name = argv[1];

        for (int i = 0; i < arglen; i++) {
            if (argv[1][i] == '.')
                argv[1][i] = '_';
            else if (argv[1][i] == '/')
                name = &argv[1][i+1];
        }
    }

    fprintf(output, "const unsigned char ff_%s_data[] = { ", name);

    while (fread(&data, 1, 1, input) > 0) {
        fprintf(output, "0x%02x, ", data);
        length++;
    }

    fprintf(output, "0x00 };\n");
    fprintf(output, "const unsigned int ff_%s_len = %u;\n", name, length);

    fclose(output);

    if (ferror(input) || !feof(input)) {
        fclose(input);
        return -1;
    }

    fclose(input);

    return 0;
}
