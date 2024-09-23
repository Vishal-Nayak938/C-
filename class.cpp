#include<iostream>
using namespace std;
class student 
{
	private:
	char name,regstasion[10],branch[10];
	int sem;
	public:
	void input();
	void display();
};
void student::input()
{
	cout<<"Enter name ";
	cin>>name;
	cout<<"Enter regd ";
	cin>>regstasion;
	cout<<"branch  ";
	cin>>branch;
	cout<<"sem ";
	cin>>sem;
}
void student:: display()
{
 cout<<"name = "<<name;
 cout<<"\nregstasion = "<<regstasion;
 cout<<"\nbranch = "<<branch;
 cout<<"\nsem = "<<sem;

}
 int main()
 {
 	student s;
 	s.input();
 	s.display();
 	
 }


