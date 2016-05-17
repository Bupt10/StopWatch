#include "StopWatch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    StopWatch s;
    s.start();

    double d = .0;
    while (true) {
    //0000 0000 0000 0 0000
        d = s.seconds();
        //std::cout << setprecision(20);
        std::cout << "seconds:" << setprecision(30) << d << std::endl;
        system("ping 127.1 -n 1 >nul");
        if (d > 10)
        {
            s.re_start();
        }
    }

    return 0;
}