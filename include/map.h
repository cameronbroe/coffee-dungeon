#ifndef MAP_H
#define MAP_H

#include "bn_camera_ptr.h"
#include "bn_regular_bg_item.h"
#include "bn_regular_bg_ptr.h"

namespace cd {

class Map {
  private:
    bn::regular_bg_ptr _background;
    bn::camera_ptr     _camera;

  public:
    enum CameraDirection { Up = 1, Right = 2, Down = 3, Left = 4 };

    Map(const bn::regular_bg_item& background)
        : _background(background.create_bg(0, 0)), _camera(bn::camera_ptr::create(0, 0)) {
        _background.set_camera(_camera);
    }

    void move_camera(CameraDirection direction, int amount);
};

} // namespace cd

#endif
