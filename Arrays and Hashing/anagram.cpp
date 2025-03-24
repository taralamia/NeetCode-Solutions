#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int n=26;
int main()
{
    string s,t;
    s = "jar";
    t = "jam";
    map<char,int> map1;
    map<char,int> map2;

    for(const char& i: s)
    {
        map1[i]++;
    }

    for(const char& i: t)
    {
        map2[i]++;
    }
    if(map1 == map2)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }


    return 0;
}


