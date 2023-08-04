#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void Sorted(int a[],int size_of_array){
    for (int i = 1; i < size_of_array; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && key < a[j]) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
 
    return ;
}

int SelectingTheMedian(int a[],int size_of_array){
    int initial = 0;
    int final = size_of_array - 1;
    int median_index = (initial + final)/2;
    int median_number = a[median_index];
    return median_number;
}

int main(){
    int size=51;
    int a[] = {766,285,253,40,421,329,225,541,122,163,632,667,752,225,200,434,891,804,240,420,265,626,833,659,919,979,121,898,858,996,312,686,152,295,272,52,710,607,896,581,514,679,299,228,948,657,594,241,935,323,476};
    Sorted(a,size);
    int required_number = SelectingTheMedian(a,size);
    cout<<required_number;
    return 0;    
}