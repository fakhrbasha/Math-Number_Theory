// LCM.cpp  least common multiple
// least number that multiple of a and b it means it divdes a and b
/*
a=3 b=8 
lcm(a,b) = 24 // اصغر رقم يقبل القسمة علي 3 و 8
3 = 3 
8 = 2*2*2
lcm (3,8) = 24 = 2*2*2*3     -_-

a = 2*2*3*3*5*7
b = 2*3*5*5*7*7
lcm (a,b) = 2*2*3*3*5*5*7*7
a*b=2*2*2*3*3*3*5*5*5*7*7*7
lcm (a,b) = 2*2*3*3*5*5*7*7 
gcd (a,b) = 2*3*5*7

lcm(a,b) = (a*b)/gcd(a,b)
GCD : take the Min repetition of prime factor
LCM : take the Max repetition of prime factor
*/
#include <iostream>
using namespace std;
#define ll long long
ll gcd(ll a, ll b) {
    while (b != 0) {
        ll a2 = a;
        a = b;
        b = a2 % b;
    }
    return a;
}
//lcm(a, b) = (a * b) / gcd(a, b)
ll lcm(ll a, ll b) {
    // (a*b) / gcd(a,b);
    return a / gcd(a, b) * b;
}
int main()
{
    
}

