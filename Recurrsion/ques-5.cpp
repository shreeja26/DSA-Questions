#include <iostream>
using namespace std;
int c=0;
void prime(int n){
    if(n<=1)
        return ;
    natural(n-1);
    for(int i=2; i<n; i++){
        if(n%i==0){
            c=1;
            break;
        }
    }
    if(c!=1){
        cout << n<<" ";
    }
    c=0;
}

int main() {
    int n;
    cin >> n;
    prime(n);
    return 0;
}
