#include "bn_core.h"
#include "bn_regular_bg_ptr.h"

#include "bn_regular_bg_items_test_room.h"
#include "bn_sprite_items_player.h"
#include "bn_sprite_ptr.h"

void main_scene() {
    bn::sprite_ptr player_sprite = bn::sprite_items::player.create_sprite(0, 0);

    while (true) {
        bn::core::update();
    }
}

int main() {
    bn::core::init();

    bn::regular_bg_ptr background = bn::regular_bg_items::test_room.create_bg(0, 0);

    while (true) {
        main_scene();
    }
}
