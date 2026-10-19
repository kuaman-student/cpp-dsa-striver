class Solution {
public:
    bool isomorphicString(string s, string t) {
    	unordered_map<char, char> hash;
        for(int i = 0; i<s.size(); i++){
            if(hash[s[i]] == 0){
                for(auto j: hash){
                    if(j.second == t[i]){
                        return false;
                    }
                }
                hash[s[i]] = t[i];

            }else{
                if(hash[s[i]] != t[i]){
                    return false;
                }
            }
        }
        return true;
    }
};