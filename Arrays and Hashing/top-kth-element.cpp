#include<bits/stdc++.h>
using namespace std;
bool compareByValue(const pair<int,int>& a, const pair<int,int>& b)
{
    return a.second > b.second;
}
int main()
{
    vector<int> v = {4,1,-1,2,-1,2,3};
    map<int,int > map1;
    vector<int> res;
    int k = 2;
    int temp =0;
    for(const int& i: v)
    {
        map1[i]++;
    }
    vector<pair<int, int>> vec (map1.begin(),map1.end());

    sort(vec.begin(), vec.end(), compareByValue);

    for (auto& p : vec)
    {
        if(temp<k)
        {
            res.push_back(p.first);
            temp++;
        }
    }
    for(auto x: res)
        cout<<x<<" ";

}

/*
*/



