#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> vec = {0,1,0,3,12};

    int target = 0;
    int pos=0;
    int cnt=0;
    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]!= 0)
        {
            vec[pos]=vec[i];
            // cout<<"pos: "<<pos<<" vec[pos] "<<vec[pos]<<" vec[i]"<<vec[i];
            pos=pos+1;
        }
        else
        {
            cnt++;
        }
    }
    int j=vec.size()-1;

    while(cnt--)
    {
        vec[j]=0;
        j--;
    }

    for(auto x: vec)
        cout<<x<<" ";

    return 0;



}

