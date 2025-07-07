#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<string> strs= {"bdddddddddd", "bbbbbbbbbbc"};
    unordered_map<string,vector<string>> groups;

    for (const string& s : strs)
    {
        vector<int> vec(26, 0);
        for (char c : s)
        {
            vec[c - 'a']++;
        }
        string key;
        for(int i=0; i<26; i++)
        {
            //key +="#";
            key += to_string(vec[i]);
        }
        groups[key].push_back(s);
    }
    vector<vector<string>> res;
    for (auto& entry : groups)
    {
        res.push_back(entry.second);
    }
    for (const auto& group : res) {
    cout << "[ ";
    for (const string& s : group) {
        cout << "\"" << s << "\" ";
    }
    cout << "]\n";
}



}

