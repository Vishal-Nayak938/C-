#include<iostream>
using namespace std;
int main()
{
	int a,b,ch,add,sub,multi,div;
	cout<<"Enter Two Number:";
	cin>>a>>b;
	cout<<"Enter Choice";
	cin>>ch;
	if(ch==1)
	{
		add=a+b;
		cout<<add;
	}
else if(ch==2)
{
	sub=a-b;
	cout<<sub;
}
else if(ch==3)
{
	multi=a*b;
	cout<<multi;
}
else if(ch==4)
{
	div=a/b;
	cout<<div;
cout<<"invald task";
}
return 0;
}

