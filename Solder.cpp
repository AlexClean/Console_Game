#include "Solder.h"

//#include <iostream>
//using std::cout;
//using std::endl;

Solder::Solder()
{
	health = 10;
	damage = 4;
	moral = 0;
	type = 1;
}

int Solder::Atack()
{
	return damage + moral;
}

void Solder::Less_Health(int less)
{
}

void Solder::Show()
{
	cout << "health is " << health << "\t";
	cout << "moral is " << moral << "\t";
	cout << "strenght is " << damage << endl;
}

void Solder::Set_Type(int t)
{
	type = t;
}

void Solder::AddMoral(int add)
{
	moral += add;
}

void Solder::LessMoral(int less)
{
	moral -= less;
}

void Solder::AddHealth(int add)
{
	health += add;
}

void Solder::LessHealth(int less)
{
	health -= less;
}

int Solder::Get_Health()
{
	return health;
}

void Solder::Restore()
{
	
	if (type == 1)
	{
		type = 1;
		health = 10;
		moral = 0;
		damage = 2;
	}
	else if (type == 2)
	{
		type = 2;
		health = 15;
		moral = 0;
		damage = 4;
	}
	else if (type == 3)
	{
		type = 3;
		health = 20;
		moral = 5;
		damage = 2;
	}
	else if (type == 4)
	{
		type = 4;
		health = 22;
		moral = 7;
		damage = 2;
	}
	else if (type == 5)
	{
		type = 5;
		health = 25;
		moral = 10;
		damage = 2;
	}
	else
	{
		cout << "Wrong type of Being\n";
		return;
	}

}
