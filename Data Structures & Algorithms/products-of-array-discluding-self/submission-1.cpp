class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        output.clear();
        int prod;
        for(int i = 0;i<nums.size();i++){
            prod = 1;
            for(int j = 0;j<nums.size();j++){
                if(i==j) continue;
                prod *= nums[j];

            }
            output.push_back(prod);
        }

        
        return output;
    }
};
