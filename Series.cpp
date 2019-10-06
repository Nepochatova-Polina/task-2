#include <iostream>
#include <cstdio>
#include "Series.h"
#include "cmath"

using namespace std;

//Series1
int Series::Series1(int a) {
    int result;
    for (int i = a; i < a + 10; ++i)
        result = result + i;
    return result;
}

//Series12
int Series::Series12(int r) {
    int i = 0;
    while (r != 0) {
        printf("%i:", i);
        scanf("%i", &r);
        ++i;
    }
    return i - 1;
}

//Series13
int Series::Series13(int end, int start) {
    int sum;
    int i = start;
    while (i < end) {
        if (i > 0)
            i++;
        sum = sum + i;
    }
    return sum;
}
//Series20

int Series::Series20() {
    int n;
    printf("N:");
    scanf("%i", &n);
    int i, r, r1;
    for (i = 1; i <= n; ++i, r1 = r) {
        printf(">");
        scanf("%i", &r);
        if (r1 < r) printf("%i\n", r1);
    }
    return 0;
}

