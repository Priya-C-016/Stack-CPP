#include<bits/stdc++.h>
using namespace std;

vector<int> monotonicIncreasing(vector<int>nums){
    int n=nums.size();
    stack<int>st;
    vector<int>result;
   for (int i = 0; i < n; ++i) {

        // While stack is not empty AND top of stack is more
        // than the current element
        while (!st.empty() && st.top() > nums[i]) {

            // Pop the top element from the
            // stack
            st.pop();
        }

        // Push the current element into the stack
        st.push(nums[i]);
    }

    // Construct the result array from the stack
    while (!st.empty()) {
        result.insert(result.begin(), st.top());
        st.pop();
    }

    return result;
}


vector<int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);  // default: -1 if no greater element exists
    stack<int> st;  // stores indices of elements

    for (int i = 0; i < n; i++) {
        // Check if current element is greater than stack's top
        while (!st.empty() && nums[i] > nums[st.top()]) {
            result[st.top()] = nums[i];  // Found next greater for index on top
            st.pop();
        }
        st.push(i);  // Push current index to stack
    }

    return result;
}



int main(){
     vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6};
    vector<int> result = monotonicIncreasing(nums);
    cout << "Monotonic increasing stack: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    vector<int> ans = nextGreaterElement(nums);
    
    for (int val : ans)
        cout << val << " ";
    return 0;
}
