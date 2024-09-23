#include<iostream>
using namespace std;
int main()
{
	
	int arr[3][2]={{1,2},{3,4},{5,6}};
	int i=1;
while(i<2){	
cout<<arr[i][i+1]<<endl;
i++;
}
sum(5,8);

return 0;
}

void sum(int a,int b)
{
	cout<<"Addition Is : "<<a+b;
}
