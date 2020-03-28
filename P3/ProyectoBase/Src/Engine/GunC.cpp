#include "GunC.h"

GunC::GunC() {}

GunC::~GunC() {}

bool GunC::reload() {
    if (_bulletchamber < _bulletchamberMax && _munition > 0) {
        int gunreload = _bulletchamberMax - _bulletchamber;

        if (gunreload > _munition)
            gunreload = _munition;

        _bulletchamber += gunreload;
        _munition -= gunreload;

        return true;
    } else
        return false;
}

std::string GunC::getBulletTag() { return _myBulletTag; }

int GunC::getbulletchamber() { return _bulletchamber; }

int GunC::getmunition() { return _munition; }

float GunC::getcadence() { return _cadence; }

bool GunC::getautomatic() { return _automatic; }

void GunC::setBulletTag(std::string bulletTag) { _myBulletTag = bulletTag; }

void GunC::setbulletchamber(int bulletchamberMax) {
    _bulletchamberMax = bulletchamberMax;
    _bulletchamber = bulletchamberMax;
}

void GunC::setmunition(int munition) { _munition = munition; }

void GunC::setcadence(float cadence) { _cadence = cadence; }

void GunC::setautomatic(bool automatic) {
    _automatic = automatic;
}

void GunC::setTransform(TransformComponent* trans) { myTransform = trans; }

bool GunC::mmunitionleft() {
    if (_bulletchamber == 0 && _munition == 0)
        return false;
    else
        return true;
}
