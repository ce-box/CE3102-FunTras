#include "funtras.hpp"
#include <iostream>

using namespace std;

void power_test(){
    cout << funtras::power_t(9,8) << endl;
    cout << funtras::power_t(2,10)<< endl;
}

void div_t_test(){
    cout << funtras::div_t(10) << endl;
    cout << funtras::div_t(2) << endl;
}

void sinh_t_test(){
    cout << funtras::sinh_t(10) << endl;
    cout << funtras::sinh_t(2) << endl;
}

void sin_t_test(){
    cout << funtras::sin_t(10) << endl;
    cout << funtras::sin_t(2) << endl;
}

void cosh_t_test(){
    cout << funtras::cosh_t(10) << endl;
    cout << funtras::cosh_t(2) << endl;
}

void cos_t_test(){
    cout << funtras::cos_t(10) << endl;
    cout << funtras::cos_t(2) << endl;
}

void exp_t_test(){
    cout << funtras::exp_t(11) << endl;
    cout << funtras::exp_t(6) << endl;
}

void ln_t_test(){
    cout << funtras::ln_t(11) << endl;
    cout << funtras::ln_t(6) << endl;
}

void tanh_t_test(){
    cout << funtras::tanh_t(11) << endl;
    cout << funtras::tanh_t(6) << endl;
}

void tan_t_test(){
    cout << funtras::tan_t(11) << endl;
    cout << funtras::tan_t(6) << endl;
}
void asin_t_test(){
    cout << funtras::asin_t(0.5) << endl;
    cout << funtras::asin_t(-0.3) << endl;
}

void atan_t_test(){
    cout << funtras::atan_t(0.5) << endl;
    cout << funtras::atan_t(-0.3) << endl;
}

void sqrt_t_test(){
    cout << funtras::sqrt_t(36) << endl;
    cout << funtras::sqrt_t(363) << endl;
}

void root_t_test(){
    cout << funtras::root_t(36,5) << endl;
    cout << funtras::root_t(363,0) << endl;
}

int main(int argc, char const *argv[])
{
    power_test();
    div_t_test();
    sinh_t_test();
    sin_t_test();
    cosh_t_test();
    cos_t_test();
    exp_t_test();
    ln_t_test();
    tanh_t_test();
    tan_t_test();
    asin_t_test();
    atan_t_test();
    sqrt_t_test();
    root_t_test();
    return 0;
}
