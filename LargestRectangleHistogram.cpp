int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    stack<int> st;
    int maxArea = 0;

    // Add a 0 height at the end to force final processing
    heights.push_back(0);

    for (int i = 0; i < heights.size(); i++) {
        // Maintain increasing stack
        while (!st.empty() && heights[i] < heights[st.top()]) {
            int height = heights[st.top()];
            st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }

    return maxArea;
