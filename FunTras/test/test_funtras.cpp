#include <funtras.hpp>
#include <iostream>

using namespace std;
using namespace funtras;

int main(int argc, char const *argv[])
{
    double y,x;
    x = 2.71;
    y = root_t(sin_t(x)+ ln_t(x), 3) * funtras::div_t(sinh_t(sqrt_t(2)))
     + atan_t(funtras::div_t(exp_t(1)));
    cout << y << endl;
    return 0;
}
