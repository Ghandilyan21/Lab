#include <iostream>
int main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter the " << i + 1 << " element: ";
        std::cin >> arr[i];
        arr[i] /= 5;
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}