#include<iostream>
#include<conio.h>
using namespace std;
int main()
/*{
	char character;
	cout<<"Enter Character:";
	cin>>character;
	
	cout<<"The ASCII value is:"<<int(character);
	return 0;
}*/

{
	int num1,num2;
	char opt;
	
	cout<<"Enter First number:";
	cin>>num1;
	cout<<"\nEnter Second number:";
	cin>>num2;
	cout<<"\nEnter Operator:";
	opt=getche();
	if(opt=='+')
	{
		cout<<"\nsum is:"<<num1+num2;
	}
	else if(opt=='-')
	{
		cout<<"\nDifference is:"<<num1-num2;
	}
	else if(opt=='*')
	{
		cout<<"\nMultiple is:"<<num1*num2;
	}
	else if(opt=='/')
	{
		cout<<"\nDivision is:"<<num1/num2;
	}
	else if(opt=='%')
	{
		cout<<"\nRemainder is:"<<num1%num2;
	}
	else
	{
	cout<<"Invalid operator";
}
	return 0;
}
