#include <stdio.h>

//comment added as a change for step 30

void microkernel_sendmsg(char *);

void main(){
    printf("Helloworld!\n");
    printf("This must be a monolithic design\n");
    microkernel_sendmsg("is more portable");
}
void microkernel_sendmsg(char *a){
    printf("microkernel: %s\n", a);
}
