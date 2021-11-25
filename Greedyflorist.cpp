#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    int price=0;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i=0;i<n;i++){
        price+=(i/k+1)*arr[i];
    }
    cout<<price;
    return 0;
}
