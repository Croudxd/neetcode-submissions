class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int leftptr = 0;
        int rightptr = numbers.size() - 1;

        while (leftptr < rightptr)
        {
            int c = numbers[rightptr] + numbers[leftptr];
            if (c - target == 0)
            {
                return {leftptr + 1, rightptr + 1};
            }
            if (c - target > 0)
            {
                rightptr--;
            }
            if (c - target < 0)
            {
                leftptr++;
            }
        }

        return {};
    }
};
