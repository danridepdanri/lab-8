#pragma once
#include <iostream>
#include <string>
#include<cassert>
using namespace std;
class Triad
{
public:
	float one, two, three;

	void incr() {
		one++;
		two++;
		three++;
	};
	void Read() {
		
			cout << "1': "; 
			cin >> one;
			cout << "2': ";
			cin >> two;
			cout << "3': "; 
			cin >> three;
			
	};
	void display() {   // отображение на дисплей 
		cout << " 1: " <<  one << " 2: " << two << " 3: " << three << endl;
	}

	Triad();
	~Triad();
};

