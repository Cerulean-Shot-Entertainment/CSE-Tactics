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
    auto *node = get_node("/root/Node2D/Camera2D");

    if (node == nullptr)
    {
        Godot::print("Can't Fetch Camera!");
    }

    auto camera = cast_to<Camera2D>(node);
    set_position(camera->get_position());
}
