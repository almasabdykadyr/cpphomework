#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);

    cout << a + b << ' ' << a - b << ' ' << a * b << ' ' << a / b;
    return 0;
}