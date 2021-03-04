#pragma once
#include "Object.h"
#include "seed.h"
#include <vector>
class ColdSeed : public Seed 
{


public:


ColdSeed(double x, double y, double damage, double speed);


void draw(PlantsGame* ptr);
void SeedAttack(Zombie* ptr);









};

