class Solution {
public:
    bool bSearch(vector<int> m, int t){
        int left = 0;
        int right= m.size()-1;
        while(left<=right){
            int mid = left + (right-left)/ 2;
            if(t == m.at(mid)) return true;
            else if (t>m.at(mid)){
                left = mid + 1;
            }
            else{
                right = mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()<=0) return false;

        for(int i = 0;i<matrix.size();i++){
            if(target>matrix[i][matrix[i].size()-1]){
                if(target>matrix[i][0])
                continue;
            }
            else if(target<=matrix[i][matrix[i].size()-1] || target<=matrix[i][0]) 
                return bSearch(matrix[(i<=0)? 0:i], target);
        }
        return false;
    }
};
