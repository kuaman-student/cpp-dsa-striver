class Solution{	
	public:
        long long int multi(int n, long long int fact){
            if(n == 0){
                return fact;
            }else{
                return multi(n-1, fact*n);
            }
        }
		long long int factorial(int n){
			return multi(n, 1);
		}
};