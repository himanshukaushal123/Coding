//Recursive
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
	if(k==0) return true;
	if(n==0) return arr[n]==k;
	bool nottake=subsetSumToK(n-1,k,arr);
	bool take=false;
	if(k>=arr[n]){
		take=subsetSumToK(n-1,k-arr[n],arr);
	}
	return take || nottake;
}
//Memorization
bool subsetSumTo(int n, int k, vector<int> &arr,vector<vector<int>>&dp){
if(k==0) return true;
	if(n==0) return arr[n]==k;
	if(dp[n][k]!=-1) return dp[n][k];
	bool nottake=subsetSumTo(n-1,k,arr,dp);
	bool take=false;
	if(k>=arr[n]){
		take=subsetSumTo(n-1,k-arr[n],arr,dp);
	}
	return dp[n][k]=take || nottake;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
	vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
	return subsetSumTo(n,k,arr,dp);
}
//tabulation
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
	vector<vector<bool>>dp(n,vector<bool>(k+1,0));
	for(int i=0;i<n;i++) dp[i][0]=true;
	dp[0][arr[0]]=true;
	 for(int i=1;i<n;i++){
      for(int j=1;j<=k;j++){
            bool notTake=dp[i-1][j];
            bool take=false;
             if(arr[i]<=j){
                 take=dp[i-1][j-arr[i]];
              }
              dp[i][j]=take|notTake;
      }
  }
      return dp[n-1][k];
}
//space optimization
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
	vector<bool>prev(k+1,0),curr(k+1,0);
	prev[0]=curr[0]=true;
	prev[arr[0]]=true;
	 for(int i=1;i<n;i++){
      for(int j=1;j<=k;j++){
            bool notTake=prev[j];
            bool take=false;
             if(arr[i]<=j){
                 take=prev[j-arr[i]];
              }
              curr[j]=take|notTake;
      }
		 prev=curr;
  }
      return prev[k];
}
