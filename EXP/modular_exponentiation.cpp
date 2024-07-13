// modular_exponentiation.cpp 
/*
exponentiation : 
	Optimization :
		if n is even 
			x pow(n) = (x pow(2) ) pow(n/2)
			3 pow(10) = 3 pow(2) pow(5)
		if n is odd
			x pow (n) = x*x pow(n-1)
			9 pow(5) = 9*9pow(4)

*/

#include <iostream>
using namespace std;

int modExp(int x, int n, int M) { // only int
	int res = 1;
	while (n > 0) {
		if (n % 2 == 1) {
			res = (res * x) % M;
		}
		x = (x * x) % M;
		n /= 2;
	}
	return res;
}
int binaryExp(int x, int n) { // log(n)
	int res = 1;
	while (n > 0) {
		if(n%2==1)
			res *= x;
		
		x = x * x;
		n = n / 2;
	}
	return res;
}
int iterativePower(int x, int n) { // o(n)
	int res = 1;
	while (n > 0) {
		res *= x;
		n--;
	}
	return res;
}
int main()
{
	int x = 1378, y;
	cin  >> y;
	int r =iterativePower(x, y);
	cout << r%10<<endl;
}
