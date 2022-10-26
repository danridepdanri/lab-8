#pragma once
#include "Triad.h"; 
class Time : public Triad{
public:
	int h, m, s;

	void incr() {
		h++;
		m++;
		s++;
	};
	void Read() {

		cout << "h': ";
		cin >> h;
		cout << "m': ";
		cin >> m;
		cout << "s': ";
		cin >> s;

	};
	void add_minute() {
		int minute_add;
		cout << "Сколько минут добавить: ";
		cin >> minute_add;
		m += minute_add;
	}
	void add_sec() {
		int sec_add;
		cout << "Сколько секунд добавить: ";
		cin >> sec_add;
		s += sec_add;
	}
	void display() {   // отображение на дисплей 
		cout << " h: " << h << " m: " << m << " s: " << s << endl;
	}
	Time();
	~Time();
};

