class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> map;
        for (size_t i = {}; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }

        for (auto& i : map)
        {
            if (i.second > 1)
            {
                return true;
            }
        }
        return false;
    }
};