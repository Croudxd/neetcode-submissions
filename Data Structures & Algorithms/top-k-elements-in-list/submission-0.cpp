class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> m;

        for ( auto i : nums ) m[i]++;

        vector<vector<int>> buckets(nums.size() + 1);
        for ( auto& [n, count] : m)
        {
            buckets[count].push_back(n);
        }
        vector<int> v;
        for (int i = nums.size(); i > 0 && v.size() < k; i--) 
        {
            for (int num : buckets[i]) {
                v.push_back(num);
                if (v.size() == k) return v;
            }
        }
        return v;
    }
};
