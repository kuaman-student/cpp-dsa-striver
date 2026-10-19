class Solution{	
	public:
        int NnumbersSum(int N){
			//your code goes here
            return summation(N, 0);
		}
        int summation(int n, int sum){
            if(n == 0){
                return sum;
            }else{
                return summation(n-1, sum+n);
            }
        }
		
};