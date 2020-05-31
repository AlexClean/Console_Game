#pragma once
#include <iostream>
#include "Monster.h"
#include "Solder.h"
using namespace std;
class Queue
{
private:
	Solder* mass;
	int count; //количество видимых элементов в очереди в настоящий момент
	int size;  //общий размер очереди
public:
	Queue();
	~Queue();
	bool Isempty();
	bool Isfool();
	int Queuequantity();//возвращает количество 
	bool Additem(const Solder& item);
	bool Delitem(int numb);
	void Show();
	void RestoreHealth(int howmany);
	int ShowHealth();
	void AddMoral(int);
	void LessMoral(int);
	void AddHealth(int add); // добавить здоровья из очереди
	void LessHealth(int less); //уменьшить здоровье для тех, кто в очереди
	void Injure(int less);
	void GostInjure(int);
	int Attack();

};



