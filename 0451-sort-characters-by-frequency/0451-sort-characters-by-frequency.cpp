class Solution {
public:
    static int cmp(pair<char, int> a, pair<char, int> b){
        return a.second > b.second;
    }
    string frequencySort(string s) {
        map<char, int> m;
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }
        
        vector<pair<char, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), cmp);
        
        for(auto it = v.begin(); it != v.end(); it++){
            while(it->second--){
                ans += it->first;
            }
            
        }
        
        return ans;
    }
};