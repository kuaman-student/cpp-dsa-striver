class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        for(int num: nums){
            hash[num]++;
        }
        int max_occur = 0;
        int second_occu = 0;
        int second_occu_num = 10001;
        for(auto i : hash){
            if(i.second > max_occur){
                max_occur = i.second;
            }
        }
        for(auto i : hash){
            if(i.second == second_occu){
                if(i.first < second_occu_num){
                    second_occu_num = i.first;
                }
            }
            if(i.second > second_occu && i.second < max_occur){
                second_occu = i.second;
                second_occu_num = i.first;
            }
        }
        if(second_occu_num == 10001){
            return -1;
        }
        return second_occu_num;
    }
};