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

        void set_character(int64_t x, int64_t y, int64_t id);

        void _init(); // our initializer called by Godot

        void _process(float delta);
    };

}