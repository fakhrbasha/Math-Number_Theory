// GCD.cpp   greatest common divisor 
// two number is largest number that divides them both
// find gcd [20,15]  =>5
//          [5 , 5]  =>5
/*
            [6 , 3] => 3
            [7 , 5] => 1
            [5 , 0] => 5     number , 0 => number

can we do better
30 =2*3*5
45 =3*3*5
gcd[30,45] = 3*3=15 so can use prime factorization

Euclidean Algorthim
gcd[20,15]
can subtract the smaller number from the larger number 
20 15
5  15
5  10
5  5
0  5
gcd = 5
from modulae arithmetic 
gcd[a,b] = gcd[b , a%b] we stop when b = 0

*/
#include <iostream>
using namespace std;
#define ll long long
// gcd[a,b] = gcd[b , a%b] we stop when b = 0
ll gcd(ll a, ll b) {
    
    while (b != 0) {
        ll a2 = a;
        a = b;
        b = a2 % b;
    }
    return a;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    ll ans = 1;
    for (int i = 1; i <= min(a, b); i++) {
        ans *= i;
    }
    cout << ans;
}

