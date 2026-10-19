class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map <int, int> hash;
        for (int num: nums){
            hash[num]++;
        }
        int max_occuring = 0;
        int max_occuring_num = 10000;
        for(auto i: hash){
            if(i.second >= max_occuring){
                if(i.second == max_occuring){
                    if(i.first < max_occuring_num){
                        max_occuring = i.second;
                        max_occuring_num = i.first;
                    }
                }else{
                    max_occuring = i.second;
                    max_occuring_num = i.first;

                }
            }
        }
        return max_occuring_num;
    }
};