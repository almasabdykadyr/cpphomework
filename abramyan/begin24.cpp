#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int t = a;
    a = c;
    c = b;
    c = t;
    cout << a << ' ' << b << ' ' << c;
}