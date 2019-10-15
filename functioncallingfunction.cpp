#include<iostream>
#include<conio.h>
using namespace std;
//class
class example
{
	public:
		void display(){
			cout<<"Hello";
		}
		void displayo();
	
};
void example::displayo(){
	cout<<"World";
}
int main()
{
	example e;
	e.display();
	e.displayo();
	getch();
	return 0;
 } 
