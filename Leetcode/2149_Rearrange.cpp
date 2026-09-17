#include<bits/stdc++.h>
using namespace std; 
vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,0);
    int posIndex=0;
    int negIndex = 1;
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
        else{
            ans[posIndex] = nums[i];
            posIndex += 2;
        }
    }
    return ans;
}   
int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> ans = rearrangeArray(v);
    cout<<"Rearranged array is: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}