#include "std_lib_facilities_4.h"
int main()
{	double n1,n2,smallerValue,largerValue;
	cout <<"Please type two numbers\n";
	
	while(cin>>n1>>n2)
	{
		if(n1=='|'||n2=='|')
		{
			break;
		}	
		if(n1>n2)
		{
			smallerValue=n2;
			largerValue=n1;
		}
		if(n2>n1)
		{
			smallerValue=n1;
			largerValue=n2;
		}
		if(n1==n2)
		{
			cout<<"The numbers are equal.";
		}
		if(largerValue-smallerValue<(1/100))
		{
			cout<<"The numbers are almost equal.";
		}
	
		cout<<"the smaller value is: "<<smallerValue<<" The larger value is: "<<largerValue;
		cout <<"Please type two numbers\n";
		
	
	}
	
}
