class Solution {
public:
    int count = 0;
    int reversePairs(vector<int>& nums) {
        MergeSort(nums);
        return count;
    }

    void MergeSort(vector<int> &arr){
        if(arr.size()==1) return;

        int m = arr.size()/2;
        int n = arr.size()-m;

        vector<int> arr1(m),arr2(n);

        for(int i=0;i<m;i++) arr1[i] = arr[i];
        for(int i=0;i<n;i++) arr2[i] = arr[i+m];

        MergeSort(arr1);
        MergeSort(arr2);

        RevPair(arr1,arr2);

        Merge(arr1,arr2,arr);
    }

    void Merge(vector<int> &arr1,vector<int> &arr2, vector<int> &res){
        int i=0, j=0, k=0;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]>arr2[j]) res[k++] = arr2[j++];
            else res[k++] = arr1[i++];
        }
        while(i<arr1.size()) res[k++] = arr1[i++];
        while(j<arr2.size()) res[k++] = arr2[j++];
    }

    void RevPair(vector<int> &arr1,vector<int> &arr2){
        int i=0, j=0;

        while(i<arr1.size() && j<arr2.size()){
            if((long long)(arr1[i])>2LL*arr2[j]){
                count += arr1.size()-i;
                j++;
            }
            else i++;
        }
    }
};