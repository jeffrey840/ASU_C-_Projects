// main.cpp
#include "HW.h"

HW createHWInstance() {
    HW hw;
    return hw;
}

int main() {
    HW hwInstance = createHWInstance();
    hwInstance.printHello();  // This will print "Hello, World!"
    return 0;
}
