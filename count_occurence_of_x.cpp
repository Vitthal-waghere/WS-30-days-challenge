#include <iostream>
using namespace std;

int main()
{	
	int len,x;
    cout<<"Enter length of array : ";
    cin>>len;    
    int arr[len];    
    cout<<"Enter elements : \n";    
    for(int i=0;i<len;i++)
    {  cin>>arr[i]; }
    
    for(int i=0;i<len;i++)
    {  cout<<arr[i]<<" ";   }
    
    cout<<"\n\nEnter x term : ";    
    cin>>x;
    int count=0;
    
    for(int i=0;i<len;i++)
    {
    	if(x==arr[i])
    	{ count++;		}
	}
	
	cout<<"Occurence of "<<x<<" is "<<count;
	
	return 0;
}
