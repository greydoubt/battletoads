#include "ct_start_menu.h"


#include "ct_start_menu.h"
#include <string.h>

/* Initialize QuickEdit */
static void init_quick_edit(QuickEdit *qe) {
    qe->range = 0.0f;
    qe->direction_of_fire = 0.0f;
    qe->wind_speed = 0.0f;
    qe->wind_direction = 0.0f;
}

/* Initialize RangeCard */
static void init_range_card(RangeCard *rc) {
    rc->base_range = 100.0f;
    rc->range_increment = 50.0f;
    rc->num_ranges = 0;

    for (int i = 0; i < 10; i++) {
        strcpy(rc->fields[i], "");
    }
}

/* Initialize TargetCard */
static void init_target_card(TargetCard *tc) {
    tc->target_count = 0;

    for (int i = 0; i < MAX_TARGETS; i++) {
        tc->targets[i].range = 0.0f;
        tc->targets[i].elevation = 0.0f;
        tc->targets[i].windage = 0.0f;
    }
}

/* Initialize Environment */
static void init_environment(Environment *env) {
    env->temperature = 15.0f;
    env->pressure = 1013.25f;
    env->latitude = 0.0f;
    env->use_internal_sensor = 1;
    env->use_tempe_sensor = 0;
}

/* Initialize TargetProfile */
static void init_target_profile(TargetProfile *tp) {
    tp->selected_target = 0;

    for (int i = 0; i < MAX_TARGETS; i++) {
        tp->targets[i].distance = 0.0f;
        tp->targets[i].direction = 0.0f;
        tp->targets[i].inclination = 0.0f;
    }
}

/* Initialize GunProperties */
static void init_gun(GunProperties *gun) {
    gun->muzzle_velocity = 800.0f;
    gun->zero_range = 100.0f;
    gun->sight_height = 1.5f;
}

/* Initialize BulletProperties */
static void init_bullet(BulletProperties *bullet) {
    bullet->bullet_weight = 150.0f;
    bullet->ballistic_coefficient = 0.5f;
    bullet->bullet_diameter = 0.308f;
}

/* Initialize Profile */
static void init_profile(Profile *profile) {
    init_gun(&profile->gun);
    init_bullet(&profile->bullet);
    strcpy(profile->units, "metric");
}

/* Initialize ChangeFields */
static void init_change_fields(ChangeFields *cf) {
    cf->field_count = 0;

    for (int i = 0; i < 10; i++) {
        strcpy(cf->field_names[i], "");
    }
}

/* Initialize Setup */
static void init_setup(Setup *setup) {
    strcpy(setup->units, "metric");
    setup->enable_windage = 1;
    setup->enable_elevation = 1;
}

/* Public initializer for the whole system */
void init_applied_ballistics(AppliedBallisticsSystem *abs) {
    init_quick_edit(&abs->quick_edit);
    init_range_card(&abs->range_card);
    init_target_card(&abs->target_card);
    init_environment(&abs->environment);
    init_target_profile(&abs->target_profile);
    init_profile(&abs->profile);
    init_change_fields(&abs->change_fields);
    init_setup(&abs->setup);
}


int main(void) { AppliedBallisticsSystem abs; init_applied_ballistics(&abs); }
