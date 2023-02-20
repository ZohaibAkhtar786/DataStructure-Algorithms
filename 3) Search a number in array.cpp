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
int a;
bool flag;
cout<<"Enter a number";
cin>>a;
for(int i=0;i<5;i++)
{
	if(a==marks[i])
flag++;
}
if( flag==1){
	cout<<"number is present"<<endl;
}
else
cout<<" Number is not present"<<endl;
return 0;
}
