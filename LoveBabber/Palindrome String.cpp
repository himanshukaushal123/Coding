class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int j=S.size()-1;
	    int i=0;
	    while(i<=j){
	        if(S[i]!=S[j]) return 0;
	        i++;j--;
	    }
	    return 1;
	}

};
