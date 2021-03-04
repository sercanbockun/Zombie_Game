#pragma once
#include "peashooter.h"
#include "ColdSeed.h"

class ColdPeashooter :public Peashooter

{
	double attackCD, attackRate;

	int ColdPeashooterCost;

public:

	ColdPeashooter(double x, double y, double HP, double attackCD, double attackRate, int PeashooterCost);

	ColdSeed* createseed();
	void draw(PlantsGame* ptr);
};

