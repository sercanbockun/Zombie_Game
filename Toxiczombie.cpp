#include "Toxiczombie.h"


Toxiczombie::Toxiczombie(double x, double y, double HP, double attackCD, double attackRate, double speed, double damage) : Zombie(x, y, HP, attackCD, attackRate, speed, damage) {
};


void Toxiczombie::draw(PlantsGame* ptr) {
	ptr->DrawSprite(x, y, new olc::Sprite("Sprites/toxiczombie.png"), 1);
}
void Toxiczombie::move(double fElapsedTime) {

		x -= speed * fElapsedTime;
	
}