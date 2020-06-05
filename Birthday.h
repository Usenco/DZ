#pragma once
#include "Event.h"
#include "Date.h"
#include "Time_.h"
#include <iostream>
#include <string>

using namespace std;

class Birthday : public Event
{
protected:
	string hero;
	string place;
	int age;

public:
	Birthday();
	Birthday(Date d, int age, string hero, string place);
	~Birthday();

	string get_Hero();
	string get_Place();
	int get_Age();

	void set_Hero(string h);
	void set_Place(string p);
	void set_Age(int a);

	void show();
	string toString();
	string type();
};
