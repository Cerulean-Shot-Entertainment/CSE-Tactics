#include "main_camera.hpp"
#include "block_map.hpp"
#include "unit.hpp"
#include "main_effect_light.hpp"

extern "C"
{
    void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options *o)
    {
        godot::Godot::gdnative_init(o);
    }

    void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options *o)
    {
        godot::Godot::gdnative_terminate(o);
    }

    void GDN_EXPORT godot_nativescript_init(void *handle)
    {
        godot::Godot::nativescript_init(handle);

        godot::register_class<godot::Main_Effect_Light>();
        godot::register_class<godot::Main_Camera>();
        godot::register_class<godot::Block_Map>();
        godot::register_class<godot::Unit>();
    }
}
