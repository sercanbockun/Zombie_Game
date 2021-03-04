#include "Tile.h"
#include "Object.h"
#include "peashooter.h"
#include "Card.h"
#include"Plantsgame.h"

using namespace std;


Tile::Tile(double xIn, double yIn ) : Object(xIn, yIn) ,IsFull() {};

void Tile::drawtiles(PlantsGame* e,Tile*a) {
   
    
        if (a->IsFull)
        {
            e->DrawRect(a->x, a->y, 49, 49, olc::BLACK);
        }
        else
        {
            if (e->GetMouseX() > a->x && e->GetMouseX() < a->x + 50 && e->GetMouseY() > a->y && e->GetMouseY() < a->y + 50)
            {
               e-> DrawRect(a->x, a->y, 49, 49, olc::WHITE);
            }

            else {
                e->DrawRect(a->x, a->y, 49, 49, olc::VERY_DARK_GREY);
            }
        }

    
}

void Tile::Plant_Death(OrganicObject* d) {
    if (x == d->getx() && y == d->gety())
        IsFull = false;
}

void Tile::YesFull() {
    IsFull = TRUE;
    
}

bool Tile::NoFull() {
    if (IsFull==false)
        return true;
    else
        return false;

}

bool Tile::press(PlantsGame* p) {
    if (p->GetMouseX() > x && p->GetMouseX() < x + 50 && p->GetMouseY() > y && p->GetMouseY() < y + 50)
        return true;
    else
        return false;
}
double Tile::getx() {
    return x;
}

double Tile::gety() {
    return y;
}


Sunflower* Tile::createsunf() {
    return new Sunflower(x, y, 100, 5, 3, 100);
}
Peashooter*  Tile::createpeash() {
    return new Peashooter(x, y, 100, 0, 3, 125);
}
ColdPeashooter*  Tile::createcoldpeash() {
    return new ColdPeashooter(x, y, 100, 5, 3, 100);
}
Torchwood*  Tile::createtorchw() {
    return new Torchwood(x, y, 100,125);
}
Zombie* Tile::createzombie(PlantsGame* ptr) {
    return new Zombie(ptr->ScreenWidth(), y, 100, 10, 4, 20, 40);
}
Toxiczombie* Tile::createtoxzombie(PlantsGame* ptr) {
    return new Toxiczombie(ptr->ScreenWidth(), y, 100, 10, 4, 20, 20);
}