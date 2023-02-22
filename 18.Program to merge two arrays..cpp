
#include<iostream>
using namespace std;
int main()
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






















