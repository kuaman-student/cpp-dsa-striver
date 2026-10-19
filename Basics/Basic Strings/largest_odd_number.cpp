class Solution{	
public:		
    string largeOddNum(string& s){
        for(int i = s.size()-1; i>= 0; i--){
            if((int(s[i])-'0') %2 == 1){
                // removing leading 0s
                for(int j = 0; j<=i; j++){
                    if((int(s[j])-'0') != 0){
                        return s.substr(j, i-j+1);
                    }
                }
            }
        }
        return "";
    }
};