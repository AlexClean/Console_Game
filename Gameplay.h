#pragma once
#include "Monster.h"
#include "Dragon.h"
#include "Fight.h"
#include "Gost.h"
#include"Queue.h"
#include "Buildings.h"
#include "Barraks.h"
#include "Hospital.h"

class Gameplay
{
private:
	Queue* spartans;
	Fight* fight;
	Buildings* hospital;
	Buildings* barraks;
	int money;
	int temple;
public:
	Gameplay();
	void Start();
private:
	void Menu();
	void Build();
	void Make_Hospital();
	void Make_Barraks();
public:
	~Gameplay();
};

