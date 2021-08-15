#include <emscripten.h>
#include <stdio.h>

char * str = "my string variable"; 

char * getStr() {
    return str;
}

int getNumber() {
    int number = 87;

    emscripten_debugger();
    return number;
}


int main () {
    printf("WASM Ready\n");


    return 1;
}
