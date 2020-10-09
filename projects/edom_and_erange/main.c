#include <stdio.h>
#include <errno.h>
#include <math.h>

int main() {
    // EDOM
    double val = sqrt(-10);
    errno = 0;
    if (errno == EDOM) {
        printf("Invalid value \n");
    } else {
        printf("Valid value\n");
    }
    errno = 0;
    val = sqrt(10);
    if (errno == EDOM) {
        printf("Invalid value\n");
    } else {
        printf("Valid value\n");
    }
    // ERANG
    double x = 2.000000;
    double value = log(x);
    if (errno == ERANGE) {
        printf("Log(%f) is out of range\n", x);
    } else {
        printf("Log(%f) = %f\n", x, value);
    }
    x = 1.000000;
    value = log(x);
    if (errno == ERANGE) {
        printf("Log(%f) is out of range\n", x);
    } else {
        printf("Log(%f) = %f\n", x, value);
    }
    x = 0.000000;
    value = log(x);
    if(errno == ERANGE){
        printf("Log(%f) is out of range\n", x);
    } else {
        printf("Log(%f) = %f\n", x, value);
    }
    return(0);
}