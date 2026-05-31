class Solution {
public:
    int maxArea(vector<int>& heights) {
        int biggest = 0;

        int left = 0;
        int right = heights.size() - 1;

        while ( left < right )
        {
            int length = right - left;
            int height = min(heights[left], heights[right]);
            int area = height * length;
            if ( area > biggest ) biggest = area;
            if ( heights[left] < heights[right]) left++;
            else right--;
        }
        return biggest;
    }
};



