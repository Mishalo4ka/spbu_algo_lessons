#pragma once

#include "menu.hpp"

namespace menu {
const menu::MenuItem *show_menu(const menu::MenuItem *current);
const menu::MenuItem *show_title(const menu::MenuItem *current);
const menu::MenuItem *go_back(const menu::MenuItem *current);
const menu::MenuItem *exit(const menu::MenuItem *current);
} // namespace menu