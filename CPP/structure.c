#include<stdio.h>
#include<stdlib.h>

struct Rectangle {
    int length;
    int breadth;
};

int main(){
    // static
    // struct Rectangle R = {10,5};
    // struct Rectangle *p = &R;
    // R.length = 20;
    // (*p).breadth = 7; // both of the ways can be used
    // p -> breadth = 10;
    // printf("Area of rectangle is %d\n", R.length*p->breadth);

    // dynamic
    struct Rectangle *p;
    p = (struct Rectangle*)malloc(sizeof(struct Rectangle));

    p->length=10;
    p->breadth=2;
    printf("Area of rectangle is %d\n", p->length*p->breadth);


    return 0;
}