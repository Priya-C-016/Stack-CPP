int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        long long water=0;int i=0,j=n-1;
        int maxi=0,maxi2=0;
        while(i<j){
            if(arr[i]<=arr[j]){
                maxi=max(maxi,arr[i]);
                water+=maxi-arr[i];i++;
            }
            else{
                maxi2=max(maxi2,arr[j]);
                water+=maxi2-arr[j];j--;
            }
        }
        return water;
    }
