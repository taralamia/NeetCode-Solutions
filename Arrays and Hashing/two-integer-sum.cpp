#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> vec2 = {5,5};

    map<int, pair<int, int>> map2;
    set<pair<int, int>> lookup;
    set<int> res1;
    int target = 10;
    for(int i=0; i<vec2.size(); i++)
    {
        int difference = target - vec2[i];
        map2.insert(make_pair(i,make_pair(vec2[i],difference)));
    }
    //cout<<pair.first<<" "<<pair.second.first<<" "<<pair.second.second<<endl;
    int temp;
    for(const auto& entry: map2)
    {
       if(lookup.count({entry.second.second,entry.second.first}))
        {
            //cout<<"Pair found\n";
            res1.insert(entry.first);
            temp = entry.second.second;
            break;
        }
       lookup.insert({entry.second.first,entry.second.second});
    }
    for(const auto& entry: map2)
    {
        if(temp == entry.second.first)
        {
            res1.insert(entry.first);
            break;
        }
    }
    for(auto x: res1)
     cout<<x<<" ";
}
