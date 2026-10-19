class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
            int length = 0;
			for(int i = 0; i<= str[0].size(); i++){
                char to_match = str[0][i];
                for(auto j: str){
                    if(j[i] != to_match){
                        return j.substr(0, length);
                    }
                }
                length++;
            }
            return str[0].substr(0, length);
		}
};