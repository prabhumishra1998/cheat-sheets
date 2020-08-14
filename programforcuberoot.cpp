#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float number, ans;
  cout << "Enter any number: ";
  cin >> number;
  ans = cbrt(number);
  cout << "\n Cube Root of " << number << " is: " << ans;
}

//we will use the function in the cmath header file instead of using the logic which will be more timetaking and less productful//
