#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr, int start, int end){
    while(start<=end){
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void rotateArr(vector<int> &arr,int n, int k){
    k = k%n;
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

    rotateArr(arr,n,k);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}