class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        if (n < 2) return 0;

        int l = 0;
        int r = n - 1;

        int* left = &height[l];
        int* right = &height[r];

        int maxArea = 0;

        while (l < r) {

            int h = (*left < *right) ? *left : *right;
            int w = r - l;
            int curr = h * w;

            if (curr > maxArea)
                maxArea = curr;

            if (*left < *right) {
                l++;
                left++;
            } else {
                r--;
                right--;
            }
        }

        return maxArea;
    }
};
