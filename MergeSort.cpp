#include "MergeSort.h"
#include <vector>
#include <iostream>

using namespace std;

vector<int> MergeSort::makeVector(){
    vector<int> vectorOfInt;
    for(int i=0;i<10;i++){
        int randomValue = (rand()%10)+1;
        vectorOfInt.push_back(randomValue);
    };
    cout<<"vector successfully made !"<<'\n';
    return vectorOfInt;
};

void MergeSort::clearVector(vector <int>& vectorToClear){
    vectorToClear.clear();
    cout<<"vector successfully cleaned !"<<'\n';
};

void MergeSort::printVector(vector<int>& vectorToPrint){
    if(vectorToPrint.empty()){
        cout<<"vector is already empty! "<<endl;
    }else{
        for(int i=0;i<vectorToPrint.size();i++){
            cout<<vectorToPrint.at(i)<<" ";
        };
    };    
};

void MergeSort::conquer(vector<int>& vectorToConquer, int left, int middle, int right){
    vector<int> tempMerged;
    int pointerOne = left;
    int pointerTwo = middle + 1;
    while (pointerOne <= middle && pointerTwo <= right) {
        if (vectorToConquer[pointerOne] <= vectorToConquer[pointerTwo]) {
            tempMerged.push_back(vectorToConquer[pointerOne]);
            pointerOne++;
        } else {
            tempMerged.push_back(vectorToConquer[pointerTwo]);
            pointerTwo++;
        }
    }
    while (pointerOne <= middle) {
        tempMerged.push_back(vectorToConquer[pointerOne]);
        pointerOne++;
    }
    while (pointerTwo <= right) {
        tempMerged.push_back(vectorToConquer[pointerTwo]);
        pointerTwo++;
    }
    for (int i = 0, j = left; i < tempMerged.size(); i++, j++) {
        vectorToConquer[j] = tempMerged[i];
    }
};

void MergeSort::divide(vector<int>& vectorToDivide, int left, int right){
    if(left<right){
        int middle = left+(right-left)/2;
        divide(vectorToDivide, left , middle);
        divide(vectorToDivide, middle+1 , right);
        conquer(vectorToDivide, left, middle, right);
    }
};
