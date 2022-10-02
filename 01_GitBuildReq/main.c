#include <stdio.h>

int main(int argc, char* args[] ){
//    for(int i = 0; i < argc; i++){
//	printf("Arg %i:\t%s\n", i, args[i]);
//    }
//    return 0;
    if (argc < 2){
	printf("Not enough args!\n");
	return -1;
    }
    printf("Hello, %s!\n", args[1]);
    return 0;
}
