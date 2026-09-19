class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int fmax = INT_MIN, smax = INT_MIN, tmax = INT_MIN;
        int fmin = INT_MAX, smin = INT_MAX;

        for(int ele: nums){
            if(ele >= fmax){
                tmax = smax;
                smax = fmax;
                fmax = ele;
            }
            else if(ele >= smax && ele != fmax){
                tmax = smax;
                smax = ele;
            }
            else if(ele >= tmax && ele != fmax && ele != smax) tmax = ele;

            if(ele <= fmin){
                smin = fmin;
                fmin = ele;
            }
            else if(ele < smin && ele != fmin) smin = ele;
        }

        return max(fmin*smin*fmax, fmax*smax*tmax);

    }
};