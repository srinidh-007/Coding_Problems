#include <bits/stdc++.h>
using namespace std;
int simple_1(int n)
{
    int res = 0;
    while (n > 0)
    {
        res+=(n&1);

        n=n>>1;
    }
    return res;
}
int b_and_k_algo(int n)
{
    int res=0;
    while(n>0)
    {
        n=(n&(n-1)); /* when we do n-1 it turn's on all the off bits before last on bits and turn's off the last on bits so this 
                      way we can skip counting all the zeros*/
        res++;
    }
    return res++;
}
int main()
{
    cout << "NUMBER OF SET BITS :" << simple_1(8) << endl;
    cout << "NUMBER OF SET BITS :" << b_and_k_algo(8) << endl;
    return 0;
}