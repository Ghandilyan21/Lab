#include <iostream>
int compare(const char* arr, const char* arr1)
{
    int s{};
    while(arr[s])
    {
        ++s;
    }
    
    for(int i = 0; i < s + 1; ++i){
        if(arr[i] > arr1[i])
        {
            return arr[i] - arr1[i];
        }
        else if(arr[i] < arr1[i])
        {
            return arr[i] - arr1[i];
        }
    }
    return 0;
}
int main()
{
    char a[] = "hello";
    char b[] = "hello";
    

    std::cout << compare(a, b);
}
