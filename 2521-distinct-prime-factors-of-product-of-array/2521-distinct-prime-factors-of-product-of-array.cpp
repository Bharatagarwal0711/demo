class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> arr;
        for(int ele: nums){

            for(int i=2;i*i<=ele;i++){
                while(ele%i == 0){
                    arr.insert(i);
                    ele /= i;
                }
            }
            if(ele>1) arr.insert(ele);
        }
        return arr.size();
    }
};