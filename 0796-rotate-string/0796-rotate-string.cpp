class Solution {
public:
    
//     void shift(string &s){
        
//     }
   
     void leftrotate(string &s, int d)
        {   
            reverse(s.begin(), s.begin()+d);
            reverse(s.begin()+d, s.end());
            reverse(s.begin(), s.end());
        }
    
    bool rotateString(string s, string goal) {
        
        if(s.size()!=goal.size()) return false;
        
        int i;
        for(i=0;i<s.size();i++)
        {
            leftrotate(s,1);
            if(s==goal) break;
        }
        if(i==s.size()) return false;
        return true;
    }
};