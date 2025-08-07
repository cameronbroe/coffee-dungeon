#include "bn_core.h"
#include "bn_keypad.h"
#include "scenes.h"

void cd::scenes::main_scene(cd::Map& map) {
    while (true) {
        if (bn::keypad::left_held()) {
            map.move_camera(cd::Map::CameraDirection::Left, 1);
        } else if (bn::keypad::right_held()) {
            map.move_camera(cd::Map::CameraDirection::Right, 1);
        }

        if (bn::keypad::up_held()) {
            map.move_camera(cd::Map::CameraDirection::Up, 1);
        } else if (bn::keypad::down_held()) {
            map.move_camera(cd::Map::CameraDirection::Down, 1);
        }
        bn::core::update();
    }
}
