#include <iostream>
#include <cmath>
#include "Power.h"
using namespace std;

Kaloriinist Kaloriinist::Init(int f, float s)
{
	Kaloriinist tmp;
	tmp.first = f; //калорійність 100 г продукту;
	tmp.second = s; //маса продукту в кілограмах;
	return tmp;
}

Kaloriinist Kaloriinist::Read() //метод введення з клавіатури, данні беруться з файлу Guzeva_OOP_1.cpp;
	Kaloriinist tmp;
	cout << "first" << endl;
	cin >> tmp.first;
	cout << "second" << endl;
	cin >> tmp.second;

	return tmp;
}



void Kaloriinist::Power() //метод обчислення загальної калорійності продукту;
{
	float power = (first * second) / 100; //Через те, що first в грамах, то треба перевести в кілограми: 100г=0,1кг.   
	cout << "Zagalna kaloriinist" << power << endl;
}

void Kaloriinist::Display() //виведення готових результатів згідно з разрахунку формули;

	Power();

}
