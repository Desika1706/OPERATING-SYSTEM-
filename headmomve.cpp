#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int A[100],total=0,initial;
	int i,n;
	cout<<"ENTER  NO OF REUQUEST:";
	cin>>n;
	cout<<"ENTER A SQUENCE :";
	for(i=0;i<n;i++)
	cin>>A[i];
	cout<<"ENTER A HEAD POSITION:";
	cin>>initial;
	for(i=0;i<n;i++)
	{
		total=total+abs(A[i]-initial);
	}
	cout<<total;
	
}
