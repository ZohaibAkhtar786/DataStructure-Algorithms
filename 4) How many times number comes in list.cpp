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
int z,count=0;
cout<<endl<<"Enter a number";
cin>>z;
for ( i=0;i<5;i++)
{
	if(z==marks[i])
	{
		count++;
	}
	
}
cout<<endl<<"The given number comes" << " "<<count<<" "<< "times";
return 0;
}
