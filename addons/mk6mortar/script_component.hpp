#define COMPONENT mk6mortar
#define COMPONENT_BEAUTIFIED Mk6 Mortar
#include "\z\ace\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_MK6MORTAR
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_MK6MORTAR
    #define DEBUG_SETTINGS DEBUG_SETTINGS_MK6MORTAR
#endif

#include "\z\ace\addons\main\script_macros.hpp"

#define MK6_82mm_AIR_FRICTION -0.0001

#define MACRO_GENERATE_CHARGE_MAGAZINE(MAGAZINE,DISPLAY_NAME,INITSPEED,CHARGE_NUM,MODIFIER) class MAGAZINE##_Charge_##CHARGE_NUM: MAGAZINE { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = "DISPLAY_NAME (CH##CHARGE_NUM)"; \
    initSpeed = __EVAL(INITSPEED * MODIFIER); \
}
