#include "Torchwood.h"
#include"zombie.h"
#include"seed.h"





Torchwood::Torchwood(double x, double y, double HP, double TorchwoodCost) : OrganicObject(x, y, HP), TorchwoodCost(100) {};




double Torchwood::trchwddistobject(Object* ptr) {
    double ret = ptr->distance(x, y);
    return(ret);
}

void Torchwood::draw(PlantsGame* ptr) {
    ptr->DrawSprite(x, y, new olc::Sprite("Sprites/Torchwoodplant1.png"), 1);
}



void Torchwood::takedamage(double damageIn1) {
   
    HP -= damageIn1/3;

}

double Torchwood::seedtrchwddist(Object* ptr) {
    double ret = ptr->distance(x, y);
    return(ret);
}