#include <iostream>
int main(int argc, char const *argv[])
{
    std::cout << "Enter the arrays size : ";
    int size = 0;
    std::cin >> size;
    int arr1[size];
    char arr2[size];
    double arr3[size];
    bool arr4[size];

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
    std::cout << "Enter the third array elements" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Enter the " << i + 1 << " element : ";
        std::cin >> arr3[i];
    }
    std::cout << "Enter the forth array elements (1 for true and 0 for false)" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Enter the " << i + 1 << " element : ";
        std::cin >> arr4[i];
    }
    bool go = true;
    for (int i = size - 1; i >= 0; --i)
    {   
        if (go)
        {
            std::cout << arr1[i] << std::endl;
            if (i == 0)
            {
                go = false;
                i = size;
            }
            continue;
        }
        std::cout << arr2[i] << std::endl;
    }
    return 0;
}
