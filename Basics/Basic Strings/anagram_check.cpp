class Solution{	
	public:
		bool anagramStrings(string &s,string &t){
            if(s.size() != t.size()){
                return false;
            }
			unordered_map<char, int> hash1;
			unordered_map<char, int> hash2;

            for(auto character: s){
                hash1[character]++;
            }
            for(auto character: t){
                hash2[character]++;
            }

            for(auto character: t){
                if(hash1[character] != hash2[character]){
                    return false;
                }
            }
            return true;
		}
};