#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Distance
{
	private:
	int feet,inches;

	public:
	void readDistance()
	{
		cout<<"Enter feets:";
		cin>>feet;
		cout<<"Enter inches:";
		cin>>inches;
	}
	Distance operator+(Distance dist1)
	{
		Distance d;
		d.feet=feet+dist1.feet;
		d.inches=inches+dist1.inches;
		return d;
	}
	void displayDistance()
	{
		cout<<"Feets:"<<feet<<endl;
		cout<<"Inches:"<<inches<<endl;
	}
};
void main()
{
	clrscr();
	Distance d1,d2,d3;
	d1.readDistance();
	d2.readDistance();
	d3=d1+d2;
	d3.displayDistance();
	getch();
}