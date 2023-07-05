#include<iostream>
using namespace std;
int main() {
    int j = 0, sum = 0, k = 0;
    char str[10];
    
    cout << "Enter string:- ";
    cin >> str;
    

    for (int i = 0; i <=10; i++) {
        if (i % 2 != 0) {
            sum = sum + (str[i] - '0');
            for (j = 1; j <= sum; j++) {
                cout << str[k];
            }
            k=k + 2;
           
        }
        sum = 0;
    }
    //cout<<str[1];
   
}