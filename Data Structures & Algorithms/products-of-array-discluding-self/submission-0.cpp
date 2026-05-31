class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size(), 1);
        vector<int> suff(nums.size(), 1);
        vector<int> rs;
        for ( int i = 1; i < nums.size(); i++ )
        {
            pre[i] = pre[i-1] * nums[i-1];
        }

        for ( int i = nums.size() - 2; i >= 0 ; i-- )
        {
            suff[i] = suff[i+1] * nums[i+1];
        }

        for ( int i = 0; i < nums.size(); i++ )
        {
            rs.push_back(pre[i] * suff[i]);
        }
        return rs;

    }
};
