class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        unordered_map <int, int> hash;
        for (int num: nums){
            hash[num]++;
        }
        int max_occur = 0;
        int min_occur = 100001;
        for(auto i: hash){
            if(i.second > max_occur){
                max_occur = i.second;
            }
            if(i.second < min_occur){
                min_occur = i.second;
            }
        }
        return min_occur + max_occur;
    }
};
