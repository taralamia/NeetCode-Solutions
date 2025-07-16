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
/*
encoded string -> 2#we3#say
for decoding
    i=0
    j=0; while(e[0]!='#') -> j=1
    num=stoi(e.substr(0,1-0)); -> num =2
    d.push_back(e.substr(1+1,2))
    i = j+num+1= 1+2+1=4

    i=4
    j=4;while(e[4]!='#')->j=5
    num=stoi(e.substr(i,j-i));-> num =3
    d.push_back(e.substr(j+1,3));
    i = j+num+1 = 4+3+1=8;

*/
