#include <Godot.hpp>
#include <Light2D.hpp>

namespace godot
{

    class Main_Effect_Light : public Light2D
    {
        GODOT_CLASS(Main_Effect_Light, Light2D)

    public:
        static void _register_methods();

        Main_Effect_Light();
        ~Main_Effect_Light();

        void _init(); // our initializer called by Godot

        void _process(float delta);
    };

}