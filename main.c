#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000000

void call_io(){
    int input[SIZE], store[SIZE];
    for(int i=0; i < SIZE; i++){
        store[i] = input[i];
    }
};

int main(int argc,char** argv){
    clock_t start,end;
    double time;

    start=clock();
    call_io();
    end=clock();
    time = ((double)end-start)/CLOCKS_PER_SEC;
    printf("time used in io is %.6f\n",time);

    return 0;
}