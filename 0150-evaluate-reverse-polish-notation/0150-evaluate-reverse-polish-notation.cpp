class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> eval;

        for(int i=0; i<tokens.size(); i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                if(tokens[i]=="+"){
                    int a=eval.top();
                    eval.pop();
                    int b=eval.top();
                    eval.pop();
                    int sum= a+b;
                    eval.push(sum);
                }
                else if(tokens[i]=="-"){
                    int a=eval.top();
                    eval.pop();
                    int b=eval.top();
                    eval.pop();
                    int diff= b-a;
                    eval.push(diff);
                }
                else if(tokens[i]=="*"){
                    int a=eval.top();
                    eval.pop();
                    int b=eval.top();
                    eval.pop();
                    int pro= a*b;
                    eval.push(pro);
                }
                else{
                    int a=eval.top();
                    eval.pop();
                    int b=eval.top();
                    eval.pop();
                    int div= b/a;
                    eval.push(div);
                }
            }
            else{
                int digit=stoi(tokens[i]);
                eval.push(digit);
            }
        }
        return eval.top();
    }
};