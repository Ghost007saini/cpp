#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	void insert(int ar[],int m);
	int arr[20],i,n;
	cout<<"Enter the limit (less than =20)\n";
	cin>>n;
	cout<<"\nEnter array elements\n";
	for(i=1;i<=n;++i)
		cin>>arr[i];
	insert(arr,n);
	cout<<"\nArray after insert sort :\n";
	for(i=1;i<=n;++i)
		cout<<arr[i]<<" ";
}
void insert(int ar[],int m)
{
	int temp,j;
	ar[0]=INT_MIN;
		for(int i=1;i<=m;++i)
		{
			temp=ar[i];
			j=i-1;
			while(temp<ar[j])
			{
				ar[j+1]=ar[j];
				j--;
			}
			ar[j+1]=temp;
		}
}
