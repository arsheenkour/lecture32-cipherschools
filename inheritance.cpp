#include<iostream>
using namespace std;
class Vehicle
{
	private:
		
	int number_tyres;
	string name;
	int capacity;
	int milage;


};
class Schoolbus: public Vehicle
{
	string school_name;
	int number_holidays;
	public:
		void printnameofschool()
		{
			cout<<"nameof school"<<name;
		}
	};

class Car: private Vehicle
{
	private:

	int numberofairbags;
	int ac_consumption;
	public :
		void setmilage(int milage)
		{
			this->milage=milage;
		}
		public:
		void calculatemilage()
		{
			cout<<"the milage is"<milage;
		}
}
int main()
{
Car a;
a.setmilage(50);
a.calculatemilage()	;
}