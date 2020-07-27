#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number you want to check";
    cin >> n;
   int i, flag = 0;
   for(i=2; i<=n/2; ++i) {
      if(n%i==0) {
         flag=1;
         break;
      }
   }
   if (flag==0)
   cout<<n<<" is a prime number";
   else
   cout<<n<<" is not a prime number";
   return 0;
}