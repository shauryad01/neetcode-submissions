class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()==1){
            return true;
        }
        if(s.length()==2){
            if(!isalnum(s[0])){
                return true;
            }
            else if(!isalnum(s[1])){
                return true;
            }
        }
        char* p1 = &(s[0]);
        char* p2 = &(s[s.length()-1]);
        for(int i=0;i<s.length()/2;i++){

            while(!isalnum(*p1)){
                p1++;
            }
            while(!isalnum(*p2)){
                p2--;
                
            }
            cout<<*p1<<"*"<<*p2<<endl;
            cout<<i<<endl;
            if(p1>p2){
                break;
            }
            if(tolower(*p1)!=tolower(*p2)){
                return false;
            }
            p1++;
            p2--;
        }
        return true;
    }
};
