#include <bits/stdc++.h>
using namespace std;

vector<int> sum(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left < right) {
        int sum2 = arr[left] + arr[right];
        if (sum2 == target) {
            return {left, right};
        }
        else if (sum2 < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return {-1, -1};
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << "Enter the target: ";
    int target;
    cin >> target;
    vector<int> result = sum(arr, target);
    if (result[0] != -1) {
        cout << "Indices of the two numbers that add up to the target: ";
        cout << result[0] << " " << result[1] << endl;
    }
    else {
        cout << "No pair found." << endl;
    }

    return 0;
}