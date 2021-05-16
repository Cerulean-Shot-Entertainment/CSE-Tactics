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
}
