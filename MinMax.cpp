#include <iostream>
#include <cstdio>
#include "Series.h"
#include "cmath"

using namespace std;
//MinMax3

int Series::MinMax3(int n) {
    int a, b;
    int maxPerimeter = 0;
    for (int i = 1; i <= n; i++) {
        printf("Enter the side of the rectangle:");
        scanf("%d", &a);
        printf("Enter the side of the rectangle:");
        scanf("%d", &b);
        int p = 2 * (a + b);
        if (p > maxPerimeter) {
            maxPerimeter = p;

        }
    }
    return maxPerimeter;
}


//MinMax14
int Series::MinMax14(int b, int &minNumber, int &min) {
    int sequenceNumber;
    for (int i = 1; i <= 10; ++i) {
        printf("Enter a sequence number:");
        scanf("%d", &sequenceNumber);
        if ((sequenceNumber > b) && ((sequenceNumber < min) || (minNumber == 0))) {
            min = sequenceNumber;
            minNumber = i;
        }
    }
}
//MinMax22
int Series::MinMax22(int n,int &min1, int &min2) {
    int number;
    for (int i = 1; i <= n; i++) {
        printf("Enter a number:");
        scanf("%d", &number);

        if (i == 1) {
            min1 = number;
            min2 = number;
        }
        if ((number < min2) && (number != min1)) {
            if (number < min1) {
                min2 = min1;
                min1 = number;
            }
            else min2=number;

        }
    }
}
//MinMax23
int Series::MinMax23(int n, int &max1, int &max2, int &max3) {
    int number;
    for (int i = 1; i <= n; ++i) {
        printf("Enter a number:");
        scanf("%f", &number);

        if (i == 1) {
            max1 = number;
            max2 = number;
            max3 = number;
        }

        if ((number > max3) && (number != max1) && (number != max2)) {
            if (number > max2) {
                if (number > max1) {
                    max3 = max2;
                    max2 = max1;
                    max1 = number;
                } else {
                    max3 = max2;
                    max2 = number;
                }
            } else max3 = number;
        }

        if (max1 == max2) max2 = number;
        if ((max3 == max1) || (max3 == max2)) max3 = number;

    }
}