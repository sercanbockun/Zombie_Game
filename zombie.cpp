#include "Zombie.h"




using namespace std;



Zombie::Zombie(double x, double y, double HP, 
	double attackCD,double attackRate, double speedIn, double damageIn) : OrganicObject(x, y, HP), attackCD(attackCD), attackRate(attackRate), speed(speedIn), damage(damageIn) {
}

void Zombie:: move (double fElapsedTime) {
    if (canmove)
        x -= speed * fElapsedTime;
   
}

double Zombie::update_cd(double fElapsedTime) {
    attackCD -= fElapsedTime;
    return attackCD;
}

double Zombie::date_cd() {
    attackCD = attackRate;
    return attackCD;
}

void Zombie::Attack(OrganicObject* p) {
    p->takedamage(damage);
}


bool Zombie::left_line() {
    if (x <= 0)
        return true;
    else
        return false;
}

double Zombie::seedzombiedist(Object* ptr) {
    double ret = ptr->distance(x, y);
    return(ret);
}
void Zombie::draw(PlantsGame* ptr) {
    ptr->DrawSprite(x, y, new olc::Sprite("Sprites/zombie1.png"), 1);
}

