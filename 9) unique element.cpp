#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int i,j;
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
cout<<endl<<"The unique elements of array are:";
for(int i=0;i<5;i++)
{
	for(j=0;j<5;j++)
	{
		if(i==j)
		{
			continue;
		}
		if( marks[i]==marks[j])
		{
			break;
		}
	}
	if(j==5)
	{
		cout<<marks[i]<<"\t";
	}
	
}
return 0;
}
