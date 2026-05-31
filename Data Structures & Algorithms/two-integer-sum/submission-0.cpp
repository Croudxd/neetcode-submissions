class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> m;
        for (size_t i = {}; i < nums.size(); i++)
        {
            m[nums[i]] = i;
        }

        for ( int i = {}; i < nums.size(); i++ )
        {
            int difference = target - nums[i];
            auto x = m.find(difference);
            if(x != m.end() && x->second != i)
            {
                return {i, x->second};
            }
        }

        
    }
};
