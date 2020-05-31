#pragma once
#include "Monster.h"
#include <iostream>
using namespace std;

class Solder :
	public Monster
{
private:
	int type;
public:
	Solder();
	virtual int Atack();
	virtual void Less_Health(int less);
	virtual void Show();
	void Set_Type(int);
	void AddMoral(int);
	void LessMoral(int);
	void AddHealth(int);
	void LessHealth(int less);
	int Get_Health();
	
	void Restore();
	//virtual friend ostream& operator<<(ostream& out, Monster& obj);
};

