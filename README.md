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
	Optimization :
		if n is even 
			x pow(n) = (x pow(2) ) pow(n/2)
			3 pow(10) = 3 pow(2) pow(5)
		if n is odd
			x pow (n) = x*x pow(n-1)
			9 pow(5) = 9*9pow(4)

  
