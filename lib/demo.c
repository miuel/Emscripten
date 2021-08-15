#include <stdio.h>
#include <string.h>

int main () {
    printf("WASM Ready\n");
    return 1;
}

int getNum() {
    return 22;
}

int getDoubleNum(int n) {
    return n * 2;
}

char gretting[50];
char * greet(char * name) {
    if(strlen(name) > 40) {
        return "name is too long";
    }
    strcpy(gretting, "Hallo ");
    return strcat(gretting, name);

}