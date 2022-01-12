#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n<=1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n,i=1;
    cin >> n;
    int res=0;
    fibonacci(n+1);
    while(i<n+1)
    {
        res += fibonacci(i);
        cout << fibonacci(i);
        i++;
    }
    cout <<"\n"<< "Sum is: " << res;
    return 0;
}
