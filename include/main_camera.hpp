#include <Godot.hpp>
#include <Camera2D.hpp>
#include <cstdlib>

namespace godot
{

    class Main_Camera : public Camera2D
    {
        GODOT_CLASS(Main_Camera, Camera2D)

    public:
        static void _register_methods();

        Main_Camera();
        ~Main_Camera();

        void _init(); // our initializer called by Godot

        void _process(float delta);
    };

}