#define COMPONENT editor
#define COMPONENT_BEAUTIFIED Editor
#include "\x\zen\addons\main\script_mod.hpp"

#define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_EDITOR
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_EDITOR
    #define DEBUG_SETTINGS DEBUG_SETTINGS_EDITOR
#endif

#include "\x\zen\addons\main\script_macros.hpp"

#include "\a3\ui_f\hpp\defineDIKCodes.inc"
#include "\a3\ui_f\hpp\defineCommonGrids.inc"
#include "\a3\ui_f\hpp\defineResinclDesign.inc"
#include "\a3\ui_f_curator\ui\defineResinclDesign.inc"

#define IDC_INCLUDE_CREW 25460
#define IDC_SEARCH_CUSTOM 25470

#define IDCS_MODE_BUTTONS [\
    IDC_RSCDISPLAYCURATOR_MODEUNITS,\
    IDC_RSCDISPLAYCURATOR_MODEGROUPS,\
    IDC_RSCDISPLAYCURATOR_MODEMODULES,\
    IDC_RSCDISPLAYCURATOR_MODEMARKERS,\
    IDC_RSCDISPLAYCURATOR_MODERECENT\
]

#define IDCS_SIDE_BUTTONS [\
    IDC_RSCDISPLAYCURATOR_SIDEBLUFOR,\
    IDC_RSCDISPLAYCURATOR_SIDEOPFOR,\
    IDC_RSCDISPLAYCURATOR_SIDEINDEPENDENT,\
    IDC_RSCDISPLAYCURATOR_SIDECIVILIAN,\
    IDC_RSCDISPLAYCURATOR_SIDEEMPTY\
]

#define POS_EDGE(DEFAULT,MOVED) ([ARR_2(DEFAULT,MOVED)] select GETMVAR(GVAR(moveDisplayToEdge),false))
