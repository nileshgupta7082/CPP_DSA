#include<bits/stdc++.h>
using namespace std;
int CheckSorted(vector<int> arr, int n) {
        for(int i=0; i<n-1; i++){
            if(arr[i] > arr[i+1]){
                return false;
            }
        }
        return true;
    }
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bool isSorted = CheckSorted(vector<int>(arr, arr + n), n);
    if(isSorted){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
}