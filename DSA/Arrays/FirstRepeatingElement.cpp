#include<bits/stdc++.h>
using namespace std;

int firstRepeatingElement(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    const int N=1e6+2;
    int idx[N];
    for(int i=0; i<N; i++) idx[i]= -1;
    int minidx = INT_MAX;
    for(int i=0; i<n; i++){
        if( idx[arr[i]] != -1) minidx = min(minidx, idx[arr[i]]);
        else idx[arr[i]] = i;
    }
    if(minidx == INT_MAX) return -1;
    else return ++minidx;
}

int main(){
    int t,x;
    cin>>t;
    while(t--){
        x = firstRepeatingElement();
        cout << x << endl;
    }
}
