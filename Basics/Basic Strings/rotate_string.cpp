class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			if(s.size() != goal.size()){
                return false;
            }
            if (s== goal){
                return true;
            }
            string swapped = s;
            for(int i = 0; i<s.size()-1; i++){
                swapped = swapped.substr(1, s.size()-1) + swapped[0];
                if(swapped == goal){
                    return true;
                }
            }
            return false;
		}
};