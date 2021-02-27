#include <iostream>
using namespace std;
 
int main()
{
    int seconds = 0;
    int hh = 0;
    int mm = 0;
    int ss = 0;
 
    cout << "Enter a time in HH:MM:SS format: "<< endl;
    cout << "Hours?   ";          cin >> hh;
    cout << "Minutes? ";          cin >> mm;
    cout << "Seconds? ";          cin >> ss;
 
    seconds = hh*3600 + mm*60 + ss;

    cout<<"\nThe time in seconds is: "<<seconds;
 
    return 0;
}
