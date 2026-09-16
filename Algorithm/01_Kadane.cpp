#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int> arr){
    int sum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<arr.size();i++){
        sum = sum + arr[i];
        if(sum > maxSum){
            maxSum = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return maxSum;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans = kadane(v);
    cout<<"Maximum sum of contiguous subarray is: "<<ans<<endl;
    return 0;
}