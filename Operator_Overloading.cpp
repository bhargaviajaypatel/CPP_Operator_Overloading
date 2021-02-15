#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class Num
{
	private:
	int n,i;

	public:
	void getNum()
	{
		cout<<"Enter a number to be incremented:"<<endl;
		cin>>n;
		cout<<"Enter a number to be decremented:"<<endl;
		cin>>i;
	}
	void operator++(void)
	{
		n++;
	}
	void operator--(void)
	{
		i--;
	}
	void dispNum()
	{
		cout<<"The incremented number is:"<<n<<endl;
		cout<<"The decremented number is:"<<i<<endl;
	}
};
void main()
{
	clrscr();
	Num obj1;
	obj1.getNum();
	obj1++;
	obj1--;
	obj1.dispNum();
	getch();
}