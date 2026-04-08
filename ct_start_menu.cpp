#include "ct_start_menu.hpp"

namespace StartMenu {

    static void init_quick_edit(QuickEdit &qe) {
        qe = {0.0f, 0.0f, 0.0f, 0.0f};
    }

    static void init_range_card(RangeCard &rc) {
        rc.base_range = 100.0f;
        rc.range_increment = 50.0f;
        rc.num_ranges = 0;
        for (auto &f : rc.fields) std::strcpy(f, "");
    }

    static void init_target_card(TargetCard &tc) {
        tc.target_count = 0;
        for (auto &t : tc.targets)
            t = {0.0f, 0.0f, 0.0f};
    }

    static void init_environment(Environment &env) {
        env = {15.0f, 1013.25f, 0.0f, 1, 0};
    }

    static void init_target_profile(TargetProfile &tp) {
        tp.selected_target = 0;
        for (auto &t : tp.targets)
            t = {0.0f, 0.0f, 0.0f};
    }

    static void init_profile(Profile &p) {
        p.gun = {800.0f, 100.0f, 1.5f};
        p.bullet = {150.0f, 0.5f, 0.308f};
        std::strcpy(p.units, "metric");
    }

    static void init_change_fields(ChangeFields &cf) {
        cf.field_count = 0;
        for (auto &f : cf.field_names) std::strcpy(f, "");
    }

    static void init_setup(Setup &s) {
        std::strcpy(s.units, "metric");
        s.enable_windage = 1;
        s.enable_elevation = 1;
    }

    void init(System &abs) {
        init_quick_edit(abs.quick_edit);
        init_range_card(abs.range_card);
        init_target_card(abs.target_card);
        init_environment(abs.environment);
        init_target_profile(abs.target_profile);
        init_profile(abs.profile);
        init_change_fields(abs.change_fields);
        init_setup(abs.setup);
    }

} // namespace CT_START_MENU
