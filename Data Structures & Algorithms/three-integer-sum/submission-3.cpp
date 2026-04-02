class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int a = 0;
        vector<vector<int>> resultvec;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            a = nums[i];
            if(i>0 && a==nums[i-1]){
                continue;
            }
            int l = i+1;
            int r = nums.size()-1;
            while(l<r){
                
                if(nums[l]+nums[r]==-a){
                    resultvec.push_back({a,nums[l],nums[r]});
                    l++;r--;
                    while(nums[l-1]==nums[l]){
                    l++;
                }
                while(nums[r+1]==nums[r]){
                    r--;
                }
                    continue;
                }
                else if(nums[l]+nums[r]>-a){
                    r--;
                }
                else{
                    l++;
                }
            } 
        }
       return resultvec;
    }
};
