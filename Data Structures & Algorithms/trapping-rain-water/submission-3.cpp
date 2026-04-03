class Solution {
public:
    int trap(vector<int>& height) {
        int left=0, right=height.size()-1;
        int maxright=0, maxleft = 0;
        int water=0;
        while(left<=right){
            maxleft = max(maxleft,height[left]);
            maxright = max(maxright,height[right]);
            if(maxleft<=maxright){
                water+=maxleft-height[left];
                left++;
            }
            else{
                water+=maxright-height[right];
                right--;
            }
        }
        
        return water;
    }   

};
