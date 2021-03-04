#pragma once
#include "Object.h"
#include "OrganicObject.h"
#include"Plantsgame.h"
#include "Sunflower.h"
#include "Torchwood.h"
#include "ColdPeashooter.h"
#include "Toxiczombie.h"

class Sunflower;


class Tile : public Object
{
  
    PlantsGame* e;
  bool IsFull;

public:
 
    
    Tile(double xIn, double yIn);
    void drawtiles (PlantsGame*e,Tile*a);
    void Plant_Death(OrganicObject* d);
    void YesFull();
    bool NoFull();
    bool press(PlantsGame* p);
    double getx();
    double gety();
    Sunflower* createsunf();
    Peashooter* createpeash();
    ColdPeashooter* createcoldpeash();
    Torchwood* createtorchw();
    Zombie* createzombie(PlantsGame* ptr);
    Toxiczombie* createtoxzombie(PlantsGame* ptr);

};


 