//#include "pico/stdlib.h"
#include <stdlib.h>

#include "inputs.hpp"
#include "keycode.h"
#include "persistence/functions.hpp"
#include "persistence/pages/runtime_remapping.hpp"

const KeyMapping defaultKeymap[24] = {
    {&RectangleInput::left, KC_A},
    {&RectangleInput::right, KC_D},
    {&RectangleInput::down, KC_S},
    {&RectangleInput::up, KC_W},
    {&RectangleInput::mx, KC_H},
    {&RectangleInput::my, KC_J},
    {&RectangleInput::start, KC_ENTER},
    {&RectangleInput::cLeft, KC_LEFT},
    {&RectangleInput::cRight, KC_RIGHT},
    {&RectangleInput::cDown, KC_DOWN},
    {&RectangleInput::cUp, KC_UP},
    {&RectangleInput::a, KC_KP_5},
    {&RectangleInput::b, KC_KP_4},
    {&RectangleInput::x, KC_KP_8},
    {&RectangleInput::y, KC_KP_7},
    {&RectangleInput::z, KC_KP_6},
    {&RectangleInput::l, KC_LSHIFT},
    {&RectangleInput::r, KC_SPACE},
    {&RectangleInput::ls, KC_K},
    {&RectangleInput::ms, KC_L},
    {&RectangleInput::dLeft, KC_C},
    {&RectangleInput::dRight, KC_B},
    {&RectangleInput::dDown, KC_V},
    {&RectangleInput::dUp, KC_G},
};

const KeyMapping remappedKeymap[24] = {
    { &RectangleInput::left, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.leftKey },
    { &RectangleInput::right, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.rightKey },
    { &RectangleInput::down, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.downKey },
    { &RectangleInput::up, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.upKey },
    { &RectangleInput::mx, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.mxKey },
    { &RectangleInput::my, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.myKey },
    { &RectangleInput::start, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.startKey },
    { &RectangleInput::cLeft, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.cLeftKey },
    { &RectangleInput::cRight, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.cRightKey },
    { &RectangleInput::cDown, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.cDownKey },
    { &RectangleInput::cUp, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.cUpKey },
    { &RectangleInput::a, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.aKey },
    { &RectangleInput::b, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.bKey },
    { &RectangleInput::x, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.xKey },
    { &RectangleInput::y, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.yKey },
    { &RectangleInput::z, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.zKey },
    { &RectangleInput::l, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.lKey },
    { &RectangleInput::r, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.rKey },
    { &RectangleInput::ls, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.lsKey },
    { &RectangleInput::ms, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.msKey },
    { &RectangleInput::dLeft, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.dLeftKey },
    { &RectangleInput::dRight, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.dRightKey },
    { &RectangleInput::dDown, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.dDownKey },
    { &RectangleInput::dUp, Persistence::read<Persistence::Pages::RuntimeRemapping>()->keyRemapping.dUpKey },
};

KeyMapping* getKeymap() {
  bool remapped = Persistence::isnt0xFF(
      Persistence::read<Persistence::Pages::RuntimeRemapping>()
          ->keyRemapping.configured);

  return remapped ? (KeyMapping*)remappedKeymap : (KeyMapping*)defaultKeymap;
}
