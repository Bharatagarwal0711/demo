class Solution {
public:
    int bestClosingTime(string customers) {
        vector<int> penalty(customers.size()+1);

        int n = penalty.size();
        int temp = 0;
        for(int i=customers.size()-1;i>=0;i--){
            if(customers[i] == 'Y') temp++;
            penalty[i] = temp;
        }

        temp = 0;
        for(int i=0;i<n;i++){
            penalty[i] += temp;
            if( i<customers.size() && customers[i] == 'N') temp++;
        }

        int mn = INT_MAX;
        int idx = -1;

        for(int i=0;i<n;i++){
            if(penalty[i]<mn){
                mn = penalty[i];
                idx = i;
            }
        } 


        return idx;    
        
    }
};