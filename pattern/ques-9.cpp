#include <iostream>
using namespace std;
int main() {
    cout << "\n";
    int n;
    cin >> n;
    char c = 64+n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout << c;
        for(int j=n*2; j>2*i+3; j--){
            cout << " ";
        }
        if(i!=n-1)
            cout << c;
        c--;
        cout << "\n";
    }
    return 0;
}
