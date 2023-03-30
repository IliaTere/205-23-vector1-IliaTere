#include <iostream>
#include <stdlib.h>

#define ERORCODE -323232 // Index > capacity error

using namespace std;

template <typename T, int size1> class myvector 
{
    
    private:
        int capacity = size1;
        int size = size1;
        T* arr = new T[capacity];
        
    public:
    T* begin() {
		return &arr[0];
    }

    const T* begin() const {
        return &arr[0];
    }

    T* end() {
    return &arr[size];
    }

    const T* end() const {
        return &arr[size];
    }
    
    myvector(T* input)
    {
        for (int i = 0; i < capacity; ++i)
        {
            this->arr[i] = input[i];
        }
    }
    ~myvector()
        {
            delete[] arr;
        }
    void checkCreated()
    {
        for (int i = 0; i < size; i++) {
            cout << this->arr[i] << " ";
        }
        cout << endl;
    }
    T operator[](int ind){
        if (ind < capacity)
        return this->arr[ind];
        else return ERORCODE;
    }
    void addMemory() {
		capacity *= 2;
        T* tmp = arr;
        arr = new T[capacity];
        for (int i = 0; i < size; ++i) arr[i] = tmp[i];
        delete[] tmp;
    }
    void pushBack(const T& value) {
		if (size >= capacity) addMemory();
    arr[size++] = value;
    }
    void delete_last()
    {
        capacity--;
    }


};