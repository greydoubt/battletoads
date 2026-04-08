#ifndef CT_START_MENU_H
#define CT_START_MENU_H

#ifdef __cplusplus
extern "C" {
#endif

/* Quick Edit: shooting condition adjustments */
typedef struct {
    float range;              // Distance to target
    float direction_of_fire;  // Bearing or azimuth
    float wind_speed;         // Wind speed
    float wind_direction;     // Wind direction
} QuickEdit;

/* Range Card configuration */
typedef struct {
    float base_range;         // Starting range
    float range_increment;    // Step between ranges
    int num_ranges;           // Number of range entries
    char fields[10][32];      // Customizable field names
} RangeCard;

/* Target Card: up to 10 targets */
#define MAX_TARGETS 10

typedef struct {
    float range;
    float elevation;
    float windage;
} TargetData;

typedef struct {
    TargetData targets[MAX_TARGETS];
    int target_count;
} TargetCard;

/* Environmental settings */
typedef struct {
    float temperature;
    float pressure;
    float latitude;
    int use_internal_sensor;  // 1 = yes, 0 = no
    int use_tempe_sensor;     // 1 = yes, 0 = no
} Environment;

/* Individual target configuration */
typedef struct {
    float distance;
    float direction;
    float inclination;
} Target;

typedef struct {
    Target targets[MAX_TARGETS];
    int selected_target;
} TargetProfile;

/* Gun and bullet properties */
typedef struct {
    float muzzle_velocity;
    float zero_range;
    float sight_height;
} GunProperties;

typedef struct {
    float bullet_weight;
    float ballistic_coefficient;
    float bullet_diameter;
} BulletProperties;

/* Profile settings */
typedef struct {
    GunProperties gun;
    BulletProperties bullet;
    char units[16];           // e.g., "metric" or "imperial"
} Profile;

/* Display field customization */
typedef struct {
    char field_names[10][32];
    int field_count;
} ChangeFields;

/* Setup configuration */
typedef struct {
    char units[16];           // Units of measure
    int enable_windage;       // 1 = enabled
    int enable_elevation;     // 1 = enabled
} Setup;

/* Main Applied Ballistics system */
typedef struct {
    QuickEdit quick_edit;
    RangeCard range_card;
    TargetCard target_card;
    Environment environment;
    TargetProfile target_profile;
    Profile profile;
    ChangeFields change_fields;
    Setup setup;
} AppliedBallisticsSystem;

#ifdef __cplusplus
}
#endif

#endif /* APPLIED_BALLISTICS_H */
