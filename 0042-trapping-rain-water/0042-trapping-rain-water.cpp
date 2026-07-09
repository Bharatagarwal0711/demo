class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int ans = 0;

        int lmax = height[i];
        int rmax = height[j];
        while(i<=j){
            
            
            lmax = max(lmax,height[i]);
            rmax = max(rmax,height[j]);

            if(lmax<rmax){
                ans += lmax - height[i++];
            }
            else ans += rmax -  height[j--];

        }
        return ans;

    }
};