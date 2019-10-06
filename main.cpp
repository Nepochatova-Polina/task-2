#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include "Series.h"

using namespace std;

class Menu {
    struct MenuItem {
        string title;

        void (*proc)();

        MenuItem(string aTitle, void (*procLink)()) {
            title = aTitle;
            proc = procLink;
        }
    };

    string menuTitle;
    vector<MenuItem> menuItems;


    void GetMenuView();

public:

    // Constructors
    Menu() {
        menuTitle = "Main menu";
    }

    Menu(string menuTitle) {
        this->menuTitle = menuTitle;
    }

    // Interface methods
    void AddMenuItem(string itemTitle, void (*procLink)());

    void ShowMenu();
};


void Menu::GetMenuView() {
    std::system("clear");

    for (unsigned int i = 0; i < menuTitle.size() + 10; i++)
        cout << "=";
    cout << endl;
    cout << menuTitle << endl;
    for (unsigned int i = 0; i < menuTitle.size() + 10; i++)
        cout << "=";
    cout << endl;

    int ItemNumber = 1;
    for (vector<MenuItem>::iterator it = menuItems.begin(); it != menuItems.end(); it++, ItemNumber++) {
        cout << ItemNumber << " ->) " << it->title << endl;
    }
    cout << endl << "Type \"q\" for Exit " << endl;

    cout << endl;
    cout << endl;

    cout << "Type item num..." << endl;
}

void Menu::AddMenuItem(string itemTitle, void (*procLink)()) {
    menuItems.push_back(*(new MenuItem(itemTitle, procLink)));
}

void Menu::ShowMenu() {
    bool errorCode = false;
    int itemN = 0;
    char choice[255];
    do {
        GetMenuView();

        if (errorCode) {
            cout << "[ERROR] Wrong input!" << endl;
            errorCode = false;
        }

        cin >> choice;
        itemN = atoi(choice);

        if (itemN > 0 && itemN <= (int) menuItems.size()) {
            std::system("clear");
            menuItems[itemN - 1].proc();
        } else
            errorCode = true;
    } while (strcmp(choice, "q"));
    std::system("clear");
}

//#include "menu.h"

void Series1() {
    int a;
    cout << "A:" << endl;
    cin >> a;
    int sumOfTenElements = Series::Series1(a);
    printf("%d\n", sumOfTenElements);
}

void Series12() {
    int r;
    int amountOfNumbers = Series::Series12(r);
    printf("%d\n", amountOfNumbers);
}

void Series13() {
    int end, start;
    cout << "start of sequence:" << endl;
    cin >> start;
    cout << "enter end of sequence:" << endl;
    cin >> end;
    int sumOfElements = Series::Series13(end, start);
    printf("%d\n", sumOfElements);
}

void Series20() {
    int adjacentNumber = Series::Series20();
    printf("%d\n", adjacentNumber);
}

void Proc1() {
    double a, b;
    for (int i = 1; i <= 5; i++) {
        printf("Enter a number:");
        scanf("%lf", &a);
        Series::PowerA3(a, b);
        printf("%lf\n", b);
    }
}

void Proc3() {
    int x, y;
    double AMean, GMean;
    printf("Enter a number:");
    scanf("%d", &x);
    for (int i = 1; i <= 3; i++) {
        printf("Enter a number:");
        scanf("%d", &y);
        Series::Mean(x, y, AMean, GMean);
        printf("%lf\n, %lf\n", AMean, GMean);
    }
}

void Proc22() {
    double firstNumber, secondNumber;
    int operation;
    printf("Enter a number:");
    scanf("%lf", &firstNumber);
    printf("Enter a number:");
    scanf("%lf", &secondNumber);
    printf("Enter a number of operation");
    scanf("%d", &operation);
    double calculationResult = Series::Calc(firstNumber, secondNumber, operation);
    printf("%lf\n", calculationResult);
}

void Proc32() {
    int d, i;
    for (i = 0; i < 4; i++) {
        printf("Enter a number 1-360:");
        scanf("%d", &d);
        double radian = Series::DagToRad(d);
        printf("%lf\n", radian);
    }
}

void MinMax3() {
    int n;
    printf("enter the number of rectangles:");
    scanf("%d", &n);
    int maxPerimeter = Series::MinMax3(n);
    printf("%d\n", maxPerimeter);
}

void MinMax14() {
    int b;
    printf("B:");
    scanf("%d", &b);
    int minNumber = 0;
    int min = 0;
    Series::MinMax14(b, minNumber, min);
    printf("%d, %d\n", minNumber, min);

}

void MinMax22() {
    int min1, min2;
    int n;
    printf("Enter a number bigger than 2:");
    scanf("%d", &n);
    Series::MinMax22(n, min1, min2);
    printf("%d, %d\n", min1, min2);
}

void MinMax23() {
    int n, max1, max2, max3;
    printf("Enter a number bigger than 3:");
    scanf("%d", &n);
    Series::MinMax23(n, max1, max2, max3);
    printf("%d, %d, %d\n", max1, max2,max3);
}

int main() {
    Menu someMenu("Main menu");

    someMenu.AddMenuItem("sumOfTenElements", Series1);
    someMenu.AddMenuItem("amountOfNumbers", Series12);
    someMenu.AddMenuItem("sumOfElements", Series13);
    someMenu.AddMenuItem("adjacentNumber", Series20);
    someMenu.AddMenuItem("elements", Proc1);
    someMenu.AddMenuItem("arithmeticMeanGometricMean", Proc3);
    someMenu.AddMenuItem("calculationOperation", Proc22);
    someMenu.AddMenuItem("radian", Proc32);
    someMenu.AddMenuItem("maxPerimeter", MinMax3);
    someMenu.AddMenuItem("minimalNumber", MinMax14);
    someMenu.AddMenuItem("MinMax22", MinMax22);
    someMenu.AddMenuItem("MinMax23", MinMax23);

    someMenu.ShowMenu();

    return 0;
}