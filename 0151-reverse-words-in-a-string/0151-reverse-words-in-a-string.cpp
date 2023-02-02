class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string answer;
        string temp = "";
        s.append(" ");
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                if(temp != "")
                ans.push_back(temp);
                temp = "";
                continue;
            }
            
            temp.append(s.substr(i,1));
            
        }
        
        for(int i = ans.size() - 1; i >= 0; i--){
                answer.append(ans[i]);
                if(i != 0)
                answer.append(" ");
            
        }
        
        return answer;
    }
};