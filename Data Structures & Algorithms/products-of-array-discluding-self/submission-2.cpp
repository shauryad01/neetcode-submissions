class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        output.clear();
        int prod=1;
        vector<int> prleft(nums.size(),1);
        vector<int> prright(nums.size(),1);
        prleft[0]=1;
        prright[nums.size()-1]=1;
        for(int i = 1; i<nums.size();i++){
        prleft[i]=prleft[i-1]*nums[i-1]; 
        }
        for (int i = nums.size() - 2; i >= 0; i--) {
        prright[i] = prright[i + 1] * nums[i + 1];
        }
        for(int i = 0;i<nums.size();i++){
        output.push_back(prleft[i]*prright[i]);
        }        
        return output;
    }
};
