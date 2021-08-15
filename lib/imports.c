#include <emscripten.h>
#include <stdio.h>

// call JS function from C
EM_JS(void, jsFunction, (int n), {
    console.log("Call from EM_JS: " + n );
});

int main () {
    printf("WASM Ready\n");

    // call js function (eval)
    emscripten_run_script("console.log('Hallo from C' )"); 

    // call js function ASYC (eval)
    emscripten_async_run_script("console.log('Hallo from C - ASYNC')", 2000); 

    // get return value from js function (int)
    int jsIntVal = emscripten_run_script_int("getNum()");
    printf("Val from the fn created in JS getNum(): %d\n", jsIntVal);

    // get return value from js function (string)
    char * jsStrVal = emscripten_run_script_string ("getStr()");
    printf("Val from the fn created in JS getStr(): %s \n", jsStrVal);

    jsFunction(233);

    return 1;
}
