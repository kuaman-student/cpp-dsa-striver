class Solution{	
	public:
		vector<char> frequencySort(string& s){
			map<char, int> hash1;
            for(char character: s){
                hash1[character]++;
            }
            map<int, string> hash2;
            for(auto it: hash1){
                hash2[it.second] += (it.first);
            }
            vector<char> final;
            for(auto values: hash2){
                if(values.second.size() == 1){
                    final.push_back(values.second[0]);
                }else{
                    sort(values.second.rbegin(), values.second.rend());
                    for(char character: values.second){
                        final.push_back(character);
                    }
                }
            }
            for(int i= 0; i<final.size()/2; i++){
                swap(final[i], final[final.size()-i-1]);
            }
            return final;
		}
};