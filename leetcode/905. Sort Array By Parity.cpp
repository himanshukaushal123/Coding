class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                odd.push_back(nums[i]);
            }else{
                even.push_back(nums[i]);
            }
        }
        nums.clear();
        for(auto x:even){
            nums.push_back(x);
        }
        for(auto x:odd){
            nums.push_back(x);
        }
        return nums;
        
    }
};
