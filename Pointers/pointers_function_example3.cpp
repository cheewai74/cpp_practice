#include <iostream>
#include <vector>

using namespace std;

bool ascendingCompare(int a, int b) { 
    return a < b; 
}

bool descendingCompare(int a, int b) {
    return a > b; 
}

void sortAscending(vector<int>& numbersVector) {
    for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++) {
        int bestIndex = startIndex;

        for(int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++){

            // We are doing comparison here
            if(ascendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

void sortDescending(vector<int>& numbersVector) {
    for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++) {
        int bestIndex = startIndex;

        for(int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++){

            // We are doing comparison here
            if(descendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

void customSort(vector<int>& numbersVector, bool(*compareFuncPtr)(int, int)) {
    for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++) {
        int bestIndex = startIndex;

        for(int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++){

            // We are doing comparison here
            if(compareFuncPtr(numbersVector[currentIndex], numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

void printNumbers(vector<int>& numbersVector) {
    for(int i = 0; i < numbersVector.size(); i++){
        cout << numbersVector[i] << ' ';
    }
}

int main()
{
    vector<int> myNumbers={2,5,1,3,6,4};
    // sortAscending(myNumbers);
    // printNumbers(myNumbers);
    // sortDescending(myNumbers);

    bool(*funcPtr)(int, int) =ascendingCompare;
    customSort(myNumbers, funcPtr);
    printNumbers(myNumbers);

    bool(*funcPtr_d)(int, int) =descendingCompare;
    customSort(myNumbers, funcPtr_d);
    printNumbers(myNumbers);

    return 0;
}