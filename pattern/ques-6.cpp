#include <iostream>
using namespace std;
int main() {
    cout << "\n";
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            cout << " ";
        }
        for(int j=2*i+1; j>0; j--){
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}
