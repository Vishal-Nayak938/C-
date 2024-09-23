#include<iostream>
using namespace std;
int main()
{
	char op;
	double num1,num2;
	cout<<"Enter the operator(+,-,*,/):";
	cin>>op;  
	cout<<"Enter two number one by one:";
	cin>> num1>>num2;
	switch(op)
	{
		case'+':
		cout<<num1<<"+"<<num2<<"="<<(num1+num2);
		break;
		case'-':
			cout<<num1<<"-"<<num2<<"="<<(num1-num2);
		break;
		case'*':
			cout<<num1<<"*"<<num2<<"="<<(num1*num2);
		break;
		case'/':
			cout<<num1<<"/"<<num2<<"="<<(num1/num2);
		break;
		default:
			cout<<"your input is wrong:";
			break;
		}
		return 0;
	}
