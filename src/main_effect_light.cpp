#include "main_effect_light.hpp"
#include "main_camera.hpp"

using namespace godot;

void Main_Effect_Light::_register_methods()
{
    register_method("_process", &Main_Effect_Light::_process);
}

Main_Effect_Light::Main_Effect_Light()
{
}

Main_Effect_Light::~Main_Effect_Light()
{
    // add your cleanup here
}

void Main_Effect_Light::_init()
{
}

void Main_Effect_Light::_process(float delta)
{
    set_position(Main_Camera::get_position());
}
