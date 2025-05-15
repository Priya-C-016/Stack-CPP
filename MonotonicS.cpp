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


vector<int> monotonicDecreasing(vector<int>& nums) {
    stack<int> st;
    for (int num : nums) {
        while (!st.empty() && st.top() < num) {
            st.pop();
        }
        st.push(num);
    }
    vector<int> result;
    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(), result.end()); // To get the order of appearance
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
    vector<int> ans =monotonicDecreasing(nums);
    
    for (int val : ans)
        cout << val << " ";
    return 0;
}
