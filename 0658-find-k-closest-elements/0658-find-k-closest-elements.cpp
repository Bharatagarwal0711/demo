class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans(k);
        int n = arr.size();

        if(x<arr[0]){
            for(int i=0;i<k;i++)  ans[i] = arr[i]; 
            return ans;
        }
        else if(x>arr[n-1]){
            int idx = 0;
            for(int i=n-k;i<n;i++) ans[idx++] = arr[i];
            return ans;
        }
        int low = 0;
        int high = n-1; 
        int count = 0;
        int mid;

        while(low<=high){
            mid = low+(high-low)/2;
            
            if(arr[mid] == x){
                ans[count++] = arr[mid];
                break;
            }
            else if(arr[mid]>x) high = mid-1;
            else low = mid+1;
        }
        if(count){
            low = mid+1;
            high = mid-1;
        }
        while(high>=0 && low<n && count<k){
            if(x-arr[high] > arr[low]-x) ans[count++] = arr[low++];
            else ans[count++] = arr[high--];
        }

        if(high == -1) while(count<k) ans[count++] = arr[low++];
        if(low == n) while(count<k) ans[count++] = arr[high--];

        sort(ans.begin(),ans.end());
        return ans;

    }
};