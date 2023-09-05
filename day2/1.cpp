#include <iostream>
int main(int argc, char const *argv[])
{
    std::cout << "Enter the arrays size : ";
    int size = 0;
    std::cin >> size;
    int arr1[size];
    int arr2[size];
    std::cout << "Enter the first array elements" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Enter the " << i + 1 << " element : ";
        std::cin >> arr1[i];
    }
    std::cout << "Enter the second array elements" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Enter the " << i + 1 << " element : ";
        std::cin >> arr2[i];
    }
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr1[i] << " * " << arr2[i] << " = " << arr1[i] * arr2[i] << std::endl;
    }
    return 0;
}
