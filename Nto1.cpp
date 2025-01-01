#include <iostream>
using namespace std;
void solve(int n){
    if (n>0){
        cout<<n<<" ";
        solve(n-1);
    }
    return;
}
int main(){
    int n;
    cin>>n;
    solve(n);
    return 0;
}
