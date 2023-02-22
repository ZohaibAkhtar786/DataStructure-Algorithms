#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int i,j ,k;
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
for(i=0;i<5;i++)
{
	for(j=i+1;j<5;j++)
	{
		if (marks[i]<marks[j])
		{
			k=marks[i];
			marks[i]=marks[j];
			marks[j]=k;
		}
	}
}
cout<<endl<<"The second largest number in an array is "<<marks[1]<<endl;
}
