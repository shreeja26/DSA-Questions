#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int mini = INT_MAX;
    for(int i=0; i<n-1; i++){
        mini = i;
        for(int j=i+1; j<n; j++){
            if(arr[mini] > arr[j]){
                mini =j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
    for(int i=0; i<n; i++)
        cout << arr[i];
    return 0;
}
