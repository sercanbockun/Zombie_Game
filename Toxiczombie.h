#pragma once
#include "zombie.h"
class Toxiczombie : public Zombie
{
public:

	bool canmove = true;
	Toxiczombie(double x, double y, double HP, double attackCD, double attackRate, double speed, double damage);
	void draw(PlantsGame* ptr);

	
	void move(double fElapsedTime);
};

