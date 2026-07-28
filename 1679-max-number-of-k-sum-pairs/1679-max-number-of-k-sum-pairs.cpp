class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        multiset<int> s;
        int count = 0;

        for(int ele: nums){
            int diff = k-ele;

            if(s.find(diff) != s.end()){
                count++;
                s.erase(s.find(diff));
            }
            else s.insert(ele);
        }

        return count;
    }
};