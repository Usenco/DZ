#pragma once
#include "event.h"
#include <string>
class Custom : public Event
{
protected:
	string description;
public:
	Custom();
	Custom(string description, Date date, Time_ time);
	~Custom();

	void setdescription(string description);
	string getdescription();

	virtual void show();
	virtual string type();
	virtual string toString();
};
