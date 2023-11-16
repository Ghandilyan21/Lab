#include <iostream>
/*

	--------------Day 3------------------------------
*/

//	Իրականացնել ֆունկցիա, որը ստանում է ամբողջ թվային պարամետր և վերադարձնում է n-րդ Ֆիբոնաչիի թիվը։

//int fib(int n)
//{
//	if (n <= 1)
//	{
//		return n;
//	}
//	int a = 0;
//	int b = 1;
//	int c = 1;
//	for (int i = 3; i < n; ++i)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	return c;
//}
//int fib_r(int n)
//{
//	if (n == 1)
//	{
//		return 0;
//	}
//	if (n == 2)
//	{
//		return 1;
//	}
//	return fib_r(n - 1) + fib_r(n - 2);
//}
//int main()
//{
//	std::cout << fib_r(5);
//	return 0;
//} 

//	Table of a Number : Գրել ֆունկցիա, որը կտպի տրված թվի բազմապատկման աղյուսակը։

//void table(int n)
//{
//	for (int i = 0; i <= 9; i++)
//	{
//		std::cout << n << " * " << i << " = " << n * i << std::endl;
//	}
//}
//void table_r(int n, int count = 10)
//{
//	if (count <= 0)
//	{
//		return;
//	}
//	table_r(n, --count);
//	std::cout << n * count << std::endl;
//}
//
//int main()
//{
//	table_r(5);
//	return 0;
//}

/*
	Գրել տրված թվի ֆակտորիալը հաշվող իտերատիվ ֆունկցիա։
*/
//int factorial(int n)
//{
//	int res = 1;
//	for (int i = 1; i <= n; ++i)
//	{
//		res *= i;
//	}
//	return res;
//}
//int factorial_r(int n)
//{
//	if (n <= 1)
//	{
//		return n;
//	}
//	return n * factorial_r(n - 1);   --n greluc xi chi ashxatum
//}
//int main()
//{
//	std::cout << factorial_r(5);
//	return 0;
//}

/*
	Իրականացնել ֆունկցիա, որն ընդունում է թիվ և վերադարձնում նրա թվանշանների գումարը:
*/
//int sign_sum(int n)
//{
//	if (n <= 0)
//	{
//		return 0;
//	}
//	int sum{};
//	while (n)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//	return sum;
//}
//int sign_sum_r(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	return (n % 10) + sign_sum(n / 10);
//}
//int main()
//{
//	std::cout << sign_sum(1238);
//	return 0;
//}

//  Իրականացնել ֆունկցիա, որը ստուգում է՝ թիվը պարզ է, թե ո։ Պարզ է համարվում այն թիվը, որը առանց մնացորդ կարող է բաժանվել ինքը իր վրա և մեկի վրա (մեկը պարզ թիվ չէ)։

//  bool parz(int n)
//  {
//	if (n <= 1)
//	{
//		return false;
//	}for (int i = 2; i <= n / 2; ++i)
//	{
//		if (n % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//bool parz_r(int n, int div = 2)
//{
//	if (n <= 1)
//	{
//		return false;
//	}
//	if (div == n)
//	{
//		return true;
//	}
//	if (n % div == 0)
//	{
//		return false;
//	}
//	return parz_r(n, ++div);
//}
//
//int main()
//{
//	std::cout << parz_r(2);
//	return 0;
//}


bool parz_r(int n, int div = 2)
{
	if (n <= 1)
	{
		return false;
	}
	if (div == n)
	{
		return true;
	}
	if (n % div == 0)
	{
		return false;
	}
	return parz_r(n, ++div);
}

//int foo(int n)
//{
//	for (int i = 2; i < n / 2; ++i)
//	{
//		if (parz_r(i) && parz_r(n - i))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
int foo_r(int n, int f = 2)
{

	if (f == n / 2)
	{
		return 0;
	}
	if (parz_r(f) && parz_r(n - f))
	{
		return true;
	}
	return foo_r(n, ++f);
}
int main()
{
	std::cout << foo_r(7);
}














	