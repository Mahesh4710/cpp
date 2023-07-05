
#include <bits/stdc++.h>
using namespace std;

int get_permutation(int arr[], int n)
{
    sort(arr, arr + n);
 
    int result = 0;
 
    for (int i = 0; i < n; i++) {
        result += abs(arr[i] - (i + 1));
    }
 
    return result;
}
 
int main()
{

    int size;
    cout<<"Enter the size:";
    cin>>size;    
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    cout<<"Minimum no. of steps"<<endl;
    cout << get_permutation(arr, n);
 
    return 0;
}