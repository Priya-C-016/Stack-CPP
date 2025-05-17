void SortedStack ::sort() {
    // Your code here
    vector<int>arr;
    while(!s.empty()){
        arr.push_back(s.top());
        s.pop();
    }
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int val : arr) {
        s.push(val);
    }
}
