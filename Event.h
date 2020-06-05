#pragma once
#include "Date.h"
#include "Time_.h"

class Event{
protected:
	Date date;
	Time_ time;
public:
	Event();
	Event(Date date, Time_ t);
	~Event();

	Date get_Date()const&;
	Time_ get_Time()const&;

	void set_Date(Date d);
	void set_Time(Time_ t);

	virtual void show() = 0;
	virtual string type() = 0;
	virtual string toString() = 0;


	bool operator <(const Event& obj)const&;
	bool operator >(const Event& obj)const&;
	bool operator ==(const Event& obj)const&;
	bool operator <=(const Event& obj)const&;
	bool operator >=(const Event& obj)const&;
	
};
