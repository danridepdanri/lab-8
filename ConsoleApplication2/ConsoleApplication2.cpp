// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Time.h"
#include "Triad.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");    //������� ����
	Triad N;
	N.Read();
	N.display();
	N.incr();
	N.display();
	Time M;
	M.Read();
	M.display();
	M.add_sec();
	M.display();
	M.incr();
	M.display();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

/*15. �������� ���� Triad (����� �����); ��������� ������ ���������
���� �� 1. ��������� ����-���������� Time � ������: ������, �������,
�������. ������������� ������ ��������� ���� �� 1 � ��������� ������
��������� �� � ������ � ������.*/