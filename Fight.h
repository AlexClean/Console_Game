#pragma once
#include "Monster.h"
#include "Dragon.h"
#include "Gost.h"
#include "Solder.h"
#include "Queue.h"
#include <ctime>

class Fight
{
private:
	int luck;
public:
	Fight();
	void Who_Is(Monster* obj);
	int Make_Fight(Monster* obj, Queue* obj2);
	void Monster_Attack(Monster* obj, Queue* obj2);
	void Gost_Attack(Monster* obj, Queue* obj2);
	void Spartans_Attack(Monster* obj, Queue* obj2);
	int Get_luck();

};

