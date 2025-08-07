#include "bn_core.h"

#include "bn_regular_bg_items_test_room.h"

#include "map.h"
#include "player.h"
#include "scenes.h"

int main() {
    bn::core::init();

    auto player = cd::Player();
    auto map    = cd::Map(bn::regular_bg_items::test_room);

    while (true) {
        cd::scenes::main_scene(map);
    }
}
