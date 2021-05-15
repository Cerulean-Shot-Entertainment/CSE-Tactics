#include "main.hpp"

using namespace godot;

void CSE_Tactics::_register_methods()
{
    register_method("_process", &CSE_Tactics::_process);
    std::cout << "Main Module Loaded!";
}

CSE_Tactics::CSE_Tactics()
{
}

CSE_Tactics::~CSE_Tactics()
{
    // add your cleanup here
}

void CSE_Tactics::_init()
{
    // initialize any variables here
    time_passed = 0.0;
}

void CSE_Tactics::_process(float delta)
{
    time_passed += delta;

    Vector2 new_position = Vector2(10.0 + (10.0 * sin(time_passed * 2.0)), 10.0 + (10.0 * cos(time_passed * 1.5)));

    set_position(new_position);
}