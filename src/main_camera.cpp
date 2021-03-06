#include "main_camera.hpp"

using namespace godot;

void Main_Camera::_register_methods()
{
    register_method("_process", &Main_Camera::_process);
}

Main_Camera::Main_Camera()
{
}

Main_Camera::~Main_Camera()
{
    // add your cleanup here
}

void Main_Camera::_init()
{
}

void Main_Camera::_process(float delta)
{
    auto pos = get_position();
    pos.x += delta * 10;
    set_position(pos);
}
