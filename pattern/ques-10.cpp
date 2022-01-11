#include <iostream>
using namespace std;
int main() {
    cout << "\n";
    int n,c=1;
    cin >> n;
    for(int i=0; i<n/2+1; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout << c;
        for(int j=n; j>=2*i+3; j--){
            cout <<" ";
        }
        if(i!=((n/2)))
            cout << c;
        c++;
        cout << "\n";
    }
    for(int i=0; i<n/2; i++){
        for(int j=n/2-1; j>0+i; j--){
            cout << " ";
        }
        cout << c;
        for(int j=2*i+1; j>0; j--){
            cout << " ";
        }
        //if(i!=n-2)
            cout << c;
        c++;
        cout << "\n";
    }
    return 0;
}
