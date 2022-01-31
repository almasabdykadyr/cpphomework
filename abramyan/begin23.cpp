#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int t = a;
    a = c;
    c = b;
    b = t;
    cout << a << ' ' << b << ' ' << c;
    return 0;
}