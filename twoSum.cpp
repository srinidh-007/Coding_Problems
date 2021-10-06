#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
    Two Sum will take a n array of numbers and a target as input
    and returns the pair of indicies of array which add up to that target

    if such pair doesn't exist, it will simply return an empty array
*/
vector<int> twoSum(vector<int>& nums, int target) {
    // a map to store value and it's corresponding index
    unordered_map<int, int> mp;

    // a vector to store final result
    vector<int> x;

    // iterating through the array
    for (int i = 0; i < nums.size(); i++) {
        // check if map contains the target - curr_value
        // if yes we found the pair
        // else add it to map for referencing further in the array
        if (mp.find(target-nums[i]) != mp.end()) {
            x.push_back(i);
            x.push_back(mp[target-nums[i]]);
            break;
        } else {
            mp[nums[i]] = i;
        }
    }
        
    return x;
}


/*
    Driver code
*/
int main() {

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(3);
    arr.push_back(8);

    vector<int> res = twoSum(arr, 10);
    cout<<arr[res[0]]<<" "<<arr[res[1]]<<endl;
}