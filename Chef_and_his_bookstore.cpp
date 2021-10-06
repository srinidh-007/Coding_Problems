/*
https://www.codechef.com/CDSP2021/problems/SEPT202

Chef is giving a offer in his new opened bookstore “anyone can take three and pay for the only two more expensive ones”. So, each customer who picks three books 
gets the cheapest one for free. The customer can take even more books and, depending on the way the books are arranged into groups of three, get the cheapest one 
in each group for free. For eg,say if the prices of the books taken by the customer be: 2,3,4,5,6,7,8. If he arranges them into the groups (8,3,2), (5,6,4) and (7), 
he will get the book priced 2 from the first group for free and the book priced 4 from the second group. We can see that he will not get anything for free from the 
third group because it contains only one book. The chef working in the bookstore is good-hearted and he always wants to lower the price for each customer as much as 
possible. For given book prices, help the chef arrange the books into groups in the best way possible, so that the total price the customer has to pay is minimal. 
Please note: The chef doesn’t have to arrange the books into groups so that each group contains exactly 3 books, but the number of books in a group needs to be 
between 1 and 3, inclusively.

Input Format
The first line of input contains the integer N (1≤N≤100000), the number of books the customer bought. Each of the following N lines contains a single integer
Ci (1≤Ci≤100000), the price of each book.

Output Format
The first and only line of output must contain the required minimal price.

Sample Input 1 
4
3
2
3
2

Sample Output 1 
8
*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int price;
        cin >> price;
        v.push_back(price);                //taking input and storing in vector 
    }

    sort(v.rbegin(), v.rend());     //sorting the vector
    int cost = 0;
    for(int j = 0; j < v.size(); j++) {
        if(j % 3 != 2) {                       //checking condition if satisfy operation is performed
            cost += v[j];
        }
    }
    cout << cost << endl;        //end result
}
