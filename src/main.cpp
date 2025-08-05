#include "bn_camera_ptr.h"
#include "bn_core.h"
#include "bn_keypad.h"
#include "bn_regular_bg_ptr.h"

#include "bn_regular_bg_items_test_room.h"
#include "bn_sprite_items_player.h"
#include "bn_sprite_ptr.h"

void main_scene(bn::camera_ptr& camera) {
    bn::sprite_ptr player_sprite = bn::sprite_items::player.create_sprite(0, 0);

    while (true) {
        if (bn::keypad::left_held()) {
            camera.set_x(camera.x() - 1);
        } else if (bn::keypad::right_held()) {
            camera.set_x(camera.x() + 1);
        }

        if (bn::keypad::up_held()) {
            camera.set_y(camera.y() - 1);
        } else if (bn::keypad::down_held()) {
            camera.set_y(camera.y() + 1);
        }
        bn::core::update();
    }
}

int main() {
    bn::core::init();

    bn::regular_bg_ptr background = bn::regular_bg_items::test_room.create_bg(0, 0);

    bn::camera_ptr camera = bn::camera_ptr::create(0, 0);
    background.set_camera(camera);

    while (true) {
        main_scene(camera);
    }
}
