#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=4;
    vector<int> nums={-1,1,2,3};
    vector<int> res(n);
    int total = 1;
    for (int x : nums) total *= x;

    for (int i=0; i<n; i++)
    {
        res[i] = total / nums[i];
    }
    for(auto x: res)
        cout<<x<<" ";

}

