long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long int maxPro=INT_MIN,prod=1;
	    for(int i=0;i<n;i++){
	        prod*=arr[i];
	        maxPro=max(maxPro,prod);
	        if(prod==0){
	            prod=1;
	        }
	    }
	//-8,5,3,1,6 for this type of test case
	    prod=1;
	    for(int i=n-1;i>=0;i--){
	        prod*=arr[i];
	        maxPro=max(maxPro,prod);
	        if(prod==0){
	            prod=1;
	        }
	    }
	    return maxPro;
	}
