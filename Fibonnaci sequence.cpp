#include <bits/stdc++.h>
using namespace std;
int fib(int x)
{
   if(x == 0 || x == 1)
      return(x);
   return(fib(x-1) + fib(x-2));
}
int main() {
   int no_of_terms , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> no_of_terms;
   cout << "Fibonnaci Series : ";
   while(i < no_of_terms)
   {
      cout << fib(i) << " ";
      i++;
   }
   return 0;
}
