class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        else{
            unordered_map<char,int> map1;
            unordered_map<char,int> map2;
            for(char c : s){
                map1[c]++;
            }
            for(char ch : t){
                map2[ch]++;
            }
            if(map1==map2){
                return true;
            }
            else
                return false;
        }
    }
};
