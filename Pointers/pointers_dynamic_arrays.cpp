#include <iostream>
using namespace std;

int main(){

    int size;
    cout << "Size: ";
    cin >> size;
    int* myArrays = new int[size]; // Array created at runtime.
                                    // new keyword allocate memory

    for (int i=0; i<size; i++){
        cout << "Array[" <<i <<"]"<<endl;
        cin >> myArrays[i];
    }

    for (int i=0; i<size; i++){
        // cout << myArrays[i] << " ";
        cout << *(myArrays+i)<< " ";
    }

    // we do not need the array anymore, we need to deallocate the array to save memory.
    delete[] myArrays;
    myArrays = NULL;

    return 0;
}