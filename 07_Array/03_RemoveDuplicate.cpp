#include<bits/stdc++.h>
using namespace std;
int RemoveDuplicate(vector<int> &arr, int n){
    if(n == 0){
        return 0;
    }
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int newLength = RemoveDuplicate(arr, n);
    for(int i=0; i<newLength; i++){
        cout << arr[i] << " ";
    }
}