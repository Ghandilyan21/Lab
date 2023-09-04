#include <iostream>
int main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter the " << i + 1 << " element: ";
        std::cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] = max)
        {
            std::cout << i << std::endl;
        }
    }
}