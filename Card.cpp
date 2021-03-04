


#include "Object.h"
#include "Card.h"
#include"Plantsgame.h"

using namespace std;
class Card;

Card::Card(double xIn, double yIn) : Object(xIn, yIn), IsSelected() {}
	

    void Card::selectCards(PlantsGame * e) {
      if (IsSelected)
    {
        e->DrawRect(x, y, 49, 49, olc::RED);
    }
    else
    {
        if (e->GetMouseX() > x && e->GetMouseX() < x + 50 && e->GetMouseY() > y && e->GetMouseY() < y + 50)
        {
            e->DrawRect(x, y, 49, 49, olc::WHITE);
        }

        else
        {
            e->DrawRect(x, y, 49, 49, olc::BLACK);
        }
    }

};


    void Card::draw(PlantsGame* e, olc::Sprite* spriteptr, int a, int cost) {

        e->FillRect(x, y, 49, 49, olc::WHITE);
        e->DrawSprite(x, y, spriteptr, 1);
        e->DrawString(x + 30, y + 40, to_string(cost), olc::DARK_RED);

    }




    bool Card::select(PlantsGame* p) {

        if (p->GetMouseX() > x && p->GetMouseX() < x + 50 && p->GetMouseY() > y && p->GetMouseY() < y + 50) {
            if (!IsSelected) { IsSelected = true;
            return true; }
        }
        return false;
    }

    void Card::NotSelected() {
        IsSelected = false;
    }
    bool Card::YesSelected() {
        if (IsSelected == true)
            return true;
        else
            return false;
    }

    bool Card::deselecting(PlantsGame* ptr) {
        return (ptr->GetMouseX() > x && ptr->GetMouseX() < x + 50 && ptr->GetMouseY() > y && ptr->GetMouseY() < y + 50);
    }

    bool Card::getifselect() {
        return IsSelected;
    }
