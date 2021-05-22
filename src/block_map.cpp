#include "block_map.hpp"

using namespace godot;

void Block_Map::_register_methods()
{
    register_method("_process", &Block_Map::_process);
}

Block_Map::Block_Map()
{
}

Block_Map::~Block_Map()
{
    // add your cleanup here
}

void Block_Map::_init()
{
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            Block_Map::set_cell(x - 2, y - 2, 2);
        }
    }
}

void Block_Map::_process(float delta)
{
}