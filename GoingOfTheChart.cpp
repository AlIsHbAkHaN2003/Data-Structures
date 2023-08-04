//Going of the charts.
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int GoingOfTheCharts(int a[],int size){
  int max_days = 0;

  //normal hours
  int normal_hours = 6;

  //count consicutive days
  int consecutive_days = 0;

  //loop over the array
  for (int i=0; i<size; i++){
    //check if value at each index is greater then normal hourse then 1 in consicutive_days  
    if (a[i] > normal_hours){
      consecutive_days +=1;
    }
    else {
        //check if consecutive days are greater than max days then reset max_days value 
        if(consecutive_days > max_days){
            max_days = consecutive_days;
            }
            
        //if condition 1 false and consecutive_days are greater than max then change the value of max
        //and set the value of consecutive_day equal to 0
        consecutive_days = 0;
    }
  }
  //check if consecutive days are greater than max_days than set max_days value
    if (consecutive_days>max_days){
        max_days = consecutive_days;
    }
  return max_days;
}



int main() {
  int size = 16;
  //cin>>size;
  int a[] = {7,8,9,9,8,6,7,8,8,8,10,12,6,7,7,8}; 

  //call function
  int result = GoingOfTheCharts(a,size);

  //print result
  cout<<result;
  return 0;
}
