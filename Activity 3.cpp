#include <iostream>
using namespace std;
int main(){
   
   int hours, minutes;
   
  cout<<"Enter Hours: " ;
  cin>>hours;
  cout<<"Enter Minutes: ";
  cin>>minutes;
  
  cout<<"Total Minutes: "<<hours * 60 + minutes;
  
  return 0;
}