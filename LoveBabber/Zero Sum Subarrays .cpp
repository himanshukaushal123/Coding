 ll findSubarray(vector<ll> arr, int n ) {
        //code here
        ll cnt=0,sum=0;
       unordered_map<ll,int>mp;
       mp[0]=1;
       for(int i=0;i<n;i++){
           sum+=arr[i];
           if(mp[sum]>=1 || sum==0)cnt+=mp[sum];
           mp[sum]++;
       }
       return cnt;
    }
