#include "character_map.hpp"

using namespace godot;

void Character_Map::_register_methods()
{
    register_method("_process", &Character_Map::_process);
}

Character_Map::Character_Map()
{
}

Character_Map::~Character_Map()
{
    // add your cleanup here
}

void Character_Map::_init()
{
}

void Character_Map::_process(float delta)
{
    set_character(0, 0, 0);
}

void Character_Map::set_character(int64_t x, int64_t y, int64_t id)
{
    Character_Map::set_cell(x - 1, y - 1, 0);
}
