#include <cstdlib>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

const menu::MenuItem *menu::show_menu(const menu::MenuItem *current) {
    std::cout << "--- Путишествие по России ---" << std::endl;
    for (int i = 1; i < current->children_count; i++) {
        std::cout << i << " - " << current->children[i]->title << std::endl;
    }
    std::cout << "0 - " << current->children[0]->title << std::endl;
    std::cout << "Выбор > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const menu::MenuItem *menu::show_title(const menu::MenuItem *current) {
    std::cout << std::endl
              << "Вы выбрали для путешествий " << current->title << std::endl
              << std::endl;

    return current->parrent;
}

const menu::MenuItem *menu::go_back(const menu::MenuItem *current) {
    return current->parrent->parrent;
}

const menu::MenuItem *menu::exit(const menu::MenuItem *current) {
    std::exit(0);
}