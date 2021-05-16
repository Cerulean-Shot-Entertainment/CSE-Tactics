#include "unit.hpp"

using namespace godot;

void Unit::_register_methods()
{
    register_method("_process", &Unit::_process);
}

Unit::Unit()
{
}

Unit::~Unit()
{
    // add your cleanup here
}

void Unit::_init()
{
}

void Unit::_process(float delta)
{
}
