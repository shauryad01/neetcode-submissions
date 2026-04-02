class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    std::set<int> set1;
    for (int num : nums)
        set1.insert(num);

    return set1.size() < nums.size();
}

};