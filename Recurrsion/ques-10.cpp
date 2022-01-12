#include <bits/stdc++.h>
using namespace std;
int c=0;
void pattern(int n){
    if(n<=0)
        return ;
    pattern(n-1);
    cout <<pow(n,n) << "+";
}

int main() {
    int n;
    cin >> n;
    pattern(n);
    return 0;
}
