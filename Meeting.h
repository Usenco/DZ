#pragma once
#include "event.h"
#include <string>
using namespace std;
//Meeting 

class Meeting :
	public Event
{
protected:
	string place;
	string person;

public:
	Meeting();
	Meeting(Date d, Time_ t, string place, string person);
	~Meeting();

	void setplace(string place);
	void setperson(string person);
	string getplace()const&;
	string getperson()const&;
	string toString();
	 
		
	virtual void show();
	virtual string type();

};
