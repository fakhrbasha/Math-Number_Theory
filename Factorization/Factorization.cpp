// Factorization.cpp 
// what factor : number that divides into another number exactly and without leaving a remainder
/*
	n % factor = 0
	n = 36 
	factor 36 : 1 2 3 4 6 9 12 18 36 
	
	factorization : is finding the number's factor
loop ->	if (n%i==0)
	
	*/
#include <iostream>
using namespace std;
int main()
{
	// shoudn stop in sqrt(n) 
	int n; cin >> n;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			cout << i << " " << n / i << endl;
		}
	}
}
