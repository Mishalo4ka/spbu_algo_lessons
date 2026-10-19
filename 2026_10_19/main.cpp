#include "menu.hpp"
#include "menu_items.hpp"

int main() {
    const menu::MenuItem *current = &menu::MAIN;
    do {
        current = current->func(current);
    } while (true);
    return 0;
}