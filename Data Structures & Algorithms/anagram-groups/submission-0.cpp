class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<unordered_map<char,int>> hashvec;
        vector<vector<string>> vecfin;
        for(int i = 0;i<strs.size();i++){
            unordered_map<char,int> mp;
            for(char c :strs.at(i)){
                mp[c]++;
            }
            hashvec.push_back(mp);
        }
        vector<bool> visited(strs.size(),false);
        for(int i=0;i<visited.size();i++){
            unordered_map<char,int> fixmap = hashvec[i];
            if (visited[i]) continue;
            vector<string> group;
            group.push_back(strs[i]);
            visited[i]=true;
            for(int j = i+1;j<visited.size();j++){
                if(fixmap==hashvec[j] && !visited[j]){
                    visited[j] = true;
                    group.push_back(strs[j]);
                }                    
            }
            vecfin.push_back(group);
        }

        return vecfin;
    }
};
