# Math-Number_Theory
Math&amp;Number_Theory C++
# Moduler_arithmatic.cpp 
# find the smallest non negative number m such that x-m is multiple of y

* 14%3 = ? 14 - 2 = 12 -> answer 12
*   x%y = m
*	4*3+2=14 
*	q*y+m=x
 -----------
* x>y  23%6 = 5    23-5=18 can devide 6
* x=y 2%2 = 0
* x<y 4%5 = 4
* 0%2 = 0
* y=0 1%0 = math error
* 12%6 = 0
* -----------
# Moduler Arithmatic Properties 
# Cycle
# range mod from 0 to x-1 try givin list find num%5
* 1 2 3 4 5 6 7 8 9 min num 0 max x-1
* (a+b)%c = ((a%c)+(b%c)) % c
* (a*b)%c = ((a%c)*(b%c)) % c
* ---------------
# how to handel negative number ?
* -8%3 
* add 3 to -8 untill we have positive Num
* -8%3 = (-8+(3*3=9)=1)%3 = 1
* (a-b)%c = ((a%c)-(b%c) +c) % c
* why add c = becouse in worst case a%c =0 | b%c = c-1 | (a%c) - (b%c) = -(c-1) so adding a c will make it positve
# modular_exponentiation
exponentiation : 
*	Optimization :
*		if n is even 
*			x pow(n) = (x pow(2) ) pow(n/2)
*			3 pow(10) = 3 pow(2) pow(5)
*		if n is odd
*			x pow (n) = x*x pow(n-1)
*			9 pow(5) = 9*9pow(4)
# Factorization.cpp 
// what factor : number that divides into another number exactly and without leaving a remainder

	* n % factor = 0
	* n = 36 
	* factor 36 : 1 2 3 4 6 9 12 18 36 
	
 *	factorization : is finding the number's factor
 *loop ->	if (n%i==0)
# prime_factorization
<h2>Prime Number : number n with only two factor 1 and n</h2>
<h4>n = 1 not prime </h4>
<h4>n = 2 prime becouse can divide 1 and 2 </h4>
<h4>n = 3 prime                tow factor 1 , 3</h4>
<h4>n = 4 not prime {1,2,4}</h4>
<h4>n = 5 prime      {1,5}</h4>
<h4>find prime factor of n = 36</h4>
<h4>36 -> 2*18 -> 2*2*9 -> 2*2*3*3</h4>
<h4>n = 10 => 2*5</h4>
<h4>n = 15 => 3*5</h4>
<h4>n = 8 => 2*2*2</h4>
<h4>n = 9 => 3*3</h4>
<h4>n = 24 => 2*12 => 2*2*2*3</h4>
<h2>Problem Codeforces</h2>
<a href="https://codeforces.com/problemset/problem/797/A"> k-Factorization</a>

# GCD
<h2>two number is largest number that divides them both</h2>
<h4>find gcd [20,15]  =>5</h4>
<ul>
  <li>[5 , 5]  =>5</li>
  <li>[6 , 3] => 3</li>
  <li>[7 , 5] => 1</li>
  <li>[5 , 0] => 5     number , 0 => number</li>
</ul>
<h4>can we do better</h4>
<ul>
  <li>30 =2*3*5</li>
  <li>45 =3*3*5</li>
  <li>gcd[30,45] = 3*3=15 so can use prime factorization</li>

</ul>
<h2>Euclidean Algorthim</h2>
<h4>gcd[20,15]</h4>
<p>can subtract the smaller number from the larger number </p>
<ul>
  <li>20 15</li>
  <li>5 15</li>
  <li>5 10</li>
  <li>5 5</li>
  <li>0 5</li>
</ul>
<p> GCD : 5</p>
<h4>
from modulae arithmetic 
gcd[a,b] = gcd[b , a%b] we stop when b = 0
</h4>
<h2>Problem Codeforces</h2>
<a href="https://codeforces.com/problemset/problem/822/A">I'm bored with life</a>
