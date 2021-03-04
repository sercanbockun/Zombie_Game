#include "ColdSeed.h"
#include "seed.h"
#include "Object.h"


ColdSeed::ColdSeed(double x, double y, double damageIn, double speedIn) : Seed(x,y,damageIn,speedIn) {   
};


void ColdSeed::draw(PlantsGame* ptr) {
    ptr->DrawSprite(x, y, new olc::Sprite("Sprites/blueseed.png"), 1);
}

void ColdSeed::SeedAttack(Zombie* ptr) {
    ptr->takedamage(damage);
    ptr->canmove = false;


}

