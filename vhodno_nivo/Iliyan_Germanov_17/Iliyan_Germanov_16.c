#include <stdio.h>

int end_on_x(int num, int x);
int prime(int num);

int main() {
    int x, num;
    int arr[10], arr_counter = 0;;
    do {
        scanf("%d", &x);
    } while( x <=0 || x >= 10);

    for(num = 1; arr_counter != 10; num++) {
        if(prime(num) && end_on_x(num, x)) {
            arr[arr_counter++] = num;
        }
    }

    for(num = 0; num < arr_counter; num++) {
        printf("%d\n", arr[num]);
    }

    return 0;
}

int end_on_x(int num, int x) {
    return num % 10 == x ? 1 : 0;
}

int prime(int num) {
    int del;
    for(del = 2; del <= num / 2; del++) {
        if(num % del == 0) return 0;
    }
    return 1;
}
