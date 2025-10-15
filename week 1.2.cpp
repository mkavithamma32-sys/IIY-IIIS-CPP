#include <iostream>
using namespace std;
//Function using call by value
void callByValue(int a)
{
	a=a+10;
	cout << "Inside callBy Value,a=" <<a<<endl;
}
//Function using call by Reference
void callByReference(int &b)
{
	b=b+10;
	cout <<"Inside callBy Reference, b=" <<b<<endl;
}
int main()
{
	int x=5, y=5;
	cout <<"Before callBy Value, x=" <<x<<endl;
	callByValue(x);
	cout <<"After callBy value, x=" <<x<<endl;
	cout <<"-------------------"<<endl;
	cout <<"Before callBy Reference, y=" <<y<<endl;
	callByReference(y);
	cout <<"After callBy Reference, y=" <<y<<endl;
	return 0;
}
