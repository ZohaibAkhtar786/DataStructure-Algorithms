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
		case 11:
			cout<<" 11) separate odd and even numbers"<<endl;
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
	
	cout<<endl<<"odd numbers are: ";
	 for(int i=0;i<5;i++)
{
	if(marks[i]%2!=0){
		cout<<marks[i]<<"\t";
	}
}
return 0;
}
break;
case 12:
	cout<<" 12) count odd and even numbers ian array"<<endl;
	{
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
int even=0;
int odd=0;
for(int i=0;i<5;i++)
{
	if (marks[i]%2==0){
			even++;
	}
else
{
	odd++;
}
}
cout<<endl<<"Even numbers are  "<<even<<endl;
cout<<"odd numbers are  "<<odd<<endl;

return 0;
}
break;
case 13:
	cout<<" 13) sort in ascending order"<<endl;
	{int n,i,j;
	int marks[n];

cout<<"Enter length of array = ";
cin>>n;
for (int i=0;i<n;i++)
    {
cout<<"Enter number"<<i+1<<":";
cin>>marks[i]; 
    }  
//
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
		if(marks[i]>marks[j])
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
break;
case 14:
	cout<<" 14) sorted in descending order"<<endl;
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
break;
case 15:
	cout<<" 15) print second smallest number in an array"<<endl;
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
		if (marks[i]>marks[j])
		{
			k=marks[i];
			marks[i]=marks[j];
			marks[j]=k;
		}
	}
}
cout<<endl<<"The second smallest number in an array is "<<marks[1]<<endl;
}
break;
case 16:
	cout<<" 16) print second largest nymber in an array"<<endl;
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
break;
case17:
	cout<<" 17) Check two arrays same or not"<<endl;
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
break;
case 18:
	cout<<" 18.Program to merge two arrays."<<endl;
	{
	int gym[10] , study[10] , Merge[20];
	int n,m,i,k;
	cout<<"Enter ther size of 1st array : "<<endl;
	cin>>n;
	
		    for( i=0;i<n;i++)
		    {
		 	cout<<"Enter value "<<i+1<<" : ";
 	        cin>>gym[i];
		 	Merge[i]=gym[i];
		    }
			k = i; 
	
				cout<<"Enter ther size of 2nd array : "<<endl;
	cin>>m;
			  for( i=0; i<m; i++)
		    {  
		    cout<<"Enter value "<<i+1<<" : ";
         	cin>>study[i];
		 	Merge[k] = study[i];
		 	k++;
	     	 }
			  cout<<"\nThe merged array is : "<<endl;	
			for( i=0; i<k; i++) 
			{
				cout<<Merge[i]<<"\t";

			}
			return 0;
}
break;
case 19:
	cout<<"19) find max dif between two elements in an array"<<endl;
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
break;
	
}
}
