#include<iostream>
using namespace std;
class Student{
	public:
		int id;
		string name;
		void display(){
			cout<<"ID:"<<id<<",Name:"<<name<<endl;
		}
};
int main(){
	Student s1;
	s1.id=234;
	s1.name="Kavitha";
	Student*ptr;   //Pointer to class
	ptr=&s1;       //Store address of object
	//Access members using pointer
	ptr->display();   //Using arrow operator
	cout<<ptr->id;    //Access data members
}
