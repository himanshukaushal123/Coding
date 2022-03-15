class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            while(!dq.empty() and nums[dq.back()]<nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        for(int i=k;i<nums.size();i++)
        {
            while(!dq.empty() and nums[dq.back()]<nums[i])
                dq.pop_back();
            dq.push_back(i);
            if(i-dq.front()+1 >k)
                dq.pop_front();
            ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};
