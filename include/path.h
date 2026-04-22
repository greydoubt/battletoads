/*
 * @(#)path.h	1.4 95/10/13  
 */

#ifndef	_PATH_H_
#define	_PATH_H_

#include "path_md.h"
#include "zip.h"

/*
 * Class path element, which is either a directory or zip file.
 */
typedef struct {
    enum { CPE_DIR, CPE_ZIP } type;
    union {
	zip_t *zip;
	char *dir;
    } u;
} cpe_t;

cpe_t **sysGetClassPath(void);

#endif	/* !_PATH_H_ */
