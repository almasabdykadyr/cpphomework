#include<bits/stdc++.h>

using namespace std;

int main(){
    int x1,y1,x2,y2,x3,y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int a,b,c,p;
    a = sqrt(abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2));
    b = sqrt(abs(x1 - x3) * abs(x1 - x3) + abs(y1 - y3) * abs(y1 - y3));
    c = sqrt(abs(x2 - x3) * abs(x2 - x3) + abs(y2 - y3) * abs(y2 - y3));
    p = a + b + c;

    cout << sqrt(p * (p - a) * (p - b) * (p - c));
    return 0;
}