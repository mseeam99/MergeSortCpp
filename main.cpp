/*********************************************************************
* To run and compile:                                                *
* g++ -o myexe main.cpp MergeSort.cpp && ./myexe                     *
**********************************************************************/

#include "MergeSort.h"
#include <iostream>

int main() {
    std::cout << "Program Started ....." << '\n';

    MergeSort mergeSort;

    std::vector<int> finalVector = mergeSort.makeVector();

    std::cout << "Before sorting: " << std::endl;
    mergeSort.printVector(finalVector);

    mergeSort.divide(finalVector,0,finalVector.size()-1);    

    std::cout<<std::endl;

    std::cout << "After sorting: " << std::endl;
    mergeSort.printVector(finalVector);

    std::cout<<std::endl;

    std::cout << "Program Ended ....." << '\n';
    return 0;
}
