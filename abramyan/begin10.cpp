#include<bits/stdc++.h>

using namespace std;

int main(){
    unsigned int a, b;
    double sa, sb; 
    cin >> a >> b;
    sa = sqrt(a);
    sb = sqrt(b);

    cout << sa + sb << ' ' << sa - sb << ' ' << sa * sb << ' ' << sa / sb;
    return 0;
}