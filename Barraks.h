#pragma once
#include "Buildings.h"
#include "Solder.h"
class Barraks :
	public Buildings
{
	virtual void Level_Up();
	virtual void Building_In(Queue* obj);
	
};

