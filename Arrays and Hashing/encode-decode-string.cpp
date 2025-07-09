#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<string> strs= {"we","say",":","yes","!@#$%^&*()"};
    string encoded="";
    for(int i=0; i< strs.size(); i++)
    {
       encoded+=to_string(strs[i].size())+"#"+strs[i];
    }
    vector<string > decode;
    int i=0;
    while(i<encoded.size())
    {
        int j=i;
        while(encoded[j]!='#')
        {
            j++;
        }
        int num = stoi(encoded.substr(i,j-i));
        decode.push_back(encoded.substr(j+1,num));
        i = num + j + 1;
    }
    for(auto x: decode)
        cout<<x<<" ";
}
