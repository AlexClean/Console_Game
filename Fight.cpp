#include "Fight.h"

Fight::Fight()
{
	luck = 0;
}
 
void Fight::Who_Is(Monster* obj)
{
	if (typeid(*obj) == typeid(Dragon))
		cout << "Dragon ";
	else if (typeid(*obj) == typeid(Gost))
		cout << "Gost ";
	else
		cout << "Spartans ";
}

int Fight::Make_Fight(Monster* monstr, Queue* spartan)
{
	cout << "\nLet`s fight begin!\n";
	luck = Get_luck();
	if (luck)
	{
		cout << "You are lucky today!";
		cout << "Spartans will atack first!\n";
	}
	else
	{
		cout << "Luck is not on your side today ";
		Who_Is(monstr);
		cout << " will atack first!\n";
	}
	while (true)
	{
		if (luck)
		{
			Spartans_Attack(monstr, spartan);
			if (monstr->Get_Health() <= 0)
			{
				Who_Is(monstr);//показывает имя монстра
				cout << "is dead\n";
				return 100;
				cout << "\n will it goes far than return?\n";
				break;
			}
			else
			{
				Who_Is(monstr);
				cout << "has a " << monstr->Get_Health() << " of health\n";
			}
			if (typeid(*monstr) == typeid(Gost))
				Gost_Attack(monstr, spartan);
			else
				Monster_Attack(monstr, spartan);
			if (spartan->Queuequantity() <= 0)
			{
				cout << "Spartans is dead\n";
				return 0;
				break;
			}
		}
		else
		{
			if (typeid(*monstr) == typeid(Gost))
				Gost_Attack(monstr, spartan);
			else
				Monster_Attack(monstr, spartan);
			if (spartan->Queuequantity() <= 0)
			{
				cout << "Spartans is dead\n";
				return 0;
				break;
			}
			Spartans_Attack(monstr, spartan);
			if (monstr->Get_Health() <= 0)
			{
				Who_Is(monstr);//показывает имя монстра
				cout << "is dead\n";
				return 100;
				break;
			}
			else
			{
				Who_Is(monstr);
				cout << "has a " << monstr->Get_Health() << " of health\n";
			}
		}
		
	}
	

}

void Fight::Monster_Attack(Monster* monstr, Queue* spartans)
{
	cout << "Now ";
	Who_Is(monstr);
	cout << " attack!\n";
	system("PAUSE");
	spartans->Injure(monstr->Atack());
	
	
	cout << "You have "<<spartans->Queuequantity()<< " Spartans left\n";
	//spartans->Show();
	//cout << "\nNow ";
	system("Pause");
}

void Fight::Gost_Attack(Monster* monstr, Queue* spartans)
{
	cout << "Now ";
	Who_Is(monstr);
	cout << " attack!\n";
	system("PAUSE");
	spartans->GostInjure(monstr->Atack());


	cout << "You have " << spartans->Queuequantity() << " Spartans left\n";
	//spartans->Show();
	//cout << "\nNow ";
	system("Pause");
}

void Fight::Spartans_Attack(Monster* monstr, Queue* spartans)
{
	cout << "Spartans attack \n";
	monstr->Less_Health(spartans->Attack());
}

int Fight::Get_luck()
{
	luck = rand() % 2;
	return luck;
}
