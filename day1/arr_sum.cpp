#include <iostream>
int main(){
    int arr[5];
    int sum = 0;
    int mul = 1;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter the " << i + 1 << " element: ";
        std::cin >> arr[i];
        sum += arr[i];
        mul *= arr[i];
    }
    std::cout << mul << std::endl << sum << std::endl;   
}