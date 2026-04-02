class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for (int x : nums)
            freq[x]++;

        int maxFreq = 0;
        for (auto &p : freq)
            maxFreq = max(maxFreq, p.second);

        vector<int> result;

        while (maxFreq > 0 && result.size() < k) {

            for (auto &p : freq) {
                int num = p.first;
                int count = p.second;

                if (count == maxFreq) {
                    result.push_back(num);
                    if (result.size() == k)
                        break;
                }
            }

            maxFreq--;
        }

        return result;
    }
};
