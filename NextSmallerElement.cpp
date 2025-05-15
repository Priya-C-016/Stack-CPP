#include<bits/stdc++.h>
using namespace std;

vector<int> nextsmallerelement(vector<int>nums){
    int n=nums.size();
    stack<int>st;
    vector<int>result(n,-1);
    for(int i=0;i<n;i++){
        while(!st.empty() && nums[i]<nums[st.top()]){
            result[st.top()]=nums[i];
            st.pop();
        }
        st.push(i);
    }
    return result;
}

int main(){
    vector<int>arr={2,3,6,5,3,7,8};
    vector<int>result=nextsmallerelement(arr);
    for(int num:result){
        cout<<num<<" ";
    }
    return 0;
}
