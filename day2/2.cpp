#include <iostream>
int main()
{
    const int size = 8;
    int arr[size]{1,5, 2,6,9,8, 7,4};
    int temp = size - 1;
    for(int i = 0; i < size / 2; ++i)
    {
        if(arr[i] % 2 != 0)
        {
            ++i;
        }
        else if(arr[temp] % 2 == 0)
        {
            --temp;
            --i;
        }
        else{
            int tmp = arr[i];
            arr[i] = arr[temp];
            arr[temp] = tmp;
            --temp;
        }
    } 

    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    } 
}
