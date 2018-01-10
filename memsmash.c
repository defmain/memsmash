#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(){
    int x;
    char* foo;
    for(x=0;x<1000;x++){
        memset(malloc(1024*1024L), 'w', 1024*1024L);
    }
    sleep(60);
}
