#include <bits/stdc++.h>
using namespace std;

void tower(int n, char a, char b, char c){
    if(n==0)
        return ;
    tower(n-1, a, c, b);
    cout <<"move disk " << n<< " from tower: " << a << " to tower: " << b <<"\n";
    tower(n-1, c, b, a);
}

int main() {
    int n,i=1;
    cin >> n;
    char a, b, c;
    tower(n, 'a', 'b', 'c');
    
}
