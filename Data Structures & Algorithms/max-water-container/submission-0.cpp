class Solution {
public:
    int maxArea(vector<int>& heights) {
        if (heights.size() == 0)
            return 0;
        if (heights.size() == 1)
            return 0;
        if (heights.size() == 2)
            return (heights[0] < heights[1]) ? heights[0] : heights[1];

        vector<int> vol;
        int n = 0;
        int* p1 = &heights[n];
        int* p2;
        int idx = 0;

        for (int i = 1; i < heights.size(); i++) {
            p2 = &heights[i];
            vol.push_back((*p1 > *p2) ? (*p2 * ++idx) : (*p1 * ++idx));
            if (i == heights.size() - 1) {
                p1 = &heights[++n];
                i = n;
                idx = 0;
            }
        }
        int res = vol[0];

        for (int i = 1; i < vol.size(); i++) {
            if (vol[i] > res) {
                res = vol[i];
            }
        }
        return res;
    }
};