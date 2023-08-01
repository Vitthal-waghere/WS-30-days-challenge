#include <iostream>
#include <algorithm>
using namespace std;

int largest(int len,int arr[],int k)
{
	sort(arr,arr+len);
	
	return arr[len-k];
}

int main() {
    
    int len,k;
    cout<<"Enter length of array : ";
    cin>>len;
    
    int arr[len];
    
    cout<<"Enter elements : \n";
    
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<"\n\nEnter kth term : ";    
    cin>>k;
    
    if(k<=len && k>0)
    {
    	cout<<"The largest element at "<<k<<" is "<<largest(len,arr,k);
	}
	else{
		cout<<"k is out of range";
	}
	

    return 0;
}
