class Solution {
public:
    
    string encode(vector<string>& strs) {

        string inp;
        for(string i : strs){
            inp += to_string(i.size())+ '#' + i;
        }
        return inp;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string nstr;
        nstr.clear();
        int i =0;
        int n=0;
        while(i<s.size()){
            while(s[i]!='#'){
                nstr.push_back(s[i]);
                i++;    
            }
            n = stoi(nstr);
            cout<<"n="<<n<<endl;
            nstr.clear();
            string str;
            if(s[i]=='#'){
                i++;
            }

            int j = 0;
            cout<<"i="<<i<<endl;
            for(j = i;j<i+n;j++){
                cout<<j;
                str.push_back(s[j]);
            }
            i=j;
            cout<<"AAI:"<<i;
            result.push_back(str);
        }


        
        return result;
    }
};
