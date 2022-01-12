#include <iostream>
using namespace std;

void natural(int n){
    if(n<=0)
        return ;
    natural(n-1);
    if(n%2!=0)
        cout << n<< " ";
}

int main() {
    int n;
    cin >> n;
    natural(n);
    return 0;
}
