#include<bits/stdc++.h>

using namespace std;

int main(){
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    int l = abs(x1 - x2), h = abs(y1 - y2);
    cout << 2 * (l + h) << ' ' << l * h;
    return 0;
}