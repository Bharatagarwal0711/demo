class Solution {
public:

    bool isPrime(int n){
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++) if(n%i==0) return false;
        return true;
    }

    int diagonalPrime(vector<vector<int>>& arr) {
        int rows = arr.size();
        int mx = 0;

        for(int i=0;i<rows;i++){
            if(isPrime(arr[i][i]))  mx = max(mx,arr[i][i]);
            if(isPrime(arr[i][rows-i-1]))  mx = max(mx,arr[i][rows-i-1]);
        }

        return mx;
    }
};