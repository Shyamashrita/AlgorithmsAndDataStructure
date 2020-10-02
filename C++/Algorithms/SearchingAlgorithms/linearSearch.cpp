// Linear Search
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[20],n,x,i,flag=0;
	cout<<"Number of elements: ";
	cin>>n;
	cout<<"\nEnter the elements: ";
	
	for(i=0;i<n;++i){
		cin>>a[i];
	}
	
	cout<<"\nEnter element to be searched:";
	cin>>x;
	
	for(i=0;i<n;++i)
	{
		if(a[i]==x)
		{
			flag=1;
			break;
		}
	}
	
	if(flag){
		cout<<"\n"<<x<<" is found at position "<<i+1;
	}
	else{
		cout<<"\n"<<x<<" not found";
	}
		
	return 0;
}