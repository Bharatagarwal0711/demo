class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(),nums1.end());
        vector<int> ans;

        for(int ele: nums2){
            if(s1.find(ele) != s1.end()){
                ans.push_back(ele);
                s1.erase(ele);
            }
        }

        return ans;
        
    }
};