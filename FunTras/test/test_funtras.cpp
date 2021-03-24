#include <funtras.hpp>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double y,x;
    x = 2.71;
    y = funtras::root_t(funtras::sin_t(x)+ funtras::ln_t(x), 3) * funtras::div_t(funtras::sinh_t(funtras::sqrt_t(2)))
     + funtras::atan_t(funtras::div_t(funtras::exp_t(1)));
    cout << y << endl;
    return 0;
}
