#include<bits/stdc++.h>
using namespace std;    
vector<int>superLeaders(vector<int>&arr){
    vector<int>ans;
    int maxi = INT_MIN;
    int n = arr.size();
    for(int i=n-1;i>=0;i--){
        if(arr[i] > maxi){
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
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
    vector<int> ans = superLeaders(v);
    cout<<"Leaders in the array are: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}