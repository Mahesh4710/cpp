#include <iostream>
using namespace std;

int main() {
   string s = "a3b3c4";
   int n = s.length();
   string w = "";
   for(int i=0;i<n;i++) {
      if(s[i] >= '0' && s[i] <= '9') {
          for(int j=0;j<s[i]-'0';j++) {
              w += s[i-1];
          }
      }
   }
  cout<<w<<endl;
}