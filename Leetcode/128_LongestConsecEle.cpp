#include<bits/stdc++.h>
using namespace std;

int longestSuccesssiveElement(vector<int> &arr){
    if(arr.size() == 0) return 0;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int lastSmaller = arr[0];
    int cnt = 0;
    int longest = 1;
    for(int i=0;i<n;i++){
        if(arr[i]-1 == lastSmaller){
            cnt++;
            lastSmaller = arr[i];
        }else if(arr[i] != lastSmaller){
            cnt = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, cnt);
    }
    return longest; 
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
    int ans = longestSuccesssiveElement(v);
    cout<<"Length of longest consecutive elements is: "<<ans<<endl;
    return 0;

}