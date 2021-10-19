**Question Link** :- [Click Here](https://codeforces.com/problemset/problem/110/A)

```cpp
#include <iostream>
#include<cstring>
using namespace std;
typedef long long ll;

int main(){

    string s;
    cin >> s;
    ll len = s.length(),count=0;
    
    // Counting the number of 4 and 7 in the given number or string
    for(ll i=0; i<len; i++){
        if(s[i] == '4' || s[i] == '7') count++;
    }
    
    ll Count = count;
    
    // checking if the number of lucky digits is the lucky number or not
    while(Count){
        // checking the ones place digit in 1st iteration, tens place digit in 2nd iteration and so on and so forth
        int temp = Count%10;
        // checking if it either 4 or 7 if not simply give 'NO' as output and goto label (end of program)
        if(temp == 4 || temp == 7){
            Count /= 10;
            continue;
        }
        cout << "NO\n";
        goto label;
    }
    // if neither 4 nor 7 is present return 'NO'
    if(count == 0 ) cout << "NO\n";
    else cout << "YES\n";
label: 
    return 0;
}
```
