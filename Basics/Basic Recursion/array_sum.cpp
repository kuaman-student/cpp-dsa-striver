class Solution{	
	public:
        int summation(int n, int sum, vector<int>& nums){
            if(n == 0){
                return sum + nums[0];
            }else{
                return summation(n-1, sum+ nums[n], nums);
            }
        }
		int arraySum(vector<int>& nums){
			return summation(nums.size()-1, 0, nums);
		}
};