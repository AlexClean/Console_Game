#pragma once
#include "Buildings.h"
#include "Queue.h"
class Hospital :
	public Buildings
{
	virtual void Building_In(Queue* obj);
	virtual void Level_Up();
};

