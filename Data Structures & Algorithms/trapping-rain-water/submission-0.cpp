class Solution {
public:
    int trap(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int max_left = 0;
        int max_right = 0;

        int res = 0;
        while (left < right) {
            max_left = max(max_left, height[left]);
            max_right = max(max_right, height[right]);
            
            if (max_left <= max_right) {
                res += max_left - height[left];
                left++;
            } else {
                res += max_right - height[right];
                right--;
            }
        }
        return res;
    }
};
// min(maxLeft, maxRight) - height