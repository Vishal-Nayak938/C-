#include<iostream>
using namespace std;
int main()
{
	int sum,sub,a,b,ch;
	cout<<"enter Two numbers: ";
	cin>>a>>b;
	cout<<"Enter Choice:";
	cin>>ch;
	 switch(ch)
    {
    	case 1:
    		cout<<"The Addition Is ="<<a+b;
    		break;
    		case 2:
    		cout<<"The Subtraction Is = "<<a-b;
    		break;
    		default:
    			cout<<"wrong choice";
    			break;
	}
return 0;
}

