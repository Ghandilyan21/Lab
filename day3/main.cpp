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

// Իրականացնել int տիպի արժեք վերադարձնող ֆունկցիա, որը վերադարձնում է՝ 1, եթե ֆունկցային փոխանցված ամբողջ թիվը կարող է արտահայտվել երկու պարզ թվերի գումարով, հակառակ դեպքում ֆունկցիան կվերադարձնի՝ 0:

// bool parz_r(int n, int div = 2)
// {
// 	if (n <= 1)
// 	{
// 		return false;
// 	}
// 	if (div == n)
// 	{
// 		return true;
// 	}
// 	if (n % div == 0)
// 	{
// 		return false;
// 	}
// 	return parz_r(n, div + 1);
// }
//bool foo(int n)
//{
	// if(n < 4)
	// {
	// 	return false;
	// }
//	for (int i = 2; i <= n / 2; ++i)
//	{
//		if (parz_r(i) && parz_r(n - i))
//		{
//			return true;
//		}
//	}
//	return false;
//}
// bool foo_r(int n, int f = 2)
// {
// 	if(n < 4)
// 	{
// 		return false;
// 	}
// 	if (f > n / 2)
// 	{
// 		return false;
// 	}
// 	if (parz_r(f) && parz_r(n - f))
// 	{
// 		return true;
// 	}
// 	return foo_r(n, f + 1);
// }
// bool sum_of_two_primes(int num)
// {
// 	return foo_r(num, 2);
// }
// int main()
// {
// 	std::cout << sum_of_two_primes(4);
// }

// -------------------------------------------------------day 4----------------------------------------------------------

//  ------------------------------------------------------        binary search

// int binary_search(int* arr, int size, int target)
// {
// 	int start = 0;
// 	int end = size - 1;
// 	while(start <= end)
// 	{
// 		int mid = start + ((end - start) / 2);
// 		if(arr[mid] == target)
// 		{
// 			return mid;
// 		}
// 		if(arr[mid] > target)
// 		{
// 			end = mid - 1;
// 		}
// 		else
// 		{
// 			start = mid + 1;
// 		}
// 	}
// 	return -1;
// }
//          ---------------------------------------------------- grel tuny
// int binary_search_r(int* arr, int size, int target)
// {

// }
// int main()
// {
// 	int arr[7] = {1,2,3,4,5,6,7};
// 	std::cout << binary_search(arr, 7, 3);
// }


// ----------------------------------------------------------- astichan

// int pow(int num, int exp)
// {
// 	int res = 1;
// 	for(int i = 0; i < num; ++i)
// 	{
// 		res *= num;
// 	}
// 	return res;
// }

// int pow_r(int num, int exp)
// {
// 	if(exp <= 0)
// 	{
// 		return 1;
// 	}
// 	if(num == 1 || num == 0)
// 	{
// 		return num;
// 	}
// 	if(exp == 0)
// 	{
// 		return 1;
// 	}
// 	return num * pow_r(num, exp - 1);
// }
// int main()
// {
// 	std::cout << pow_r(2,4);
// }

//      ----------------------------------------tvanshanneri tpum------------------
//      -----------------------------------------sharunakel
// void get_sign(int num)
// {
// 	int tmp = num;
// 	int count = 0;
// 	while(num)
// 	{
// 		++count;
// 		num /= 10;
// 	}
// 	int digit = 1;
// 	for(int i = 0; i < count; ++i)
// 	{
// 		digit *= 10;
// 	}
// 	while(tmp)
// 	{
// 		std::cout << tmp / digit << " ";
// 		tmp %= digit; 
// 		tmp /= 10;
// 		digit /= 10;
// 	}
// }

// void get_sign_r(int num)
// {
// 	if(num == 0 || num < 10)
// 	{
// 		std::cout << num << " ";
// 		return;
// 	}
// 	get_sign_r(num / 10);
// 	std::cout << num % 10 << " ";
// }

// int main()
// {
// 	get_sign(12454);
// }
//   



//------------------------------------------- 16-akan hamakarg

// void to_hex_r(int num)
// {
// 	if(num == 0)
// 	{
// 		std::cout << "0x";
// 		return;
// 	}
// 	to_hex_r(num / 16);

// 		int tmp = num % 16;
// 		if(tmp >= 10)
// 		{
// 			switch(tmp)
// 			{
// 				case 10:
// 					std::cout << 'A';
// 					break;
// 				case 11:
// 					std::cout << 'B';
// 					break;
// 				case 12:
// 					std::cout << 'C';
// 					break;
// 				case 13:
// 					std::cout << 'D';
// 					break;
// 				case 14:
// 					std::cout << 'E';
// 					break;
// 				case 15:
// 					std::cout << 'F';
// 					break;
				
// 			}
// 		}
// 		else
// 		{
// 			std::cout << tmp;
// 		}
// }
// int main()
// {
// 	to_hex_r(176);
// }

//        --------------------------------------    32-akan cragir

const char* str = "ABCDEFGHIJKLMNOPQRSTUV";
void to_tw_r(int num)
{
	if(num == 0)
	{
		std::cout << "0_";
		return;
	}
	to_tw_r(num / 32);

		int tmp = num % 32;
		if(tmp >= 10)
		{
			std::cout << str[tmp - 10];
		}
		else
		{
			std::cout << tmp;
		}
}

int pow_r(int num, int exp)
{
	if(exp <= 0)
	{
		return 1;
	}
	if(num == 1 || num == 0)
	{
		return num;
	}
	if(exp == 0)
	{
		return 1;
	}
	return num * pow_r(num, exp - 1);
}
int from_32_to_dec(const char* num)
{
	int size = 0;
	int res = 0;
	while(num[size])
	{
		++size;
	}
	for(int i = 2; num[i]; ++i)
	{
		if(num[i] >= 'a' && num[i] <= 'z')
		{
			std::cout << "Poqratar chi kareli TXAAA" << std::endl;
			return -1;
		}
		if(num[i] >= '0' && num[i] <= '9')
		{
			res += (num[i] - 48) * pow_r(32,size - i - 1);
		}
		else
		{
			res += (num[i] - 55) * pow_r(32,size - i - 1);
		}
	}
	return res;
}
int main(void)
{
	std::cout << "Enter the number : ";
	int num{};
	std::cin >> num;
	to_tw_r(num);
	std::cout << std::endl;
	std::cout << "Enter the 32-akan number with suffix 0_ : ";
	char str[20];
	std::cin >> str;
	std::cout << from_32_to_dec(str) << std::endl;
}












	
