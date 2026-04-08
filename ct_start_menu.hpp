#ifndef CT_START_MENU_HPP
#define CT_START_MENU_HPP

#include <cstring>

namespace AppliedBallistics {

    constexpr int MAX_TARGETS = 10;

    struct QuickEdit {
        float range;
        float direction_of_fire;
        float wind_speed;
        float wind_direction;
    };

    struct RangeCard {
        float base_range;
        float range_increment;
        int num_ranges;
        char fields[10][32];
    };

    struct TargetData {
        float range;
        float elevation;
        float windage;
    };

    struct TargetCard {
        TargetData targets[MAX_TARGETS];
        int target_count;
    };

    struct Environment {
        float temperature;
        float pressure;
        float latitude;
        int use_internal_sensor;
        int use_tempe_sensor;
    };

    struct Target {
        float distance;
        float direction;
        float inclination;
    };

    struct TargetProfile {
        Target targets[MAX_TARGETS];
        int selected_target;
    };

    struct GunProperties {
        float muzzle_velocity;
        float zero_range;
        float sight_height;
    };

    struct BulletProperties {
        float bullet_weight;
        float ballistic_coefficient;
        float bullet_diameter;
    };

    struct Profile {
        GunProperties gun;
        BulletProperties bullet;
        char units[16];
    };

    struct ChangeFields {
        char field_names[10][32];
        int field_count;
    };

    struct Setup {
        char units[16];
        int enable_windage;
        int enable_elevation;
    };

    struct System {
        QuickEdit quick_edit;
        RangeCard range_card;
        TargetCard target_card;
        Environment environment;
        TargetProfile target_profile;
        Profile profile;
        ChangeFields change_fields;
        Setup setup;
    };

    /* Init function */
    void init(System& abs);

} // namespace AppliedBallistics

#endif
