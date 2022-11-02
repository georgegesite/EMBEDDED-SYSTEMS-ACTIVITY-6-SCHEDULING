
#include <iostream>
#include <algorithm> 
using namespace std;
 
int main() {
int led1 = 2;
int led2 = 0;
int led3 = 1;
int led4 = 5;
int led5 = 7;
int led6 = 4;
int led7 = 3;
int led8 = -3;
int led9 = -10;
 
 
    int x[] = {led1, led2, led3, led4, led5, led6, led7, led8, led9}; //integer array
    int len = sizeof(x) / sizeof(x[0]); //get array length
     
    sort(x, x + len);
     
    cout << "Sorted Array" << endl;
    for (int i = 0; i < len; i++) {
        cout << x[i] << "\t";
    }
    cout << endl;
}