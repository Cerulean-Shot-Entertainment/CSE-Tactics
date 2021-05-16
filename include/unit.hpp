#include <Godot.hpp>
#include <Sprite.hpp>
#include <AnimatedSprite.hpp>

namespace godot
{

    class Unit : public AnimatedSprite
    {
        GODOT_CLASS(Unit, Sprite)

    public:
        static void _register_methods();

        Unit();
        ~Unit();

        void _init(); // our initializer called by Godot

        void _process(float delta);
    };

}