#include <iostream>
int main(){
    int size = 0;
    std::cout << "Enter the array size: ";
    std::cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter the " << i + 1 << " element: ";
        std::cin >> arr[i];
    }
    for (int i = 0, count = 0; i < size; i++)
    {
         if (arr[i] % 2 == 0)
        {
            int tmp = arr[i];
            arr[i] = arr[count];
            arr[count] = tmp;
            count++;
        }   
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}