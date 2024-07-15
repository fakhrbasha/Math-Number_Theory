// prime_factorization.cpp
/*
Prime Number : number n with only two factor 1 and n

n = 1 not prime 
n = 2 prime becouse can divide 1 and 2 
n = 3 prime                tow factor 1 , 3
n = 4 not prime {1,2,4}
n = 5 prime      {1,5}
find prime factor of n = 36
36 -> 2*18 -> 2*2*9 -> 2*2*3*3
n = 10 => 2*5
n = 15 => 3*5
n = 8 => 2*2*2
n = 9 => 3*3
n = 24 => 2*12 => 2*2*2*3

*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n , k; cin >> n>>k;
    vector<int>v;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            v.push_back(i);
        }
    }
    if (v.size() < k) {
        cout << -1;
        return 0;
    }for (int i = 0; i < k - 1; i++) {
        cout << v[i] << " ";
    }
    int ans = 1;
    for (int i = k - 1; i < v.size(); i++) {
        ans *= v[i];
    }
    cout << ans;




}
 