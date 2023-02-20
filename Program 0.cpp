#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of the program you want to access : ";
	cin>>n;
	switch(n)
	{
		case 1:
		{
			cout<<" Q1) Program to print the minimum number in an array"<<endl;
			

    int i;
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

break;
case 2:
	cout<<" Q2) program to print maximum number in an array"<<"\n";
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
int max=marks[0];
for(int i=0;i<5;i++)
if(max<marks[i])
max=marks[i];
//step 4

cout<<endl<<"Maximum number is:"<<max;
}
break;
case 3:
	cout<<"Q3) Program to search a number in an array"<<endl;
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
break;
case 4:
	cout<<" Q4) Program to search and check how many times number comes in an array"<<endl;
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
break;
case 5:
	cout<<"Q5) Program to print odd numbers from  an array"<<endl;
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
break;
case 6:
	cout<<"Q6) Program to print only even numbers from an array"<<endl;
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
cout<<endl<<"Even numbers are: ";
for(int i=0;i<5;i++)
{
	if(marks[i]%2==0)
	{
		cout<<marks[i]<<"\t";
	}
}
return 0;
}
break;
case 7:
	cout<<"Q7) Program to find sum of elements in an array"<<endl;
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
int sum=0;
for(int i=0;i<5;i++)
{
	sum=sum+marks[i];
	
}
cout<<endl<<"Sum of elements of array = "<<sum<<endl;
return 0;
}
break;
case 8:
	cout<<"Q8) Program to reverse an array"<<endl;
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
   cout<<endl<<"The reverse of the given array is"<<endl;
   for (int i=4;i>=0;i--)
   {
   	cout<<marks[i]<<endl;
   	
   }

   return 0;
}
break;
case 9:
	cout<<"Q9) Program to print all unique elements in an array"<<endl;
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
break;























































































































































































































































































































}

}
	

