#include <iostream>
using namespace std;

class Array
{
public:
    Array(int N)
    {
         size = N;
         arr = new int[N];
    }

    //destructor
    ~Array()
    {
        delete[] arr;
    }

    //copy constructor
    Array(const Array& arr2)
    {
        size = arr2.size;
        arr = new int[size];
        std::memcpy(arr, arr2.arr, size);
    }

    //overload = operator
    Array& operator=(const Array& arr2) 
    {
        if (this == &arr2)
            return *this; //self assignment
        if (arr != NULL)
            delete[] arr; //clean up already allocated memory

        size = arr2.size;
        arr = new int[size];
        memcpy(arr, arr2.arr, size);
        return *this;
    }

private:
    int size;    //array elements
    int *arr;    //dynamic array pointer
};