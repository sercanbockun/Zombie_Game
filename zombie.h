#pragma once
#include "OrganicObject.h"
#include <vector>
#include "seed.h"




class Zombie: public OrganicObject
{
	

protected:
double speed;
double attackCD;
double attackRate;
double damage;

public:

	
	Zombie(double x, double y, double HP,
		double attackCD, double attackRate, double speed, double damage);
	double update_cd(double fElapsedTime);
	double date_cd();
	virtual void move(double fEllapsedtime);
	void Attack(OrganicObject* ptr);
	bool left_line();
	void draw(PlantsGame* ptr);
	double seedzombiedist(Object* ptr);
	bool canmove = true;
};







