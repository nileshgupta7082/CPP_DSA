#include<bits/stdc++.h>
using namespace std;
int MaximumProfit(vector<int> &prices){
    int min= prices[0];
    int maxprofit = 0;
    int n = prices.size();
    for(int i=1;i<n;i++){
        if(prices[i] < min){
            min = prices[i];
        }
        else if(prices[i] - min > maxprofit){
            maxprofit = prices[i] - min;
        }
    }
    return maxprofit;
}

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << MaximumProfit(prices) << endl;
    return 0;
}