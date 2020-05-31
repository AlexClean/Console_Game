#include "Barraks.h"

void Barraks::Level_Up()
{
	if (level == 5)
	{
		cout << "You have top level of Barraks\n";
		return;
	}
	level++;
}

void Barraks::Building_In(Queue* obj)
{
	if (level == 0)
	{
		cout << "\n---You don`t have Barraks yet!\n--Build at least one stage first\n";
		return;
	}
	cout << "\n---You are in the Barraks!---\n";
	if (!status)
	{
		cout << "---You alredy use your chanse to create spartans\n";
		cout << "---You have to fight Dragon first\n";
		system("PAUSE");
		return;
	}

	cout << "\n---Do you want to create a spartans? y/n ";
	char choise;
	cin >> choise;
	if (level == 1)
	{
		if (choise == 'y')
		{
			Solder spartan;
			int howmany = 0;
			for (int i = 0; i < 10; i++)
			{
				obj->Additem(spartan);
				howmany++;
				if (obj->Isfool())
					break;
			}
			cout << "\n----You have " << howmany << " more spartans level " << level;
			cout << "\n----Now you are ready for the next fight!----\n";
			status = false;
			system("PAUSE");
			return;
		}
		else
		{
			cout << "Okay!\n";
			return;
		}
	}
	else if (level == 2)
	{
		if (choise == 'y')
		{
			Solder spartan;
			spartan.Set_Type(2);
			spartan.AddMoral(2);
			spartan.AddHealth(5);
			int howmany = 0;
			for (int i = 0; i < 15; i++)
			{
				obj->Additem(spartan);
				howmany++;
				if (obj->Isfool())
					break;
			}
			cout << "\n----You have " << howmany << " more spartans level " << level;
			cout << "\n----Now you are ready for the next fight!----\n";
			status = false;
			system("PAUSE");
			return;
		}
		else
		{
			cout << "Okay!\n";
			return;
		}
	}
	else if (level == 3)
	{
		if (choise == 'y')
		{
			Solder spartan;
			spartan.Set_Type(3);
			spartan.AddMoral(5);
			spartan.AddHealth(10);
			int howmany = 0;
			for (int i = 0; i < 20; i++)
			{
				obj->Additem(spartan);
				howmany++;
				if (obj->Isfool())
					break;
			}
			cout << "\n----You have " << howmany << " more spartans level " << level;
			cout << "\n----Now you are ready for the next fight!----\n";
			status = false;
			system("PAUSE");
			return;
		}
		else
		{
			cout << "Okay!\n";
			return;
		}
	}
	else if (level == 4)
	{
		if (choise == 'y')
		{
			Solder spartan;
			spartan.Set_Type(4);
			spartan.AddMoral(7);
			spartan.AddHealth(12);
			int howmany = 0;
			for (int i = 0; i < 25; i++)
			{
				obj->Additem(spartan);
				howmany++;
				if (obj->Isfool())
					break;
			}
			cout << "\n----You have " << howmany << " more spartans level " << level;
			cout << "\n----Now you are ready for the next fight!----\n";
			status = false;
			system("PAUSE");
			return;
		}
		else
		{
			cout << "Okay!\n";
			return;
		}
	}
	else if (level == 5)
	{
		if (choise == 'y')
		{
			Solder spartan;
			spartan.Set_Type(5);
			spartan.AddMoral(10);
			spartan.AddHealth(15);
			int howmany = 0;
			for (int i = 0; i < 30; i++)
			{
				obj->Additem(spartan);
				howmany++;
				if (obj->Isfool())
					break;
			}
			cout << "\n----You have " << howmany << " more spartans level " << level;
			cout << "\n----Now you are ready for the next fight!----\n";
			status = false;
			system("PAUSE");
			return;
		}
		else
		{
			cout << "Okay!\n";
			return;
		}
	}
	else
	{
		cout << "There is no such stage for Barraks!\n";
		return;
	}
}
