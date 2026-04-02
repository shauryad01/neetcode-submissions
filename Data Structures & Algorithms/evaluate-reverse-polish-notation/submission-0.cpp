class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i = 0;i<tokens.size();i++){
            if (tokens[i]=="+"){
                int op2 = s.top();
                s.pop();
                int op1 = s.top();
                s.pop();
                cout << op1+op2<<endl<<endl;
                s.push(op1+op2);
            }
            else if (tokens[i]=="-"){
                int op2 = s.top();
                s.pop();
                int op1 = s.top();
                s.pop();
                s.push(op1-op2);
            }
            else if (tokens[i]=="*"){
                int op2 = s.top();
                s.pop();
                int op1 = s.top();
                s.pop();
                s.push(op1*op2);
            }
            else if (tokens[i]=="/"){
                int op2 = s.top();
                s.pop();
                int op1 = s.top();
                s.pop();
                s.push(op1/op2);
            }
            else {
                s.push(stoi(tokens[i]));                
            }
            cout<<s.top()<<endl;
            cout<<tokens[i]<<endl;

        }
        return s.top();
    }
};
