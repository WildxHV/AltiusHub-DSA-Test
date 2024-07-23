#include<bits/stdc++.h>

using namespace std;

long long maxSumArr(vector<int> &arr, int n){
    long long maxi = LONG_MIN;
    long long sum = 0;

    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum>maxi){
            maxi = sum;
        }

        if(sum<0){
            sum=0;
        }
    }

    return maxi;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // vector<int> arr = {1,5,-4,-8,4,8,-9,9,7,6,8};
    // int n = arr.size();
    long long  maxSum = maxSumArr(arr,n);

    cout<<maxSum<<endl;


    return 0;

}