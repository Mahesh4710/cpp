
#include <bits/stdc++.h>
using namespace std;
void nthprimedigitsnumber(long long n)
{
    long long len = 1;
    long long prev_count = 0;
    while (true) {
        long long curr_count = prev_count + pow(4, len);
         if (prev_count < n && curr_count >= n)
            break;
         len++;
 
        prev_count = curr_count;
    }
      for (int i = 1; i <= len; i++) {
        for (long long j = 1; j <= 4; j++) {
            if (prev_count + pow(4, len - i) < n)
                prev_count += pow(4, len - i);
 
            else {
                if (j == 1)
                    cout << "2";
                else if (j == 2)
                    cout << "3";
                else if (j == 3)
                    cout << "5";
                else if (j == 4)
                    cout << "7";
                break;
            }
        }
    }
    cout << endl;
}
 
int main()
{
    nthprimedigitsnumber(4);
    nthprimedigitsnumber(21);
    return 0;
}