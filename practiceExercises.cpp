#include <iostream>

// ---------------------------------Day 1----------------------
// Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային զանգվածի էլեմենտների արժեքները, և տպել դրանցից առավելագույնի արժեքը:

// int main(int argc, char const *argv[])
// {
//     const int size = 5;
//     int arr[size];

//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << "Enter the " << i + 1 << " element : ";
//         std::cin >> arr[i];
//     }
//         int max = arr[0];
//     for (int i = 0; i < size; ++i)
//     {
//             if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         std::cout << arr[i] << " ";
//     }

//     std::cout << "Maximum is : " << max;
//     return 0;
// }

// Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային զանգվածի էլեմենտների արժեքները և տպում է էկրանին նվազագույնի արժեքը:

// int main(int argc, char const *argv[])
// {
//     const int size = 5;
//     int arr[size];

//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << "Enter the " << i + 1 << " element : ";
//         std::cin >> arr[i];
//     }
//     int min = arr[0];
//     for (int i = 0; i < size; ++i)
//     {
//             if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//         std::cout << arr[i] << " ";
//     }

//     std::cout << "Maximum is : " << min;
//     return 0;
// }

// Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային զանգվածի էլեմենտների արժեքները և տպում է առավելագույն արժեքով էլեմենտի ինդեքսը։

// int main(int argc, char const *argv[])
// {
//     const int size = 5;
//     int arr[size];
//     int max_i{};
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << "Enter the " << i + 1 << " element : ";
//         std::cin >> arr[i];
//         if (arr[i] > arr[max_i])
//         {
//             max_i = i;
//         }
//     }
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << arr[i] << " ";
//     }

//     std::cout << "The index of maximum is : " << max_i;
//     return 0;
// }

// Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային զանգվածի էլեմենտների արժեքները և տպում է նվազագույն արժեքով էլեմենտի ինդեքսը։

// int main(int argc, char const *argv[])
// {
//     const int size = 5;
//     int arr[size];
//     int min_i{};
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << "Enter the " << i + 1 << " element : ";
//         std::cin >> arr[i];
//         if (arr[i] < arr[min_i])
//         {
//             min_i = i;
//         }
//     }
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << arr[i] << " ";
//     }

//     std::cout << "The index of minimum is : " << min_i;
//     return 0;
// }

// Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային զանգվածի էլեմենտների արժեքները և տպում է նվազագույն և առավելագույն արժեքներով էլեմենտների գումարը:

// int main(int argc, char const *argv[])
// {
//     const int size = 5;
//     int arr[size];
//     int min_i{};
//     int max_i{};
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << "Enter the " << i + 1 << " element : ";
//         std::cin >> arr[i];
//         if (arr[i] < arr[min_i])
//         {
//             min_i = i;
//         }
//         max_i = i;
//     }
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << arr[i] << " ";
//     }

//     std::cout << "The sum of minimum and maximum elements is : " << arr[min_i] + arr[max_i];
//     return 0;
// }

// Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային զանգվածի էլեմենտների արժեքերը և տպում է բոլոր էլեմենտների գումարը, արտադրյալը:

// int main(int argc, char const *argv[])
// {
//     const int size = 5;
//     int arr[size];
//     int sum{};
//     int mul = 1;
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << "Enter the " << i + 1 << " element : ";
//         std::cin >> arr[i];
//         sum += arr[i];
//         mul *= arr[i];
//     }
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;
//     std::cout << "The sum of elements is : " << sum  << std::endl << "The mul of elements is : " << mul;
//     return 0;
// }

// ծրագիր, որը թույլ կտա մուտքագրել ամբողջ թվային զանգված։ Զանգվածի բոլոր էլեմենտները փոխարինել այդ էլեմենտի արժեքը բաժանած զանգվածում էլեմենտների քանակի վրա։

// int main(int argc, char const *argv[])
// {
//     const int size = 5;
//     int arr[size];
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << "Enter the " << i + 1 << " element : ";
//         std::cin >> arr[i];
//         arr[i] /= size;
//     }
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << arr[i] << " ";
//     }
//     return 0;
// }

// Գրեք ծրագիր,  որը օգտվողին թույլ կտա մուտքագրել նույն չափսի, երկու ամբողջ թվային զանգվածների էլեմենտների արժեքները և տպում է՝ համապատասխանող ինդեքսեներով էլեմնետների արտադրյալը էկրանին:

// int main(int argc, char const *argv[])
// {
//     const int size = 5;
//     int arr[size];
//     int arr1[size];
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << "Enter the " << i + 1 << " element of first array : ";
//         std::cin >> arr[i];
//         std::cout << "Enter the " << i + 1 << " element of second array : ";
//         std::cin >> arr1[i];
//     }
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << arr[i] * arr1[i] << " ";
//     }
//     return 0;
// }

// Գրեք ծրագիր,  որը օգտվողին թույլ կտա մուտքագրել զանգվածի էլեմենտների արժեքները և տպում է դրանք հակառակ հերթականությամբ: Զանգվածը կարող է լինել ցանկացած տիպի։

// int main(int argc, char const *argv[])
// {
//     const int size = 5;
//     int arr[size];
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << "Enter the " << i + 1 << " element : ";
//         std::cin >> arr[i];
//     }
//     for (int i = size - 1; i >= 0; --i)
//     {
//         std::cout << arr[i] << " ";
//     }
//     return 0;
// }

// Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային զանգվածի էլեմենտների արժեքները և տպում է այդ զանգավածի էլեմենտների միջին թվաբանականի արժեքը:

// int main(int argc, char const *argv[])
// {
//     const int size = 5;
//     int arr[size];
//     int sum{};
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << "Enter the " << i + 1 << " element : ";
//         std::cin >> arr[i];
//         sum += arr[i];
//     }
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;
//     std::cout << "The average of array elements is : " << sum / size << std::endl ;
//     return 0;
// }

// Գրել ծրագիր, որը ստանում է ամբողջ թվային զանգված և թիվ։ Եթե զանգվածում առկա է տրված թիվը տպել YES, հակառակ դեպքում տպել NO։

// int main(int argc, char const *argv[])
// {
//     const int size = 5;
//     int arr[size];
//     int num{};
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << "Enter the " << i + 1 << " element : ";
//         std::cin >> arr[i];
//     }
//     std::cout << "Enter number to search : ";
//     std::cin >> num;
//     for (int i = 0; i < size; ++i)
//     {
//         if (arr[i] == num)
//         {
//             std::cout << "YES";
//             return 0;
//         }
//     }
//     std::cout << "NO";
//     return 0;
// }

// Գրել ֆունկցիա, որը ստանում է զանգված եւ ինդեքսի համար։ Ֆունկցիան հեռացնում է զանգվածի տրված ինդեքսով տարրը եւ վերադարձնում նոր զանգվածը որպես արդյունք։

// void delete_from_arr(int* arr, const int size, int index)
// {
//     for (int i = index; i < size - 1; ++i)
//     {
//         arr[i] = arr[i + 1];
//     }
//     for (int i = 0; i < size - 1; ++i)
//     {
//         std::cout << arr[i] << " ";
//     }
// }
// int main(int argc, char const *argv[])
// {
//     const int size = 5;
//     int arr[size];
//     int index{};
//     for (int i = 0; i < size; ++i)
//     {
//         std::cout << "Enter the " << i + 1 << " element : ";
//         std::cin >> arr[i];
//     }
//     std::cout << "Enter index to delete : ";
//     std::cin >> index;
//     delete_from_arr(arr, size, index);
//     return 0;
//}

// Գրեք ծրագիր,  որը օգտվողին թույլ կտա մուտքագրել char-երի զանգված և դուրս կբերի բոլոր թվերը:

// int main(int argc, char const *argv[])
// {
//     const int size = 6;
//     char str[size];
//     std::cout << "Enter the string : ";
//     std::cin >> str;
//     for (int i = 0; i < size; ++i)
//     {
//         if (str[i] >= '0' && str[i] <= '9')
//         {
//             std::cout << str[i] << " ";
//         }
//     }
//     return 0;
// }

// Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել char-երի զանգված և հեռացնում է կրկնվող նիշերը տողից:

// int main(int argc, char const *argv[])
// {
//     const int size = 6;
//     char str[size];
//     std::cout << "Enter the string : ";
//     std::cin >> str;
//     for (int i = 0; i < size; ++i)
//     {
//         if (str[i] >= '0' && str[i] <= '9')
//         {
//             std::cout << str[i] << " ";
//         }
//     }
//     return 0;
// }

// Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել char-երի զանգված և հեռացնում է կրկնվող նիշերը տողից:

// int main(int argc, char const *argv[])
// {
//     int size{};
//     char str[] = "sahdjsadgas";
//     while (str[size])
//     {
//         ++size;
//     }
//     bool repeat;
//     for (int i = 0; i < size - 1; ++i)
//     {
//         repeat = false;
//         for (int j = i + 1; j < size; ++j)
//         {
//             if (str[i] == str[j])
//             {
//                 str[j] = '\0';
//                 repeat = true;
//             }
//         }
//         if (repeat)
//         {
//             str[i] = '\0';
//         }
//     }
//    int j = size - 1;
//     for (int i = 0; i != j; ++i)
//     {
//         if (str[i] != '\0')
//         {
//             continue;
//         }
//         else if(str[j] == '\0')
//         {
//             --j;
//             --i;
//         }
//         else
//         {
//             str[i] = str[j];
//             str[j] = '\0';
//             --j;
//         }
//     }
//     std::cout << str;
//     return 0;
// }

/*
    --------------Day 3------------------------------
*/

//	Իրականացնել ֆունկցիա, որը ստանում է ամբողջ թվային պարամետր և վերադարձնում է n-րդ Ֆիբոնաչիի թիվը։

// int fib(int n)
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
// }
// int fib_r(int n)
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
// }
// int main()
//{
//	std::cout << fib_r(5);
//	return 0;
// }

//	Table of a Number : Գրել ֆունկցիա, որը կտպի տրված թվի բազմապատկման աղյուսակը։

// void table(int n)
//{
//	for (int i = 0; i <= 9; i++)
//	{
//		std::cout << n << " * " << i << " = " << n * i << std::endl;
//	}
// }
// void table_r(int n, int count = 10)
//{
//	if (count <= 0)
//	{
//		return;
//	}
//	table_r(n, --count);
//	std::cout << n * count << std::endl;
// }
//
// int main()
//{
//	table_r(5);
//	return 0;
// }

/*
    Գրել տրված թվի ֆակտորիալը հաշվող իտերատիվ ֆունկցիա։
*/
// int factorial(int n)
//{
//	int res = 1;
//	for (int i = 1; i <= n; ++i)
//	{
//		res *= i;
//	}
//	return res;
// }
// int factorial_r(int n)
//{
//	if (n <= 1)
//	{
//		return n;
//	}
//	return n * factorial_r(n - 1);   --n greluc xi chi ashxatum
// }
// int main()
//{
//	std::cout << factorial_r(5);
//	return 0;
// }

/*
    Իրականացնել ֆունկցիա, որն ընդունում է թիվ և վերադարձնում նրա թվանշանների գումարը:
*/
// int sign_sum(int n)
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
// }
// int sign_sum_r(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	return (n % 10) + sign_sum(n / 10);
// }
// int main()
//{
//	std::cout << sign_sum(1238);
//	return 0;
// }

//  Իրականացնել ֆունկցիա, որը ստուգում է՝ թիվը պարզ է, թե ո։ Պարզ է համարվում այն թիվը, որը առանց մնացորդ կարող է բաժանվել ինքը իր վրա և մեկի վրա (մեկը պարզ թիվ չէ)։

//  bool parz(int n)
//  {
// 	if (n <= 1)
// 	{
// 		return false;
// 	}for (int i = 2; i <= n / 2; ++i)
// 	{
// 		if (n % i == 0)
// 		{
// 			return false;
// 		}
// 	}
// 	return true;
// }
// bool parz_r(int n, int div = 2)
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
// int main()
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
// bool foo(int n)
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

// const char* str = "ABCDEFGHIJKLMNOPQRSTUV";
// void to_tw_r(int num)
// {
// 	if(num == 0)
// 	{
// 		std::cout << "0_";
// 		return;
// 	}
// 	to_tw_r(num / 32);

// 		int tmp = num % 32;
// 		if(tmp >= 10)
// 		{
// 			std::cout << str[tmp - 10];
// 		}
// 		else
// 		{
// 			std::cout << tmp;
// 		}
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
// int from_32_to_dec(const char* num)
// {
// 	int size = 0;
// 	int res = 0;
// 	while(num[size])
// 	{
// 		++size;
// 	}
// 	for(int i = 2; num[i]; ++i)
// 	{
// 		if(num[i] >= 'a' && num[i] <= 'z')
// 		{
// 			std::cout << "Poqratar chi kareli TXAAA" << std::endl;
// 			return -1;
// 		}
// 		if(num[i] >= '0' && num[i] <= '9')
// 		{
// 			res += (num[i] - 48) * pow_r(32,size - i - 1);
// 		}
// 		else
// 		{
// 			res += (num[i] - 55) * pow_r(32,size - i - 1);
// 		}
// 	}
// 	return res;
// }
// int main(void)
// {
// 	std::cout << "Enter the number : ";
// 	int num{};
// 	std::cin >> num;
// 	to_tw_r(num);
// 	std::cout << std::endl;
// 	std::cout << "Enter the 32-akan number with suffix 0_ : ";
// 	char str[20];
// 	std::cin >> str;
// 	std::cout << from_32_to_dec(str) << std::endl;
// }

//     --------------------Ete polindrom e veradarcnel true, ete che gumarel reversy qani der polindrom chi darel

// int reverce(int num)
// {
//     int res{};
//     while (num)
//     {
//         res *= 10;
//         res += num % 10;
//         num /= 10;
//     }
//     return res;
// }



// // bool polindrom(int n)
// // {
// //     int tmp = n;
// //     int count{};
// //     int start = 1;
// //     int end = 10;
// //     while (tmp)
// //     {
// //         ++count;
// //         tmp /= 10;
// //     }
// //     for (int i = 1; i < count; ++i)
// //     {
// //         start *= 10;
// //     }
// //     int i = 0;
// //     while (i != count / 2)
// //     {
// //         if ((n / start) != (n % end))
// //         {
// //             return false;
// //         }
// //         n %= start;
// //         n /= end;
// //         start /= 100;
// //         ++i;
// //     }

// //     return true;
// // }


// bool polindrom(int n)
// {
//     if(n == reverce(n))
//     {
//         return true;
//     }
//     return false;
// }
// int check(int num)
// {
//     int count{};
//     while (!polindrom(num))
//     {
//         num += reverce(num);
//         ++count;
//     }
//      std::cout << num << std::endl;
//     return count;
// }
// int main(int argc, char const *argv[])
// {
//     std::cout << check(86752209);
//     return 0;
// }

//--------------find unique elemen by XOR

// int main(int argc, char const *argv[])
// {
//     char str[] = "holeohkle";
//     int i{0};
//     char res = 0;
//     while (str[i])
//     {
//         res ^= str[i];
//         ++i;
//     }
//     std::cout << res;
//     return 0;
// }









//------------------------------------------------ Week 2------------------------------------------

// -----------------------------------  day 1


// Գրել ռեկուրսիվ ֆունկցիա, որը ստանում է n բնական թիվ և տպում է n-ից 0 թվերը։

//void print_num_r(int n)
//{
//    if (n < 0)
//    {
//        return;
//    }
//    std::cout << "The num is : " << n << std::endl;
//    print_num_r(n - 1);
//}
//int main()
//{
//    print_num_r(8);
//    return 0;
//}


// Գրել ռեկուրսիվ ֆունկցիա, որը ստանում է n բնական թիվ և տպում է 0-ից n թվերը։

/*void print_num_r(int n)
{
    if (n < 0)
    {
        return;
    }
    print_num_r(n - 1);
    std::cout << "The num is : " << n << std::endl;
}
int main()
{
    print_num_r(8);
    return 0;
}*/


//           Գրել ռեկուրսիվ ֆունկցիա, որը ստանում է ամբողջ թվային զանգված և տպում է զանգվածի էլեմենտները էկրանին։

//void print_arr_r(int* arr, int size)
//{
//    if (size == 0) {
//        return;
//    }
//    print_arr_r(arr, --size);
//    std::cout << arr[size] << std::endl;
//}
//int main()
//{
//    int arr[7] = { 1,2,3,4,5,6,7 };
//    print_arr_r(arr, 7);
//}



//  Իրականացնել ռեկուրսիվ ֆունկցիա, որն ընդունում է թիվ և վերադարձնում նրա թվանշանների գումարը:

//int digits_sum_r(int n)
//{
//    if (n == 0)
//    {
//        return 0;
//    }
//    return n % 10 + digits_sum_r(n / 10);
//}
//
//int main()
//{
//    std::cout << digits_sum_r(12345678);
//}


//          Իրականացնել ռեկուրսիվ ֆունկցիա, որը հաշվում է երկու թվերի ամենամեծ ընդհանուր բաժանարարը։

//int divisor(int n1, int n2)
//{
//    if (n2 == 0)
//    {
//        return n1;
//    }
//    if (n1 == 0)
//    {
//        return n2;
//    }
//    return divisor(n2, n1 % n2);
//}
//
//int main()
//{
//    std::cout << divisor(0, 27);
//}


//------------------------------------ Day 2

//          Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է ամբողջ թվային պարամետր և վերադարձնում է n-րդ Ֆիբոնաչիի թիվը։  

//int fib_r(int n)
//{
//    if (n <= 1)
//    {
//        return n;
//    }
//    return fib_r(n - 1) + fib_r(n - 2);
//}
//int main()
//{
//    std::cout << fib_r(5);
//}

//             Գրել տրված թվի ֆակտորիալը հաշվող ռեկուրսիվ ֆունկցիա։

//int factorial_r(int n)
//{
//    if (n <= 1)
//    {
//        return 1;
//    }
//    return n * factorial_r(n - 1);
//}
//
//int main()
//{
//    std::cout << factorial_r(-5);
//}

//int binary_search_r(int* arr, int left, int right, int target)
//{
//    if (left > right)
//    {
//        return -1;
//    }
//    if (arr[(right + left) / 2] == target)
//    {
//        return (right + left) / 2;
//    }
//    if (arr[(right + left) / 2] > target)
//    {
//        binary_search_r(arr, left, (right + left) / 2, target);
//    }
//    if (arr[(right + left) / 2] < target)
//    {
//        binary_search_r(arr, (right + left) / 2, right, target);
//    }
//}
//
//int main()
//{
//    int arr[6]{ 1,2,3,4,5,6 };
//    std::cout << binary_search_r(arr, 0, 6, 4);
//}

//         Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է N թիվ և վերադարձնում այդ թվի երկուական համակարգում ներկայացումը։

//int to_binary(int n)
//{
//    if (n <= 0)
//    {
//        return 0;
//    }
//    return (n % 2)  + 10 * to_binary(n / 2);
//
//}
//int main()
//{
//    std::cout << to_binary(35);
//}


//      Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է թիվ և վերադարձնում թվի թվանշանների արտադրյալը։

//int digits_mul_r(int n)
//{
//    if (n == 0)
//    {
//        return 1;
//    }
//    return n % 10 * digits_mul_r(n / 10);
//}
//
//int main()
//{
//    std::cout << digits_mul_r(3425);
//}



//      Իրականացնել ռեկուրսիվ ֆունկցիա, որը կստանա տող և կվերադարձնի տողի երկարությունը։

//int string_len_r(const char* str)
//{
//    if (*str == '\0')
//    {
//        return 0;
//    }
//    return 1 + string_len_r(str + 1);
//}
//
//int main()
//{
//    std::cout << string_len_r("Barev Dzez");
//}


//       Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է տող և վերադարձնում տողում առաջին հանդիպած մեծատառը։

//char first_upper_r(const char* str)
//{
//    if (*str == '\0' || *str >= 'A' && *str <= 'Z')
//    {
//        return *str;
//    }
//    return first_upper_r(str + 1);
//}
//
//int main()
//{
//    std::cout << first_upper_r("barev dzez");
//}



//         Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է զանգված և վերադարձնում զանգվածի ամենափոքր (ամենամեծ) էլեմենտը։

//int max(int n1, int n2)
//{
//    return (n1 > n2) ? n1 : n2;
//}
//int max_of_array_r(int* arr, int size)
//{
//    if (size == 0)
//    {
//        return 0;
//    }
//    return max(arr[size - 1], max_of_array_r(arr, size - 1));
//}
//
//int main()
//{
//    int arr[7]{ 4,3,6,5,1,2,7 };
//    std::cout << max_of_array_r(arr, 7);
//}


// Իրականացնել ֆունկցիա, որը կստանա MxN չափի մատրից և կվերադարձնի այն տարրի արժեքը, որը տողում ամենամեծն է, իսկ սյունում ամենափոքրը

/*int max_of_row(int* arr, int n)
{
    int max_index = 0;
    for (int i = 1; i < n; ++i)
    {
        if (arr[max_index] < arr[i])
        {
            max_index = i;
        }
    }
    return max_index;
}

int check(int mat[][100], int h, int w)
{
    int max_index_row{};
    int i_row{};
    int i_col{};
    for (int i = 0; i < h; ++i)
    {
        max_index_row = max_of_row(mat[i], w);
        i_row = i;
        for (int i = 0; i < h; ++i)
        {
            if (mat[i_col][max_index_row] > mat[i][max_index_row])
            {
                i_col = i;
            }
        }
        if (mat[i_row][max_index_row] == mat[i_col][max_index_row])
        {
            return mat[i_row][max_index_row];
        }
    }

    return 0;
}
#include <cmath>
int main()
{
    int mat[50][100];
    int heigth{};
    int width{};
    int res{};
    do{
        std::cout << "Enter heigth : ";
        std::cin >> heigth;
        std::cout << "Enter width : ";
        std::cin >> width;

        srand(time(nullptr));
        for (int i = 0; i < heigth; ++i)
        {
            for (int j = 0; j < width; ++j)
            {
                mat[i][j] = (rand() % 15) + 1;
            }
        }
        for (int i = 0; i < heigth; ++i)
        {
            for (int j = 0; j < width; ++j)
            {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        res = check(mat, heigth, width);
        std::cout << res;
        std::cout << std::endl;
    } while (res == 0);
}*/
// void xort(int arr[][10], int h, int l, int tmp_i, int tmp_j)
// {
//     if (tmp_i < 0 || tmp_i >= h)
//     {
//         return;
//     }
//     if (tmp_j < 0 || tmp_j >= l)
//     {
//         return;
//     }
//     if (arr[tmp_i][tmp_j] == 0)
//     {
//         return;
//     }

//     arr[tmp_i][tmp_j] = 0;
//     xort(arr, h, l , tmp_i - 1, tmp_j);
//     xort(arr, h, l , tmp_i + 1, tmp_j);
//     xort(arr, h, l , tmp_i, tmp_j - 1);
//     xort(arr, h, l , tmp_i, tmp_j + 1);
// }

// int count(int arr[][10], int h, int l)
// {
//     int count{};
//     for (int i = 0; i < h; ++i)
//     {
//         for (int j = 0; j < l; ++j)
//         {
//             if (arr[i][j] == 1)
//             {
//                 ++count;
//                 xort(arr, h, l, i, j);
//             }

//         }
//     }
//     return count;
// }


// int main(int argc, char const *argv[])
// {
//     int mat[8][10]{ 0,0,1,1,0,0,1,1,1,0,
//                     0,0,1,0,1,1,1,0,0,1,
//                     1,0,0,0,1,1,0,0,1,1,
//                     1,0,1,1,0,0,1,1,1,0,
//                     1,1,0,1,1,0,0,1,1,1,
//                     0,0,1,1,0,0,1,1,0,1,
//                     1,0,0,1,1,0,1,1,1,0,
//                     0,0,1,0,0,0,0,1,0,1
//                     };
//     std::cout << count(mat, 8, 10);
//     return 0;
// }
//int count_r(char arr[][5], int h, int l, int tmp_i, int tmp_j)
//{
//    int count{};
//    if (tmp_i == 0 && tmp_j == 0)
//    {
//        if (arr[tmp_i + 1][tmp_j] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i][tmp_j + 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i + 1][tmp_j + 1] == 'm')
//        {
//            ++count;
//        }
//    }
//    else if (tmp_i == 0 && tmp_j == l - 1)
//    {
//        if (arr[tmp_i + 1][tmp_j - 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i + 1][tmp_j] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i + 1][tmp_j - 1] == 'm')
//        {
//            ++count;
//        }
//    }
//    else if (tmp_i == h - 1 && tmp_j == 0)
//    {
//        if (arr[tmp_i - 1][tmp_j] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i][tmp_j + 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i - 1][tmp_j + 1] == 'm')
//        {
//            ++count;
//        }
//    }
//    else if (tmp_i == h - 1 && tmp_j == l - 1)
//    {
//        if (arr[tmp_i][tmp_j - 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i - 1][tmp_j] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i - 1][tmp_j - 1] == 'm')
//        {
//            ++count;
//        }
//    }
//    else if (tmp_i == 0)
//    {
//        if (arr[tmp_i][tmp_j - 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i + 1][tmp_j - 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i + 1][tmp_j] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i + 1][tmp_j + 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i][tmp_j + 1] == 'm')
//        {
//            ++count;
//        }
//    }
//    else if (tmp_i == h - 1)
//    {
//        if (arr[tmp_i][tmp_j - 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i - 1][tmp_j - 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i - 1][tmp_j] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i - 1][tmp_j + 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i][tmp_j + 1] == 'm')
//        {
//            ++count;
//        }
//    }
//    else if (tmp_j == 0)
//    {
//        if (arr[tmp_i - 1][tmp_j] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i - 1][tmp_j + 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i][tmp_j + 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i + 1][tmp_j + 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i + 1][tmp_j] == 'm')
//        {
//            ++count;
//        }
//    }
//    else if (tmp_j == l - 1)
//    {
//        if (arr[tmp_i - 1][tmp_j] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i - 1][tmp_j - 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i][tmp_j - 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i + 1][tmp_j - 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i + 1][tmp_j] == 'm')
//        {
//            ++count;
//        }
//    }
//    else {
//        if (arr[tmp_i - 1][tmp_j] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i + 1][tmp_j] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i][tmp_j - 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i][tmp_j + 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i - 1][tmp_j - 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i + 1][tmp_j + 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i - 1][tmp_j + 1] == 'm')
//        {
//            ++count;
//        }
//        if (arr[tmp_i + 1][tmp_j - 1] == 'm')
//        {
//            ++count;
//        }
//    }
//    return count;
//}
//
//void change(char arr[][5], int h, int l)
//{
//    for (int i = 0; i < h; ++i)
//    {
//        for (int j = 0; j < l; ++j)
//        {
//            if (arr[i][j] == 0)
//            {
//
//                arr[i][j] = (char)(count_r(arr, h, l, i, j) + '0');
//            }
//        }
//
//    }
//
//}


/*    Տրված է nxn չափի քառակուսային մատրից, որտեղ բոլոր տարրերը 0 - եր և  M - եր են։ Գրել ծրագիր, որը ստեղծում է նոր nxn չափի մատրից, որտեղ M - երը գտնվում են իրենց տեղերում, իսկ 0 - ների փոխարեն գրված է այդ 0 - ին հարևան M - երի քանակը(հորիզոնական, ուղղահայաց, անկյունագծային)
    Օրինակ՝
    0 M 0 M 0 	1 M 3 M 1
    0 0 M 0 0   	1 2 M 2 1
    0 0 0 0 0    	2 3 2 1 0
    M M 0 0 0  	M M 2 1 1
    0 0 0 M 0   	2 2 2 M 1
*/
//
//int count_r(char arr[][5], int h, int l, int tmp_i, int tmp_j)
//{
//    if (tmp_i < 0 || tmp_i >= h)
//    {
//        return 0;
//    }
//    if (tmp_j < 0 || tmp_j >= l)
//    {
//        return 0; 
//    }
//    if (arr[tmp_i][tmp_j] != 'm' && arr[tmp_i][tmp_j] != 'n')
//    {
//        return 0;
//    }
//    if (arr[tmp_i][tmp_j] == 'm' )
//    {
//        return 1;
//    }
//    return count_r(arr, h, l, tmp_i - 1, tmp_j) + count_r(arr, h, l, tmp_i - 1, tmp_j + 1)
//         + count_r(arr, h, l, tmp_i, tmp_j + 1) + count_r(arr, h, l, tmp_i + 1, tmp_j + 1) 
//         + count_r(arr, h, l, tmp_i + 1, tmp_j) + count_r(arr, h, l, tmp_i + 1, tmp_j - 1)  
//         + count_r(arr, h, l, tmp_i, tmp_j - 1) + count_r(arr, h, l, tmp_i - 1, tmp_j - 1);
//}
//
//void change(char arr[][5], int h, int l, char new_arr[][5])
//{
//    for (int i = 0; i < h; i++)
//    {
//        for (int j = 0; j < l; j++)
//        {
//            if (arr[i][j] == 0)
//            {
//                arr[i][j] = 'n';
//                arr[i][j] = (char)(count_r(arr, h, l, i, j) + '0');
//                new_arr[i][j] = arr[i][j];
//
//            }
//            else
//            {
//                new_arr[i][j] = arr[i][j];
//            }
//        }
//    }
//}
//
//int main(int argc, char const* argv[])
//{
//    char mat[5][5]{ 0,'m',0,0,0,
//                    'm',0,'m',0,0,
//                    0,0,0,0,'m',
//                    0,'m','m',0,0,
//                    0,0,0,'m',0
//    };
//    char new_mat[5][5];
//    change(mat, 5, 5, new_mat);
//
//    for (int i = 0; i < 5; ++i)
//    {
//        for (int j = 0; j < 5; ++j)
//        {
//            std::cout << new_mat[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//    return 0;
//}


//Իրականացնել հաշվիչ ծրագիր, որն օգտագործում է std::map և ֆունկցիայի ցուցիչներ։ Ֆունկցիայի ցուցիչները հղվում են համապատասխան թվաբանական գործողությունը կատարող ֆունկցիայի վրա։

//#include <map>
//
//int sum(int a, int b);
//int sub(int a, int b);
//int mul(int a, int b);
//int div_(int a, int b);
//int mod(int a, int b);
//
//int main()
//{
//	std::map<char, int(*)(int, int)> op;
//	op['+'] = sum;
//	op['-'] = sub;
//	op['/'] = div_;
//	op['*'] = mul;
//	op['%'] = mod;
//
//	int a{};
//	int b{};
//	char ch{};
//	std::cout << "Enter first number : ";
//	std::cin >> a;
//	do
//	{
//		std::cout << "Enter operatin (+,-,/,*,%) : ";
//		std::cin >> ch;
//	} while (ch != '+' && ch != '-' && ch != '/' && ch != '*' && ch != '%');
//	std::cout << "Enter second number : ";
//	std::cin >> b;
//	std::cout << op[ch](a, b);
//}
//
//int sum(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int div_(int a, int b)
//{
//	return a / b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int mod(int a, int b)
//{
//	return a % b;
//}
//

//----------------------- string functions -------------------------------------------

// size_t str_len(const char* ptr)
// {
// 	int count{};
// 	while (ptr[count])
// 	{
// 		++count;
// 	}
// 	return count;
// }

// char* strchr(const char* ptr, const char c)
// {
// 	if (*ptr == c || *ptr == '\0')
// 	{
// 		return (char*)ptr;
// 	}
// 	return strchr(ptr + 1, c);
// }

// int strcmp(const char* s1, const char* s2) 
// {
// 	int c1{};
// 	int c2{};
// 	while (s1[c1])
// 	{
// 		++c1;
// 	}
// 	while (s2[c2])
// 	{
// 		++c2;
// 	}
// 	if (c1 > c2)
// 	{
// 		return s1[c2] - s2[c2];
// 	}
// 	if (c1 < c2)
// 	{
// 		return s1[c1] - s2[c1]; 
// 	}
// 	for (int i = 0; i < c1; ++i)
// 	{
// 		if (s1[i] - s2[i])
// 		{
// 			return s1[i] - s2[i];
// 		}
// 	}
// 	return 0;
// }

// char* str_str(const char* s1, const char* s2)
// {
// 	size_t c1 = str_len(s1);
// 	size_t c2 = str_len(s2);
// 	if (c1 < c2)
// 	{
// 		return (char*)(s1 + c1);
// 	}
// 	bool f;
// 	while (*s1)
// 	{
// 		f = true;
// 		char* occur = strchr(s1, *s2);
// 		for (size_t i = 0; i < c2; ++i)
// 		{
// 			if (occur[i] != s2[i])
// 			{
// 				f = false;
// 				s1 = occur + 1;
// 				break;
// 			}
// 		}
// 		if (f)
// 		{
// 			return occur;
// 		}
// 	}
// 	return (char*)(s1 + c1);

//bool is_valid(int a, int b, int c);
//
//int main()
//{
//	std::cout << std::boolalpha << is_valid(3, 5, 4);
//}
//
//long square(int n)
//{
//	return n * n;
//}
//
//bool is_valid(int a, int b, int c)
//{
//	if (square(a) + square(b) == square(c))
//	{
//		return true;
//	}
//	if (square(a) + square(c) == square(b))
//	{
//		return true;
//	}
//	if (square(b) + square(c) == square(a))
//	{
//		return true;
//	}
//	return false;
//}

// ------- erankyunachapakan funkcianer

//double sin(double a, double b);
//double cos(double a, double b);
//double tan(double a, double b);
//double ctg(double a, double b);
//double nerq(double a, double b);
//#include <cmath>

//int main()
//{
//	std::cout << sin(3, 4);
//}
//long pow(int a)
//{
//	return	a * a; 
//}
//
//double nerq(double a, double b)
//{
//	return sqrt(pow(a) + pow(b)); 
//}
//double sin(double a, double b)
//{
//	return a / nerq(a,b);
//}
//double cos(double a, double b)
//{
//	return b / nerq(a, b);
//}
//double tan(double a, double b)
//{
//	return a / b;
//}
//double ctg(double a, double b)
//{
//	return b / a;
//
// }

//  --------------------------- verjavor gumari banadzev

//long pow(int n, int deg);
//long fak(int n);
//double formula(int x, int n);
//
//int main()
//{
//	std::cout << formula(3, 3);
//}
//
//long pow(int n, int deg)
//{
//	long res{1};
//	for (size_t i = 0; i < deg; ++i)
//	{
//		res *= n;
//	}
//	return res;
//}
//
//long fak(int n)
//{
//	int fak{1};
//	for (size_t i = 1; i <= n; ++i)
//	{
//		fak *= i;
//	}
//	return fak;
//}
//
//double formula(int x, int n)
//{
//	double res{};
//	for (size_t i = 1; i <= n; ++i)
//	{
//		res += (i % 2) ? -1 * (pow(x, i + 1) / (fak(3 * i) + pow(2, i + 1))) : (pow(x, i + 1) / (fak(3 * i) + pow(2, i + 1)));
//	} 
//	return res;
//}

// -------------- kataryal tiv --------------------------
//int baj(int n);
//bool valid(int n);
//void milion();
//
//int main()
//{
//	milion();
//}
//
//int baj(int n)
//{
//	int sum{};
//	for (size_t i = 1; i <= n / 2; ++i)
//	{
//		if (n % i == 0)
//		{
//			sum += i;
//		}
//	}
//	return sum;
//}
//
//bool valid(int n)
//{
//	return n == baj(n);
//}
//
//void milion()
//{
//	for (size_t i = 1; i < 1000000000; ++i)
//	{
//		if (valid(i))
//		{
//			std::cout << i << " ";
//		}
//	}
//}



// ------------------- N-rd parz tivy

//bool is_prime(int n)
//{
//	if (n < 2)
//	{
//		return false;
//	}
//	for (size_t i = 2; i <= n / 2; ++i)
//	{
//		if ((n & 1) == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//long n_prime(int n)
//{
//	int count{};
//	for (size_t i = 2;; ++i)
//	{
//		if (is_prime(i))
//		{
//			++count;
//		}
//		if (count == n)
//		{
//			return i;
//		}
//	}
//}
//int main()
//{
//	std::cout << n_prime(4);
//}

// ----------------------- sqrt 

//double sqrt_(int a)
//{
//	double x = 1.0;
//	for (size_t i = 0; i < 10; ++i)
//	{
//		x = (x + a / x) / 2;
//	}
//	return x;
//}

// ------------------------ ln and log

//long pow(int n, int p)
//{
//	long res{ 1 };
//	for (size_t i = 0; i < p; ++i)
//	{
//		res *= n;
//	}
//	return res;
//}
//
//double ln(double x)
//{
//	double res{};
//	if (x <= 0)
//	{
//		throw std::invalid_argument("");
//	}
//	for (size_t i = 1; i <= 50; ++i)
//	{
//		res += pow((x - 1) / (x + 1), 2 * i - 1) / (2 * i - 1);
//	}	
//	return 2 * res;
//}
//
//double log(double a, double b)
//{
//	return ln(b) / ln(a);
//}

// -------------------  Heroni banadzev 
// Մուտքագրել երեք բնական թվեր՝ a, b և c։ Հաշվել այդ կողմերով եռանկյան մակերեսը Հերոնի բանաձևով։

//double sqrt_(int a) 
//{
//	double x = 1.0;
//	for (size_t i = 0; i < 10; ++i)
//	{
//		x = (x + a / x) / 2;
//	}
//	return x;
//}
//
//long area_heron(int a, int b, int c)
//{
//	int p = (a + b + c) / 2;
//	return sqrt_(p * ((p - a) + (p - b) + (p - c)));
//}

//  Նկարագրել բուլյան ֆունկցիա, որն արգումենտում ստանում է երեք իրական թիվ և վերադարձնում է false, եթե գոյություն չունի տրված կողմերով եռանկյուն: Հակառակ դեպքում վերադարձնում է true և վերադարձնում է նաև այդ եռանկյան մակերեսը:

//double sqrt_(int a) 
//{
//	double x = 1.0;
//	for (size_t i = 0; i < 10; ++i)
//	{
//		x = (x + a / x) / 2;
//	}
//	return x;
//}
//
//double area_heron(int a, int b, int c)
//{
//	int p = (a + b + c) / 2;
//	return sqrt_(p * ((p - a) + (p - b) + (p - c)));
//}
//
//bool exist_triangle(int a, int b, int c)
//{
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		std::cout << area_heron(a, b, c) << std::endl;
//		return true;
//	}
//	return false;
//}

// Տրված n դրական ամբողջ թվի համար արտածել 2-ի ամենամեծ աստիճանը, որը չի գերազանցում n-ը։

//double ln(double x)
//{
//	double res{};
//	if (x <= 0)
//	{
//		throw std::invalid_argument("");
//	}
//	for (size_t i = 1; i <= 10000; ++i)
//	{
//		res += pow((x - 1) / (x + 1), 2 * i - 1) / (2 * i - 1);
//	}	
//	return 2 * res;
//}
//
//double log(double a, double b)
//{
//	return ln(b) / ln(a);
//}
//
//int max_power(int a)
//{
//	return log(2, a);
//}


// ---------------------------------------------------------- hanrahashvakan vector

//Մուտքագրել  2 թիվ` n, k և n-չափանի վեկտոր՝ V։ Բազմապատկել տրված վեկտորը k թվով։

// void mul_vec(int* vec, int n, int k);
// void init(int* vec, int n);
// void print(int* vec, int n);

// int main()
// {
//     int n{};
//     int k{};
//     int v[50]{};
//     std::cout << "Enter the N : ";
//     std::cin >> n;
//     std::cout << "Enter the K : ";
//     std::cin >> k;
//     init(v, n);
//     print(v, n); 
//     mul_vec(v, n, k);
//     print(v, n);
//     return 0;
// }
// void init(int* vec, int n)
// {
//     for (size_t i = 0; i < n; ++i)
//     {
//         std::cout << "Enter the " << i + 1 << " element : ";
//         std::cin >> vec[i];
//     }
// }
// void mul_vec(int* vec, int n, int k)
// {
//     for (size_t i = 0; i < n; ++i)
//     {
//         vec[i] *= k;
//     }
// }
// void print(int* vec, int n)
// {
//     for (size_t i = 0; i < n; ++i)
//     {
//         std::cout << vec[i] << " ";
//     }
//     std::cout << std::endl;
// }

// Մուտքագրել n թիվ և n-չափանի 2 վեկտորներ՝ V1, V2։ Հաշվել այդ վեկտորների գումարը՝ V1 + V2:

void init(int* vec, int n);
//void print(int* vec, int n);
//void add_vec(int* v, int* v1, int n);
//
//int main()
//{
//    int n{};
//    int v[50]{};
//    int v1[50]{};
//    std::cout << "Enter the N : ";
//    std::cin >> n;
//    init(v, n);
//    init(v1, n);
//    add_vec(v, v1, n);
//    print(v, n); 
//    print(v1, n);
//    return 0;
//}
//void init(int* vec, int n)
//{
//    for (size_t i = 0; i < n; ++i)
//    {
//        std::cout << "Enter the " << i + 1 << " element : ";
//        std::cin >> vec[i];
//    }
//}
//void add_vec(int* v,int* v1, int n)
//{
//    for (size_t i = 0; i < n; ++i)
//    {
//        v1[i] += v[i];
//    }
//}
//void print(int* vec, int n)
//{
//    for (size_t i = 0; i < n; ++i)
//    {
//        std::cout << vec[i] << " ";
//    }
//    std::cout << std::endl;
//}
//


//  Մուտքագրել n թիվ և n-չափանի 2 վեկտորներ՝ V1, V2։ Հաշվել այդ վեկտորների սկալյար արտադրյալը՝ V1 * V2:

//void init(int* vec, int n);
//void print(int* vec, int n);
//int scalar(int* v, int* v1, int n); 
//
//int main()
//{   
//    int n{};
//    int v[50]{};
//    int v1[50]{};
//    std::cout << "Enter the N : ";
//    std::cin >> n;
//    init(v, n);
//    init(v1, n); 
//    std::cout << scalar(v, v1, n);
//    
//    return 0;
//}
//void init(int* vec, int n)
//{
//    for (size_t i = 0; i < n; ++i)
//    {
//        std::cout << "Enter the " << i + 1 << " element : ";
//        std::cin >> vec[i];
//    }
//}
//int scalar(int* v,int* v1, int n)
//{
//    int res{};
//    for (size_t i = 0; i < n; ++i)
//    {
//        res += v[i] * v1[i];
//    }
//    return res;
//}
//void print(int* vec, int n)
//{
//    for (size_t i = 0; i < n; ++i)
//    {
//        std::cout << vec[i] << " ";
//    }
//    std::cout << std::endl;
//}
//


//  Մուտքագրել n թիվ, և n չափանի V  վեկտոր։ Հաշվել տրված վեկտորի երկարությունը։

//void init(int* vec, int n);
//void print(int* vec, int n);
//double sqrt_(double n);
//int vec_len(int* v, int n); 
//
//int main()
//{   
//    int n{};
//    int v[50]{};
//    std::cout << "Enter the N : ";
//    std::cin >> n;
//    init(v, n);
//    std::cout << vec_len(v, n);
//    return 0;
//}
//void init(int* vec, int n)
//{
//    for (size_t i = 0; i < n; ++i)
//    {
//        std::cout << "Enter the " << i + 1 << " element : ";
//        std::cin >> vec[i];
//    }
//}
//int vec_len(int* v, int n)
//{
//    int res{};
//    for (size_t i = 0; i < n; ++i)
//    {
//        res += v[i] * v[i];
//    }
//    return sqrt_(res);
//}
//void print(int* vec, int n)
//{
//    for (size_t i = 0; i < n; ++i)
//    {
//        std::cout << vec[i] << " ";
//    }
//    std::cout << std::endl;
//}
//double sqrt_(double n)
//{
//    double x = 1.0;
//    for (size_t i = 0; i < 10; ++i)
//    {
//        x = (x + n / x) / 2;
//    }
//    return x;
//}
//


//Մուտքագրել n թիվ և n-չափանի 2 վեկտորներ՝ V1, V2։ Գտնել այդ վեկտորների կազմած անկյան կոսինուսը։

//void init(int* vec, int n);
//void print(int* vec, int n);
//double sqrt_(double n);
//int vec_len(int* v, int n); 
//int scalar(int* v, int* v1, int n); 
//double cos_vec(int* v1, int* v2, int n);
//
//int main()
//{   
//    int n{};
//    int v1[50]{};
//    int v2[50]{};
//    std::cout << "Enter the N : ";
//    std::cin >> n;
//    init(v1, n);
//    init(v2, n);  
//    std::cout << cos_vec(v1,v2,n);
//    return 0;
//}
//void init(int* vec, int n)
//{
//    for (size_t i = 0; i < n; ++i)
//    {
//        std::cout << "Enter the " << i + 1 << " element : ";
//        std::cin >> vec[i];
//    }
//}
//int vec_len(int* v, int n)
//{
//    int res{};
//    for (size_t i = 0; i < n; ++i)
//    {
//        res += v[i] * v[i];
//    }
//    return sqrt_(res);
//}
//void print(int* vec, int n)
//{
//    for (size_t i = 0; i < n; ++i)
//    {
//        std::cout << vec[i] << " ";
//    }
//    std::cout << std::endl;
//}
//double sqrt_(double n)
//{
//    double x = 1.0;
//    for (size_t i = 0; i < 10; ++i)
//    {
//        x = (x + n / x) / 2;
//    }
//    return x;
//}
//int scalar(int* v,int* v1, int n)
//{
//    int res{};
//    for (size_t i = 0; i < n; ++i)
//    {
//        res += v[i] * v1[i];
//    }
//    return res;
//}
//
//double cos_vec(int* v1, int* v2, int n)
//{
//    return (double)scalar(v1, v2, n) / vec_len(v1, n) * vec_len(v2, n);
//}

//Տրված է NxN չափանի քառակուսային մատրից։ Ստուգել արդյոք տրված մատրիցը սիմետրիկ է թե ոչ։

//void init(int mat[][50], int size);
//bool sim_mat(int mat[][50], int size);
//int main()
//{
//	int mat[50][50];
//	int size{};
//	std::cout << "Enter the size : ";
//	std::cin >> size;
//	init(mat, size);
//	std::cout << std::boolalpha << sim_mat(mat, size);
//	return 0;
//}
//void init(int mat[][50], int size)
//{
//	for (size_t i = 0; i < size; ++i)
//	{
//		for (size_t j = 0; j < size; ++j)
//		{
//			std::cin >> mat[i][j];
//		}
//	}
//}
//
//bool sim_mat(int mat[][50], int size)
//{
//	for (size_t i = 0; i < size - 1; ++i)
//	{
//		for (size_t j = 1 + i; j < size; j++)
//		{
//			if (mat[i][j] != mat[j][i])
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}


// ----------------------- add two matrix

//void init(int mat[][50], int size);
//void add_mat(int mat[][50], int mat1[][50], int size);
//void print(int mat[][50], int size);
//
//int main()
//{
//	int mat[50][50];
//	int mat1[50][50];
//	int size{};
//	std::cout << "Enter the size : ";
//	std::cin >> size;
//	init(mat, size);
//	init(mat1, size);
//	print(mat, size);
//	print(mat1, size);
//	add_mat(mat, mat1, size);
//	print(mat, size);
//	return 0;
//}
//void init(int mat[][50], int size)
//{
//	for (size_t i = 0; i < size; ++i)
//	{
//		for (size_t j = 0; j < size; ++j)
//		{
//			std::cin >> mat[i][j];
//		}
//	}
//}
//
//void print(int mat[][50], int size)
//{
//	for (size_t i = 0; i < size; ++i)
//	{
//		for (size_t j = 0; j < size; ++j)
//		{
//			std::cout << mat[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//}
//void add_mat(int mat[][50], int mat1[][50], int size)
//{
//	for (size_t i = 0; i < size; ++i)
//	{
//		for (size_t j = 0; j < size; ++j)
//		{
//			mat[i][j] += mat1[i][j];
//		}
//	}
//}


//Տրված բնական թվերի քառակուսային մատրիցի համար արտածել YES, եթե այն մոգական քառակուսի է. նրա բոլոր տողերի, սյուների, գլխավոր ու երկրոդական անկյունագծերի համար տարրերի գումարը նույնն թիվն է,

//bool magic_mat(int mat[50][50], const int size);
//void init(int mat[][50], int size);
//void print(int mat[][50], int size);
//
//int main()
//{
//	int mat[50][50];
//	init(mat, 3);
//	std::cout << std::boolalpha << magic_mat(mat, 3);
//    return 0;
//}
//
//bool magic_mat(int mat[50][50], const int size)
//{
//	for (size_t i = 0; i < size; ++i)
//	{
//		int row{};
//		int column{};
//		int glx{};
//		int erk{};
//		for (size_t j = 0; j < size; ++j)
//		{
//			row += mat[i][j];
//			column += mat[j][i];
//			glx += mat[j][j];
//			erk += mat[j][size - j - 1];
//		}
//		if (!(row == column && column == glx && glx == erk))
//		{
//			return false;
//		}
//	}
//	return true;
//}
//void init(int mat[][50], int size)
//{
//	for (size_t i = 0; i < size; ++i)
//	{
//		for (size_t j = 0; j < size; ++j)
//		{
//			std::cin >> mat[i][j];
//		}
//	}
//}
//
//void print(int mat[][50], int size)
//{
//	for (size_t i = 0; i < size; ++i)
//	{
//		for (size_t j = 0; j < size; ++j)
//		{
//			std::cout << mat[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//}


//------------------------------------------------------ N-ic poqr ev N-i het poxadarcabar parz tveri qanak


//bool check(int n, int i) 
//{
//	for (size_t j = 2; j < n; ++j)
//	{
//		if (i % j == 0 && n % j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//void foo(int n)
//{
//	int count{};
//	for (size_t i = 2; i < n; ++i)
//	{
//		if (n % i != 0 && check(n ,i))
//		{
//			++count;
//		}
//	}
//	std::cout << count;
//}


// tvi erkuakan hamakargum mekeri qanaky


//int one_bit_count(int n)
//{
//    int res{};
//    while (n)
//    {
//        if (n & 1)
//        {
//            ++res;
//        }
//        n >>= 1;
//    }
//    return res;
//}

// kammmm


// bool one_bit_count(int n)
// {
//     int res{};
//     int end = sizeof(n) * 8;
//     for (size_t i = 0; i < end; ++i)
//     {
//         if (n & 1)
//         {
//             ++res;
//         }
//         n >>= 1;
//     }
    
//     return !(res % 2);
// }


// kammmmmm

//bool one_bit_count(int n)
//{
//    bool res{1};
//    int end = sizeof(n) * 8;
//    for (size_t i = 0; i < end; ++i)
//    {
//        res ^= (n & 1);
//        n >>= 1;
//    }
//    
//    return res;
//}


// ---------------------------- nuyny recoursive


//bool one_bit_count_r(int n)
//{
//    if (n == 0)
//    {
//        return true;
//    }
//    return (n & 1) ^ one_bit_count_r( n >> 1);
//}



// setter getter mek funkciayov

// int** foo()
// {
//     int* p;
//     return &p;
// }

// int main()
// {
//     int x = 10;
//     std::cout << x <<std::endl;
//     *(*foo() = &x) = 18;
//     std::cout << *(*foo() = &x) << std::endl;
//     return 0;
// }

// kammmmmm

// int& foo(int& x)
// {
//     return x;
// }

// int main()
// {
//     int x = 10;
//     std::cout << x << std::endl;
//     (foo(x)) = 11;
//     std::cout << x << std::endl;
//     return 0;
// }


// bitwise   swap

// void swap(int& n, int i, int j)
//  {
//      int k = sizeof(n) * 8;
//      if (i == j || (i > k && i < 0) || (j > k && j < 0))
//      {
//          return;
//      }
    
//      bool i_val = ((n >> i) & 1);
//      bool j_val = ((n >> j) & 1);
//      if (i_val != j_val)
//      {
//          n ^= (1 << i);
//          n ^= (1 << j);
//      }
//  }*/


// nuyny I-ic minchev J indexy poxum a

 //void swap_bits(int& n, int ix, int jx)
 //{
        // int k = sizeof(n) * 8;
        // if (ix == jx || (ix > k && ix < 0) || (jx > k && jx < 0))
        // {
        //     return;
        // }
 //    while (ix < jx)
 //    {
 //        swap(n, ix, jx);
 //        ++ix;
 //        --jx;
 //    }
 //}


// bitwise adder 

 //int adder(int n, int m)
 //{                                
 //    while (m)
 //    {
 //        int carry = (n & m);
 //        n ^= m;
 //        m = (carry << 1);
 //    }
 //    return n;
 //}

//Տրված է ամբողջ թվերի զանգված, որում բոլոր էլեմենտները կրկնվում են, բացի մեկից։ Իրականացնել ալգորիթմ, որը կգտնի միակ էլեմենտը O(n) ժամանակում։ Օգտվել բիթային գործողություններից։

 //int uniq(int* arr, const int size)
 //{
	// int uniq{};
	// for (size_t i = 0; i < size; ++i)
	// {
	//	 uniq ^= arr[i];
	// }
	// return uniq;
 //}

// ------------------------------------------ Ստուգել թիվը 2-ի աստիճան է, թե ոչ։

// bool pow_of_two(int n)
//  {
// 	 return !(n & (n - 1));
//  }


// -------------------------------------- Sorting algorithms

/*
void insertion_sort(int* arr, int s)
 {
	 for (int i = 1; i < s - 1; ++i)
	 {
		 int tmp = arr[i];
		 int j = i;
		 while (j > 0 && arr[j  -1] > tmp)
		 {
			 arr[j] = arr[j - 1];
			 --j;
		 }
		 arr[j] = tmp;
	 }
 }

 void selection_sort(int* arr, int s)
 {
	 for (int i = 0; i < s - 1; ++i)
	 {
		 int ix = i;
		 for (int j = i + 1; j < s; ++j)
		 {
			 if (arr[j] < arr[ix])
			 {
				 ix = j;
			 }
		 }
		 std::swap(arr[ix], arr[i]);
	 }
 }

 int partitionn(int* arr, int start, int end) { 
	 int pivot = arr[end]; 
	 int i = start;
	 int j = end - 1; 
	 while (i <= j) { 
		 while (arr[i] < pivot) { 
			 ++i; 
		 }
		 while (arr[j] >= pivot) { 
			 --j; 
		 } 
		 if (i < j) { 
			 std::swap(arr[i], arr[j]); 
		 } 
	 }
	 std::swap(arr[i], arr[end]); 
	 return i; 
 } 

 void quick_sort(int* arr, int l, int h)
 {
	 if (l < h)
	 {
		 int pivot_ix = partitionn(arr, l, h);
		 quick_sort(arr, l, pivot_ix - 1);
		 quick_sort(arr, pivot_ix + 1, h);
	 }
 }

 void buble_sort(int* arr, int s)
 {
	 bool f;
	 for (int i = 0; i < s; ++i)
	 {	
		 f = true;
		 for (int j = 0; j < s - 1 - i; ++j)
		 {
			 if (arr[j + 1] < arr[j])
			 {
				 std::swap(arr[j], arr[j + 1]);
				 f = false;
			 }
		 }
		 if (f)
		 {
			 break;
		 }
	 }
 }*/
// ---------------- kammmm

// int partitionn(int* arr, int start, int end) { 
//  int pivot = arr[end]; 
//  int i = start;
//  int j = end - 1; 
//  while (i <= j) { 
// 	 while (arr[i] < pivot) { 
// 		 ++i; 
// 	 }
// 	 while (arr[j] >= pivot) { 
// 		 --j; 
// 	 } 
// 	 if (i < j) { 
// 		 std::swap(arr[i], arr[j]); 
// 	 } 
//  }
//  std::swap(arr[i], arr[end]); 
//  return i; 
// } 

// void quick_sort(int* arr, int l, int h)
// {
//  if (l < h)
//  {
// 	 int pivot_ix = partitionn(arr, l, h);
// 	 quick_sort(arr, l, pivot_ix - 1);
// 	 quick_sort(arr, pivot_ix + 1, h);
//  }
// }


// Իրականացնել ծրագիր, որը ստանում է ֆայլ և սեղմում է (compress) ֆայլի պարունակությունը օգտագործելով RLE - Run-Length Encoding ալգորիթմը։

//#include <fstream>
//#include <string>
//
//int main()
//{
//	std::string input;
//	std::cout << "Enter the input file name : ";
//	std::cin >> input;
//	std::ifstream fin(input);
//	std::ofstream fout("t.txt");
//	std::string buf; 
//	
//	while (std::getline(fin, buf))
//	{
//		int count{ 1 };
//		for (size_t i = 0; i < buf.size() - 1; ++i)
//		{
//			if (buf[i] == ' ')
//			{
//				fout << buf[i];
//				continue;
//			}
//			if (buf[i] == buf[i + 1])
//			{
//				++count;
//				continue;
//			}
//		    fout << count << buf[i];		
//			count = 1;
//		}
//		fout << count << buf[buf.size() - 1];
//		
//		fout << std::endl;
//	}
//	fin.close();
//	fout.close();
//}


// ---------------------------------------- find substring 

//int foo(std::string s1, std::string s2)
//{
//	int len = s1.size() - s2.size() + 1;
//	
//	for (int i = 0; i < len; ++i)
//	{
//		int j = 0;
//		bool f = true;
//		if (s1[i] == s2[j])
//		{
//			while (s2[j])
//			{
//				if (s1[j + i] != s2[j])
//				{
//					f = false;
//					break;
//				}
//				++j;
//			}
//			if (f)
//			{
//				return i;
//			}
//		}
//	}
//	return -1;
//}

