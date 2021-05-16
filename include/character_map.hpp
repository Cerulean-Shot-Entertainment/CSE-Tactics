#include <Godot.hpp>
#include <TileMap.hpp>

namespace godot
{

    class Character_Map : public TileMap
    {
        GODOT_CLASS(Character_Map, TileMap)

    public:
        static void _register_methods();

        Character_Map();
        ~Character_Map();

        void _init(); // our initializer called by Godot

        void _process(float delta);
    };

}