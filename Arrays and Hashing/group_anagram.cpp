#include<bits/stdc++.h>
using namespace std;
void printMap(const unordered_map<char, int>& m)
{
    cout << "{ ";
    for (const auto& pair : m)
    {
        cout << pair.first << ":" << pair.second << " ";
    }
    cout << "}\n";
}

int main()
{
    vector<unordered_map<char, int>> wordFreq;
    vector<string> vs1= {"cat","pots","act","stop","tops","hat"};
    unordered_map<int,int> map2;
    unordered_map<int,int> map3;

    vector<vector<string>> res;
    for(int i=0; i<vs1.size(); i++)
    {
        unordered_map<char,int> map1;
        string s = vs1[i];

        for(const char&c: s)
        {

            map1[c]++;
        }

        wordFreq.push_back(map1);
    }
    for (int i = 0; i < wordFreq.size(); i++)
    {
        vector<string> s2;
        vector<string> s1;

        int flag = 0,flag1 =0;

        for(int j=i+1; j<wordFreq.size(); j++)
        {
            if (wordFreq[i] == wordFreq[j])
            {
                if(!map2.count(j))
                {
                    map2[j]=i;
                    if(!map3.count(i))
                    {
                        map3[i]=j;
                        if(vs1[i].empty())
                        {
                            s1.push_back("\"");
                        }
                        else
                        {
                            s1.push_back(vs1[i]);
                        }
                        flag1 = 1;

                    }
                    if(vs1[j].empty())
                    {
                        s1.push_back("\"");
                    }
                    else
                    {
                        s1.push_back(vs1[j]);
                    }
                    flag =1;

                }
            }
        }
        if(flag1 == 1 && flag ==1)
            res.push_back(s1);
        else if(!map2.count(i) && flag !=1)
        {
            s2.push_back(vs1[i]);
            res.push_back(s2);
        }

    }
    for(int i=0; i<res.size(); i++)
    {
        cout<<"Group: "<<i<<": ";
        for (const string& word : res[i])
        {
            cout << word << " ";
        }
        cout<<endl;

    }

}
