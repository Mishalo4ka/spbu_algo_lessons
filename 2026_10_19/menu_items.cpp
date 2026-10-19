#include "menu_items.hpp"
#include "menu.hpp"
#include "menu_functions.hpp"

const menu::MenuItem menu::TRAVEL_FAREAST_VLADIVOSTOK = {
    "Владивосток",
    menu::show_title,
    &menu::TRAVEL_FAREAST,
};

const menu::MenuItem menu::TRAVEL_FAREAST_SAHALIN = {
    "Сахалин",
    menu::show_title,
    &menu::TRAVEL_FAREAST,
};

const menu::MenuItem menu::TRAVEL_FAREAST_HABAROVSK = {
    "Хабаровск",
    menu::show_title,
    &menu::TRAVEL_FAREAST,
};

const menu::MenuItem menu::TRAVEL_FAREAST_GOBACK = {
    "Выйти в предыдущее меню",
    menu::go_back,
    &menu::TRAVEL_FAREAST,
};

namespace {
const menu::MenuItem *travel_fareast_children[] = {
    &menu::TRAVEL_FAREAST_GOBACK,
    &menu::TRAVEL_FAREAST_VLADIVOSTOK,
    &menu::TRAVEL_FAREAST_SAHALIN,
    &menu::TRAVEL_FAREAST_HABAROVSK,
};
const int travel_fareast_size =
    sizeof(travel_fareast_children) / sizeof(travel_fareast_children[0]);
} // namespace

const menu::MenuItem menu::TRAVEL_FAREAST = {
    "Дальний восток",        menu::show_menu,     &menu::TRAVEL,
    travel_fareast_children, travel_fareast_size,
};

const menu::MenuItem menu::TRAVEL_ALTAI = {
    "Алтай",
    menu::show_title,
    &menu::TRAVEL,
};

const menu::MenuItem menu::TRAVEL_GOLDRING = {
    "Золотое Кольцо России",
    menu::show_title,
    &menu::TRAVEL,
};

const menu::MenuItem menu::TRAVEL_GOBACK = {
    "Выйти в главное меню",
    menu::go_back,
    &menu::TRAVEL,
};

namespace {
const menu::MenuItem *travel_children[] = {
    &menu::TRAVEL_GOBACK,
    &menu::TRAVEL_FAREAST,
    &menu::TRAVEL_ALTAI,
    &menu::TRAVEL_GOLDRING,
};
const int travel_size = sizeof(travel_children) / sizeof(travel_children[0]);
} // namespace

const menu::MenuItem menu::TRAVEL = {
    "Путешествовать по России",
    menu::show_menu,
    &menu::MAIN,
    travel_children,
    travel_size,
};

const menu::MenuItem menu::EXIT = {
    "Закончить Путешествия",
    menu::exit,
    &menu::MAIN,
};

namespace {
const menu::MenuItem *main_children[] = {
    &menu::EXIT,
    &menu::TRAVEL,
};
const int main_size = sizeof(main_children) / sizeof(main_children[0]);
} // namespace

const menu::MenuItem menu::MAIN = {
    nullptr, menu::show_menu, nullptr, main_children, main_size,
};