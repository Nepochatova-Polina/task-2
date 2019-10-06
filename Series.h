
#ifndef MENU2_SERIES_H
#define MENU2_SERIES_H


class Series {
public:
    //Series
    static int Series1(int a);
    static int Series13(int end, int start);
    static int Series12(int r);
    static int Series20();

    //Proc
    static void PowerA3(double a, double &b);
    static void Mean(int x, int y, double &AMean, double &GMean);
    static double Calc( double firstNumber, double secondNumber,int operation);
    static double DagToRad(int d);

    //MInMax
    static int MinMax3(int n);
    static int MinMax14(int b, int &minNumber, int &min);
    static int MinMax22(int n,int &min1, int &min2);
    static int MinMax23(int n,int &max1, int &max2, int &max3);
};


#endif //MENU2_SERIES_H
