//Given an array of 5 integers, write a program to get minimum and maximum values by adding any 4 elements.
//For eg [5,3,9,1,7] In this array minimum is 16 = 5+ 3+ 1+ 7 and maximum is 24 = 5+ 3+9+ 7
// CPP program to find minimum (or maximum) element
// in an array.
//Mahesh Patil
#include <bits/stdc++.h>
using namespace std;

int Min(int arr[], int n)
{
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = min(res, arr[i]);
	return res;
}

int Max(int arr[], int n)
{
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = max(res, arr[i]);
	return res;
}

int sum(int arr[], int n)
{
    int sum = 0; // initialize sum
 
    
    for (int i = 0; i < n; i++)
        sum += arr[i];
 
    return sum;
}

int main()
{
	int arr[] = { 5,3,9,1,7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Minimum element of array: " << Min(arr, n)
		<< "\n";
    
	cout << "Maximum element of array: " << Max(arr, n)<<endl;

    cout << "Min sum of given array is " << sum(arr, n)-Max(arr, n)<<endl;

    cout << "Max um of given array is " << sum(arr, n)-Min(arr, n);
    //cout<<"Sum of Minimum element is"





	return 0;


}
