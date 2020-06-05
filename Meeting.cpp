#include "Meeting.h"

//Meeting 

Meeting::Meeting()
{

	place = "Kharkiv";
	person = "Dobrenko Anna Olegovna";

}

Meeting::Meeting(Date d, Time_ t, string place, string person)
	:Event(d, t)
{
	this->place = place;
	this->person = person;
}

Meeting::~Meeting()
{
}

void Meeting::setplace(string place)
{
	this->place = place;
}

void Meeting::setperson(string person)
{
	this->person = person;
}

string Meeting::getplace() const&
{
	return place;
}

string Meeting::getperson() const&
{
	return person;
}

string Meeting::toString()
{
	return string();
}
 

void Meeting::show()
{
	cout << "----------------------------------" << endl;
	cout << "Date: " << this->date << endl << "Time: " << this->time << endl;
	cout << "Place: " << this->place << endl << "Person: " << this->person << endl;
	cout << "----------------------------------" << endl;
}

string Meeting::type()
{
	return "Meeting";
}
