
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = 0;
    int i = 0;
    while (i < 1000000){
        if (i%2==0) {
            x = x + 4.0/(2*i+1);
        }
        else {
            x = x - 4.0/(2*i+1);
        }
        ++i;
    }
    cout<<setprecision(7)<<x;
    return 0;
}
