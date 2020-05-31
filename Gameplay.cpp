#include "Gameplay.h"

Gameplay::Gameplay()
{
	spartans = new Queue;
	fight = new Fight; 
	hospital = new Hospital;
	barraks = new Barraks;
	money = 0;
	temple = 0;
}

void Gameplay::Start()
{
	cout << "----This is a Game----" << endl;
	cout << "---You have to fight Dragon and stay alive!\n---For each fight you will have 100 coints" << endl;
	cout << "---Use it to build Barraks and Hospital\n";
	cout << "---You can create new spartans in the Barraks and heal them in the Hospital once between fights\n";
	cout << "\n---Press 1 to continue Game or 0 to exit ";
	bool choise;
	cin >> choise;
	if (choise)
	{
		Menu();
		return;
	}
	else if (choise == 0)
	{
		cout << "Game is over" << endl;
		system("PAUSE");
		return;
	}
	else
		return;

}

void Gameplay::Menu()
{
	cout << "\n---You have " << money << " coints " << endl;
	cout << "---To fight Dragon or Gost press 1" << endl;
	cout << "---to build Barraks or Hospital press 2 " << endl;
	cout << "---To go to Barraks or Hospital press 3 " << endl;
	cout << "--(To build 1 stage of Hospital or Barraks you need at least 100 coints)--" << endl;
	cout << "---To show you spartans conditions press 4 \n";
	cout << "---Press 0 to exit the game\n ";
	cout << "---Make choise---" << endl;
	int choise;
	cin >> choise;
	if (choise == 1)
	{
		cout << "---If you want to fight Dragon press 1 to fight Gost press 0\n";
		bool ch;
		cin >> ch;
		if (ch)
		{
			Monster* dragon = new Dragon;
			money = money + fight->Make_Fight(dragon, spartans);
			barraks->Status_True();
			hospital->Status_True();
			if (dragon != nullptr)
				delete dragon;
		}
			
		else if (!ch)
		{
			Monster* gost = new Gost;
			money = money + fight->Make_Fight(gost, spartans);
			barraks->Status_True();
			hospital->Status_True();
			if (gost != nullptr)
				delete gost;
		}
			
		else
		{
			cout << "\n---Wrong value\n";
			return;
		}
	}
	else if (choise == 2)
	{
		if (money < 100)
		{
			cout << "\n--You don`t have enought money";
			cout << "Go fight the Dragon first\n" << endl;
			system("PAUSE");
			Menu();
		}
		else
			Build();
	}
	else if (choise == 3)
	{
		
		cout << "\n---To the Barraks press 1 to Hospital press 0 ";
		bool ch;
		cin >> ch;
		if (ch)
		{		
			if (barraks->Is_Status_True())
				barraks->Building_In(spartans);
			else
				cout << "Go fight first, you have use your chanse to get spartans\n";
		}	
		else if (!ch)
		{
			if (hospital->Is_Status_True())
				hospital->Building_In(spartans);
			else
				cout << "You have to fight first\n";
		}
			
	}
	else if (choise == 4)
		spartans->Show();
	else if (choise == 0)
	{
		cout << "Game is over" << endl;
		system("PAUSE");
		return;
	}

	Menu();
}


void Gameplay::Build()
{
	cout << "----If you want to build Barraks press 1 if Hospital press 0---- ";
	int choise;
	cin >> choise;
	if (choise == 1)
	{
		if (barraks->Get_Level() < 5)
			Make_Barraks();
		else
		{
			cout << "You have top level of Barraks\n";
			return;
		}
	}
	else if (choise == 0)
	{
		if (hospital->Get_Level() < 5)
			Make_Hospital();
		else
		{
			cout << "You have top level of Hospital\n";
		}
	}	
	else
	{
		cout << "Wrong value\n";
		Build();
	}
}

void Gameplay::Make_Hospital()
{
	if (money >= 100)
	{
		cout << "\n---You have " << money << " of money and you can build ";
		cout << "one stage of Hospital " << endl;
		cout << "---Do you want to build it? y/n ";
		char choise;
		cin >> choise;
		if (choise == 'y')
		{	
			hospital->Level_Up();
			money = money - 100;
			cout << "\n----You just build 1 srage of Hospital----" << endl;
			system("PAUSE");
		}
		else if (choise == 'n')
		{
			cout << "\n---Do you want to go back to main Menu? y/n ";
			cin >> choise;
			if (choise == 'y')
				return;
			else
				Make_Hospital();
		}
		else
		{
			cout << "\nWrong value ";
			Make_Hospital();
		}
	}
	else
	{
		cout << "\n--You don`t have enought money to build--\n";
		system("PAUSE");
		return;
	}
}

void Gameplay::Make_Barraks()
{
	if (money >= 100)
	{
		cout << "\n---You have " << money << " of money ";
		cout << "and you can build 1 stage of Barraks" << endl;
		cout << "---Do you want to build it? y/n ";
		char choise;
		cin >> choise;
		if (choise == 'y')
		{
			barraks->Level_Up();
			money = money - 100;
			cout << "\n----You just build 1 srage of Barraks----" << endl;
			system("PAUSE");		
		}
		else
			return;
	}
	else
	{
		cout << "\n--You don`t have enought money to build--\n";
		system("PAUSE");
		return;
	}
}

Gameplay::~Gameplay()
{
	if (spartans != nullptr)
		delete spartans;
	if (fight != nullptr)
		delete fight;
	if (barraks != nullptr)
		delete barraks;
	if (hospital != nullptr)
		delete hospital;
}
