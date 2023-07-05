//Given an array of 5 integers, write a program to get minimum and maximum values by adding any 4 elements.
//For eg [5,3,9,1,7] In this array minimum is 16 = 5+ 3+ 1+ 7 and maximum is 24 = 5+ 3+9+ 7
// CPP program to find minimum (or maximum) element
// in an array.
//Mahesh Patil
#include<iostream>
using namespace std;

int Min(int arr[],int n)
{
    int res=arr[0];
    for( int i=0;i<=n;i++){
        res=min(res,arr[i]);        
    }
    return res;

}

int Max(int arr[],int n)
{
    int res=arr[0];
    for(int i=0;i<=n;i++)
        res=max(res,arr[i]);
    return res;
}


int main(int argc, char const *argv[])
{
    int arr[5],n;
    cout<<"Enter the elements in array :"<<endl;
    for (int i = 0; i < 5; i++)
    {
          cin>>arr[i];
    }
    cout<<"Elements are : ";

    for (int i = 0; i < 5; i++)
    {
          cout<<arr[i]<<"  ";
    }    

    n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Size  : "<<n;



    cout<<"Minimum element is : "<<Min(arr,n);
    cout<<"Max element is : "<<Max(arr,n);

    return 0;
}
