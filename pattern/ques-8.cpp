#include <iostream>
using namespace std;
int main() {
    cout << "\n";
    int n,c=1;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << c;
        for(int j=1; j<2*i; j++){
            cout <<" ";
        }
        if(i!=0)
            cout << c;
        c++;
        cout << "\n";
    }
    c=c-2;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<i+1; j++){
            cout << " ";
        }
        cout << c;
        for(int j=0; j<n-2*i; j++){
            cout << " ";
        }
        if(i!=n-2)
            cout << c;
        c--;
        cout << "\n";
    }
    return 0;
}
