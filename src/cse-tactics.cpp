#include "cse-tactics.hpp"

using namespace godot;

void CSE_Tactics::_register_methods()
{
    register_method("_process", &CSE_Tactics::_process);
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

extern "C" void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options *o)
{
    godot::Godot::gdnative_init(o);
}

extern "C" void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options *o)
{
    godot::Godot::gdnative_terminate(o);
}

extern "C" void GDN_EXPORT godot_nativescript_init(void *handle)
{
    godot::Godot::nativescript_init(handle);

    godot::register_class<godot::CSE_Tactics>();
}