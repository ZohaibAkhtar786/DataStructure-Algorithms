#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int n,i,j;
	int marks[n];

cout<<"Enter length of array = ";
cin>>n;
for (int i=0;i<n;i++)
    {
cout<<"Enter number"<<i+1<<":";
cin>>marks[i]; 
    }  

//cout<<"Numbers are:";
//for(int i=0;i<n;i++)
//{
//	cout<<marks[i]<<"\t";
//}
int temp=0;
for(int i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(marks[i]<marks[j])
		{
			temp=marks[i];
			marks[i]=marks[j];
			marks[j]=temp;
			
		}
	}
}
cout<<"The sorted array is:";
for(int i=0;i<n;i++)
{
	cout<<marks[i]<<"\t";
}
return 0;
}

