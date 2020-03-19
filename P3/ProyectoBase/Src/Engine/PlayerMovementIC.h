#pragma once
#include "InputComponent.h"

namespace Ogre {
    typedef float Real;
    template <int dims, typename T> class Vector;
    typedef Vector<3, Real> Vector3;
} // namespace Ogre

class PlayerMovementIC : public InputComponent {

  private:
    float _speed;

    bool wDown = false, sDown = false, aDown = false, dDown = false;

  public:
    PlayerMovementIC();
    virtual ~PlayerMovementIC();

    // Updates the entity's transform's
    // position upon pressing WASD keys
    virtual void handleInput(const SDL_Event& _event);

    // Sets the speed the entity moves at
    void setMovementSpeed(float speed);
};
