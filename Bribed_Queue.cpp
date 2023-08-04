//Bribed queue
#include <iostream>
using namespace std;

int BribedQueue(int a[],int size_of_array){
    int max_value=0;
    int index_of_value = 0;

    //loop to find the maximum number and its index
    for (int index=0; index<size_of_array; index++){
        if (max_value<a[index]){
            max_value = a[index];
            index_of_value = index;
        }
    }

    //count the numbers took a bribe.
    int count = (size_of_array-1) - index_of_value; 
    return count;
}
int main() {
    int a[] = {1,2,3,4,5,8,6,7};
    int size_of_array = sizeof(a)/4;

    //Function call
    int result = BribedQueue(a,size_of_array);

    //Print result
    cout<<result;

    

    return 0;
}

