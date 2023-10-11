#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

class MergeSort {
public:
    std::vector<int> makeVector();
    void clearVector(std::vector<int> &vectorToClear);
    void printVector(std::vector<int> &vectorToPrint);
    void conquer(std::vector<int> &vectorToConquer, int left, int middle, int right);
    void divide(std::vector<int> &vectorToDivide, int left, int right);
};

#endif