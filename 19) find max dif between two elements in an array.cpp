#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int i,j;
	int marks[5];

cout<<"Enter an  array of 5 elements "<<endl;

for (int i=0;i<5;i++)
    {
cout<<"Enter number"<<i+1<<":";
cin>>marks[i]; 
    }  

cout<<"Numbers are:";
for(int i=0;i<5;i++)
{
	cout<<marks[i]<<"\t";
}
int temp=0;
for(int i=0;i<5;i++)
{
	for(j=i+1;j<5;j++)
	{
		if(marks[i]>marks[j])
		{
			temp=marks[i];
			marks[i]=marks[j];
			marks[j]=temp;
			
		}
	}
}
cout<<endl;
int MaxDif;
i=0;j=4;
MaxDif=marks[j]-marks[i];
cout<<"The Maximum difference is :"<<MaxDif<<endl;
}



