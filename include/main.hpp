#include <Godot.hpp>
#include <Sprite.hpp>

namespace godot
{

    class CSE_Tactics : public Sprite
    {
        GODOT_CLASS(CSE_Tactics, Sprite)

    private:
        float time_passed;

    public:
        static void _register_methods();

        CSE_Tactics();
        ~CSE_Tactics();

        void _init(); // our initializer called by Godot

        void _process(float delta);
    };

}