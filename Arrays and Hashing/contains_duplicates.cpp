class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            int flag=0;
            unordered_map<string,int> freq_count;
            vector<string> v3;
        for(int i=0; i<nums.size(); i++)
        {
            string temp = to_string(nums[i]);
            v3.push_back(temp);
        }
           for (const string& word : v3)
        {
            freq_count[word]++;
        }
                for (const auto& pair : freq_count)
        {
            if(pair.second >= 2)
            {
                flag=1;
                break;
            }
            // cout << pair.first << " -> " << pair.second << endl;
        }
            if(flag == 1)
            return true;
            else
            return false;
        }
    };