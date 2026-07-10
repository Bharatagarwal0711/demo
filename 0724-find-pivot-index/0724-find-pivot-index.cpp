class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> pre(nums.size());
        vector<int> suff(nums.size());
        int i=0,j=nums.size()-1;
        int p = 0;
        int s = 0;

        while(i<nums.size() && j>=0){
            p += nums[i];
            s += nums[j];
            pre[i++] = p;
            suff[j--] = s;
        }

        for(int i=0;i<nums.size();i++){
            if(pre[i] == suff[i]) return i;
        }
        return -1;
    }
};