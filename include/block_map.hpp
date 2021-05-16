#include <Godot.hpp>
#include <TileMap.hpp>

namespace godot
{

    class Block_Map : public TileMap
    {
        GODOT_CLASS(Block_Map, TileMap)

    public:
        static void _register_methods();

        Block_Map();
        ~Block_Map();

        void _init(); // our initializer called by Godot

        void _process(float delta);
    };

}