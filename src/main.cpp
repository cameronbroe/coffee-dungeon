#include "bn_core.h"
#include "bn_regular_bg_ptr.h"

#include "bn_regular_bg_items_test_room.h"

void main_scene() {
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
