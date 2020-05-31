
#include "Gameplay.h"
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

ostream& operator<<(ostream& out,const Monster& obj)
{
	out << "Health is " << obj.health << "\tDamage is " << obj.damage << "\tmoral is " << obj.moral << endl;
	return out;
}

int main()
{
	srand(time(0));
	Gameplay Game;
	Game.Start();


	return 0;
}