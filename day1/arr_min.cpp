#include <iostream>
int main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter the " << i + 1 << " element: ";
        std::cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    std::cout << min << std::endl;
}