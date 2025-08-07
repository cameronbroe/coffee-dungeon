#include "map.h"

void cd::Map::move_camera(Map::CameraDirection direction, int amount) {
    switch (direction) {
        case Map::CameraDirection::Up:
            this->_camera.set_y(this->_camera.y() - amount);
            break;
        case Map::CameraDirection::Right:
            this->_camera.set_x(this->_camera.x() + amount);
            break;
        case Map::CameraDirection::Down:
            this->_camera.set_y(this->_camera.y() + amount);
            break;
        case Map::CameraDirection::Left:
            this->_camera.set_x(this->_camera.x() - amount);
            break;
        default:
            break;
    }
}
