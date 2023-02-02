class Solution {
public:
    string removeOuterParentheses(string s) {
        int c = 0, j=0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                c++;
            }
            else{
                c--;
            }
            
            if(c == 0){
                s[j]='a';
                s[i]='a';
                j = i+1;
            }
        }
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='a'){
                ans.append(s.substr(i,1));
            }
        }
         return ans;
    }
};