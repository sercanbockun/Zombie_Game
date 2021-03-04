#pragma once
#include "OrganicObject.h"
#include "Seed.h"


class Torchwood : public OrganicObject
{


	double TorchwoodCost;

public:

	Torchwood(double x, double y, double HP, double TorchwoodCost);


	void draw(PlantsGame* ptr);

	double trchwddistobject(Object* ptr);
	double seedtrchwddist(Object* ptr);
	void takedamage(double damageIN1);
};


