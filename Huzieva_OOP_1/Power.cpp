#include <iostream>
#include <cmath>
#include "Power.h"
using namespace std;





Kaloriinist Kaloriinist::Init(int f, float s)
{
	Kaloriinist tmp;
	tmp.first = f; //���������� 100 � ��������;
	tmp.second = s; //���� �������� � ���������;
	return tmp;
}

Kaloriinist Kaloriinist::Read() //����� �������� � ���������, ���� �������� � ����� Guzeva_OOP_1.cpp;
{
	Kaloriinist tmp;
	cout << "first" << endl;
	cin >> tmp.first;
	cout << "second" << endl;
	cin >> tmp.second;

	return tmp;
}



void Kaloriinist::Power() //����� ���������� �������� ���������� ��������;
{
	float power = (first * second) / 100; //����� ��, �� first � ������, �� ����� ��������� � ��������: 100�=0,1��. ��������� 100�=first, � second=zagalna.   
	cout << "Zagalna kaloriinist" << power << endl;
}

void Kaloriinist::Display() //��������� ������� ���������� ����� � ���������� �������;
{

	Power();

}