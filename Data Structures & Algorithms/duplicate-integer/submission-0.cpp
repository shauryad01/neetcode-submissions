class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    std::set<int> set1;
    for(int i=0;i<nums.size();i++){
        set1.insert(nums.at(i));
    }
    if(set1.size()==nums.size()){
        return false;
    }
    else
        return true;
    }
};