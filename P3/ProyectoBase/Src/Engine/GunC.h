#pragma once
#include "Component.h"
#include <string>
class TransformComponent;

class GunC : public Component {
  protected:
    int _bulletchamber;    // Ammunition in chamber
    int _bulletchamberMax; // Total ammunition in chamber
    int _munition;         // Total ammunition stored
    float _cadence;          // Gun cadence
    bool _automatic;   // One shot or multiple shot gun
    std::string _myBulletTag;  // Tag of my bullets
    std::string _myBulletType; // Type of my bullets
    TransformComponent* myTransform;
  public:
    GunC();
    ~GunC();

    // Tries to reload the gun, returns false if failed
    bool reload();

    // Tries to fire a shot, returns false if gun is empty
    virtual bool shoot() = 0;

    // Returns wheter or not there is ammunition left in the gun
    bool mmunitionleft();

    // Getters
    std::string getBulletTag(); // Return the tag of my bullets
    int getbulletchamber();  // Return the remaining ammunition in the chamber
    int getmunition();       // Return the remaining ammo
    float getcadence();      // Returns the cadence of a bullet
    bool getautomatic(); // Returns if a weapon is semi-automatic
    //Setters
    void setBulletTag(std::string _bulletTag);
    void setbulletchamber(int bulletchamberMax);  
    void setmunition(int munition);     
    void setcadence(float cadence);    
    void setautomatic(bool semiautomatic);

    void setTransform(TransformComponent* trans);
};