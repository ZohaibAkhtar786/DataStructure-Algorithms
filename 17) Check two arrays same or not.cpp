#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int i,j;
	int marks[5];
//	take 5 numbers	as input
cout<<"Enter elements of 1st array"<<endl;
for (int i=0;i<5;i++)
    {
cout<<"Enter number "<<i+1<<":";
cin>>marks[i]; 
}
//show 5 entered numbers
cout<<"Elements of first Array are: ";
for(int i=0;i<5;i++)
{
	cout<<marks[i]<<"\t";
}
cout<<endl<<"Enter elements of 2nd Array";
for(j=0;j<5;j++)
{
	cout<<endl<<"Enter number"<<j+1<<":";
	cin>>marks[j];
}
cout<<"Elements of 2nd Array are:" ;
for(j=0;j<5;j++)
{
cout<<marks[j]<<"\t";	
}
bool flag;
for(int i=0;i<5;i++)
{
	for(j=i+1;j<5;j++)
	{
		if (marks[i]==marks[j])
		{
		
		flag++;
	}}
}
if (flag==1)
{
	cout<<endl<<"Both Arrays are same"<<endl;
}
else
{
	cout<<endl<<"Arrays are different "<<endl;
}
return 0;
}
