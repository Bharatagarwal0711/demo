class Solution {
public:
    bool check(vector<int> &piles, int h,int mid){
        long long count = 0;
        int i=0;
        while(i<piles.size()){
            if(piles[i] % mid == 0) count += (piles[i]/mid);
            else count += piles[i]/mid +1;
            i++;
        }
        if(count<=h) return true;
        return false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int mx = INT_MIN;
        int n = piles.size();
        for(int ele: piles) mx = max(mx,ele);

        int low = 1;
        int high = mx;
        int ans = 0;

        while(low<=high){
            int mid = low+(high-low)/2;

            if(check(piles,h,mid)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};