class Solution{	
	public:		
		bool palindromeCheck(string& s){
			int length = s.size();
			for(int i = 0; i<length/2; i++){

                if (s[i] != s[length - i - 1]){
                    return false;
                }
            }
            return true;
		}
};