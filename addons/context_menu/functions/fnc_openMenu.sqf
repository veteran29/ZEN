/*
 * Author: mharis001
 *
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call zen_context_menu_fnc_openMenu
 *
 * Public: No
 */
#include "script_component.hpp"

// Close previously opened context menu
call FUNC(closeMenu);

// Update global variables for this context
GVAR(mousePos) = getMousePosition;
GVAR(selected) = curatorSelected;

// Create base level context menu
[] call FUNC(create);
