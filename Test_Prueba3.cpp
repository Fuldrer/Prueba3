 #include <iostream>
 #include <verilated.h>
 #include "VPrueba3.h"

 int main()
 {
    VPrueba3 vprueba;
    unsigned int n= 128;
    int count = 0;
     while(n != 0) {
        n /= 10;
        ++count;
    }
    vprueba.n = n;
    vprueba.eval();
    if( vprueba.count != count){
        std::cout << "\x1b[31mERROR:\x1b[0m Unexpected result: " << vprueba.n
                          << ", expected " << (count) << '\n';
    }
     
 }