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

double call_compute(){
    int sum=0;
    for(int i=0; i < SIZE; i++){
        sum += i;
    }
    return sum;
}

int main(int argc,char** argv){
    clock_t start,end;
    double time;

    start=clock();
    call_io();
    end=clock();
    time = ((double)end-start)/CLOCKS_PER_SEC;
    printf("time used in I/O is %.6f\n",time);

    start=clock();
    double result=call_compute();
    end=clock();
    time = ((double)end-start)/CLOCKS_PER_SEC;
    printf("time used in Computation is %.6f\n",time);


    return 0;
}