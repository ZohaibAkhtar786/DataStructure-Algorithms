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
//step 3
int min=marks[0];
for(int i=0;i<5;i++)
if(min>marks[i])
min=marks[i];
//step 4

cout<<endl<<"Minimum number is:"<<min;
}


