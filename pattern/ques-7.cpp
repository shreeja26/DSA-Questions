#include <iostream>
using namespace std;
int main() {
    cout << "\n";
    int n;
    cin >> n;
    for(int i=0; i<=n; i++){
        for(int j=n; j>=n-i; j--){
            cout << j;
        }
        cout << "\n";
    }
    for(int i=0; i<n; i++){
        for(int j=n; j>i-0; j--){
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}
