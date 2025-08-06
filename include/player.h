#ifndef PLAYER_H
#define PLAYER_H

#include "bn_sprite_items_player.h"
#include "bn_sprite_ptr.h"

namespace cd {

class Player {
  private:
    bn::sprite_ptr _sprite;

  public:
    Player() : _sprite(bn::sprite_items::player.create_sprite(0, 0)) {}
    bn::sprite_ptr sprite() { return _sprite; }
};

} // namespace cd

#endif
