#pragma once
#include <iostream>
#include "Queue.h"
using std::cout;

class Buildings
{
protected:
	int level = 0;
	bool status = false;
public:
	void Status_False()
	{
		status = false;
	}
	void Status_True()
	{
		status = true;
	}
	bool Is_Status_True()
	{
		if (status)
			return status;
		else
			return status;
	}
	int Get_Level()
	{
		return level;
	}
	virtual void Level_Up() = 0;
	virtual void Building_In(Queue* obj) = 0;
};

