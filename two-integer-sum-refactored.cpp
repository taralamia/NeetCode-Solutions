#include<bits/stdc++.h>
using namespace std;
int main()
{
  unordered_map<int, int> map1;
  vector<int> vec2 = {-1,-2,-3,-4,-5};
  vector<int> res;
  int t = -8;
  for(int i=0; i<vec2.size(); i++)
  {
      int d = t - vec2[i];
      if(map1.count(d))
      {
          int j = map1[d];
          int a = min(i,j);
          int b = max(i,j);
          res.push_back(a);
          res.push_back(b);
          break;
      }
      map1[vec2[i]]=i;
  }
}

