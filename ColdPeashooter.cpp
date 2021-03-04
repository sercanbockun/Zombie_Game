#include "ColdPeashooter.h"


ColdPeashooter::ColdPeashooter(double x, double y, double HP, double attackCD, double attackRate, int PeashooterCost) : Peashooter(x,  y,  HP,  attackCD,  attackRate,  PeashooterCost) {

}

ColdSeed* ColdPeashooter::createseed() {
	return new ColdSeed(x, y, 50, 25);

}


void ColdPeashooter::draw(PlantsGame* ptr) {
	ptr->DrawSprite(x, y, new olc::Sprite("Sprites/cold1.png"), 1);
}

	
