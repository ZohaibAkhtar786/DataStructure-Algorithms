#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int i;
	int marks[5];
//	take 5 numbers	as input
cout<<"Enter 5 numbers"<<endl;
for (int i=0;i<5;i++)
    {
cout<<"Enter number"<<i+1<<":";
cin>>marks[i]; 
    }  
//show 5 entered numbers
cout<<"Numbers are:";
for(int i=0;i<5;i++)
{
	cout<<marks[i]<<"\t";
}
cout<<endl<<"Odd numbers are: ";
for(int i=0;i<5;i++)
{
	if(marks[i]%2!=0)
	{
		cout<<marks[i]<<"\t";
	}
}
return 0;
}
