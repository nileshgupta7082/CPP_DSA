#include<bits/stdc++.h>
using namespace std; 
int LargestElement(vector<int> arr, int n){
    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}   
int SecondLargestElement(vector<int> arr, int n){
    int largest = LargestElement(arr, n);
    int secondLargest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] != largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Largest Element: " << LargestElement(arr, n) << endl;
    cout << "Second Largest Element: " << SecondLargestElement(arr, n) << endl;
    return 0;
    
}