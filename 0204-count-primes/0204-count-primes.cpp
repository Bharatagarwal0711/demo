class Solution {
public:

    void fillSieve(vector<bool> &arr){
        for(int i=2;i*i<=arr.size();i++){
            if(arr[i]){
                for(int j=i*i;j<arr.size();j+=i){
                    arr[j] = 0;
                }
            }
            
        }
    }

    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool> arr(n,1);
        arr[0] = arr[1] = 0;

        fillSieve(arr);
        int count = 0;
        for(int ele: arr) if(ele) count++;
        return count;

    }
};