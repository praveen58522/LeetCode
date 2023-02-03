class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> m;
        if(s.size() != t.size()){
            return false;
        }
        set<char> s1,s2;
        for(int i=0;i<s.size();i++)
        {
            s1.insert(s[i]);
            s2.insert(t[i]);
        }
        if(s1.size()!=s2.size()) return false;
        
        for(int i = 0; i < s.size(); i++){
            m[s[i]] = t[i];
        }
        
        for(int i = 0; i < s.size(); i++){
            s[i] = m[s[i]];
        }
        
        if(s == t){
            return true;
        }
        return false;
    }
};