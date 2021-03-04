#pragma once
#include "Object.h"
#include"Plantsgame.h"

class Card : public Object
{
	PlantsGame* e;
	bool IsSelected;

public:
	

	Card (double xIn, double yIn);
	void selectCards(PlantsGame*e);


	/*void drawCards(PlantsGame* e);
	void drawCards2(PlantsGame* e);
	void drawCards3(PlantsGame* e);
	void drawCards4(PlantsGame* e);*/



	void draw(PlantsGame* e, olc::Sprite* spriteptr, int a, int cost);
	bool select(PlantsGame* p);
	void NotSelected();
	bool YesSelected();
	bool deselecting(PlantsGame* ptr);
	bool getifselect();
};

