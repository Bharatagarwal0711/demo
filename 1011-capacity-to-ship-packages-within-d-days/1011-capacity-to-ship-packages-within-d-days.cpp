class Solution {
public:

    bool check(vector<int>& arr, int mid,int days){
        int count = 1;

        int sum = mid;
        int i = 0;
        while(i<arr.size()){
            if(sum>=arr[i]) sum -= arr[i];
            else{
                count++;
                sum = mid;
                sum -= arr[i];
            }
            i++;
        }
        if(count<=days) return true;
        return false;

    }

    int shipWithinDays(vector<int>& arr, int days) {
        int n = arr.size();
        int low = 0;
        int high = 0;
        for(int ele: arr){
            high += ele;
            low = max(low,ele);
        }

        int ans = high;

        while(low<=high){
            int mid = low + (high-low)/2;

            if(check(arr,mid,days)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }

        return ans;

    }
};