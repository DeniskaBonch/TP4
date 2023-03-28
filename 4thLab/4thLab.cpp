#include <iostream>
#include <cmath>
#include <math.h>
#include <cstring>
using namespace std;

// class myclass // класс под именем myclass
// {
//     private:
//         int a, b;
//     public:
//         void set(int x, int y){a = x; b = y;}
//         int get() { return a; return b; }
//         myclass(int x, int y){a = x; b = y; cout<<"Object created"<<endl;}
//         ~myclass(){cout<<"Object destroyed"<<endl;}
//         void show(){cout<<a<<endl<<b<<endl;}
//         friend int yourclass(myclass obj);
// };
// int yourclass(myclass obj){
//     return obj.a - obj.b;
// }

long double length(int a, int b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}

void Ex1(long double Ax, long double Ay, long double Bx, long double By, long double Cx, long double Cy, long double Dx, long double Dy)
{
    cout << "Lenghts of sides are:" << endl;
    cout << "AB = " << sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2)) << endl;
    cout << "BC = " << sqrt(pow(Cx - Bx, 2) + pow(Cy - By, 2)) << endl;
    cout << "CD = " << sqrt(pow(Dx - Cx, 2) + pow(Dy - Cy, 2)) << endl;
    cout << "AD = " << sqrt(pow(Dx - Ax, 2) + pow(Dy - Ay, 2)) << endl;
    cout << "AC = DB (hypo) = " << sqrt(pow(Cx - Ax, 2) + pow(Cy - Ay, 2)) << endl;
}

class point
{
private:
    long double x, y;

public:
    void set(int a, int b)
    {
        cin >> a;
        cin >> b;
    }
    long double getX() { return x; }
    long double getY() { return y; }
    point()
    {
        cin >> x;
        cin >> y;
        cout << "Point is created" << endl;
    }
    ~point() {}
    friend void area(point objA, point objB, point objC);
};

void area(point objA, point objB, point objC)
{
    cout << "Area of rectangle = " << sqrt(pow(objB.getX() - objA.getX(), 2) + pow(objB.getY() - objA.getY(), 2)) * sqrt(pow(objC.getX() - objB.getX(), 2) + pow(objC.getY() - objB.getY(), 2)) << endl;
}

class device
{
private:
    string type;
    string name;
    int price;

public:
    device(string _type, string _name, int _price)
    {
        type = _type;
        name = _name;
        price = _price;
    }
    int get_price() { return price; }
};

void Ex3()
{
    int min = 100000;
    device obj1("Mouse", "SuperPuper3K", rand() + 10000);
    device obj2("Keyboard", "LK7GH", rand() + 10000);
    device obj3("Headphones", "67VB0", rand() + 10000);
    device obj4("Earphones", "HK638", rand() + 10000);
    device obj5("Webcamera", "Beast", rand() + 10000);
    device obj6("Mouse", "SuperPuper999K", rand() + 10000);
    device devices[6] = {obj1, obj2, obj3, obj4, obj5, obj6};
    for (int i = 0; i < 5; i++)
    {
        if (min > devices[i].get_price())
        {
            min = devices[i].get_price();
        }
    }

    cout << "Minimal price of those devices = " << min << endl;
}

int main()
{
    system("cls");
    long double angleA, angleB, angleC, angleD;
    cout << "Enter coords of four points (x, y), which satisfy the requirement of a rectangle, from point A to point D" << endl;
    point pA, pB, pC, pD;

    angleA = trunc(10000 * acos(((pB.getX() - pA.getX()) * (pD.getX() - pA.getX()) + (pB.getY() - pA.getY()) * (pD.getY() - pA.getY())) /
                                (length(pB.getX() - pA.getX(), pB.getY() - pA.getY()) * length(pD.getX() - pA.getX(), pD.getY() - pA.getY()))));

    angleB = trunc(10000 * acos(((pA.getX() - pB.getX()) * (pC.getX() - pB.getX()) + (pA.getY() - pB.getY()) * (pC.getY() - pB.getY())) /
                                (length(pA.getX() - pB.getX(), pA.getY() - pB.getY()) * length(pC.getX() - pB.getX(), pC.getY() - pB.getY()))));

    angleC = trunc(10000 * acos(((pB.getX() - pC.getX()) * (pD.getX() - pC.getX()) + (pB.getY() - pC.getY()) * (pD.getY() - pC.getY())) /
                                (length(pB.getX() - pC.getX(), pB.getY() - pC.getY()) * length(pD.getX() - pC.getX(), pD.getY() - pC.getY()))));

    angleD = trunc(10000 * acos(((pC.getX() - pD.getX()) * (pA.getX() - pD.getX()) + (pC.getY() - pD.getY()) * (pA.getY() - pD.getY())) /
                                (length(pC.getX() - pD.getX(), pC.getY() - pD.getY()) * length(pA.getX() - pD.getX(), pA.getY() - pD.getY()))));

    cout << angleA << endl
         << angleB << endl
         << angleC << endl
         << angleD << endl;
    while (angleA != 15707 || angleB != 15707 || angleC != 15707 || angleD != 15707)
    {
        cout << "Points aren`t satisfy the requirement of a rectangle, repeat your input" << endl;
        point pA, pB, pC, pD;

        angleA = trunc(10000 * acos(((pB.getX() - pA.getX()) * (pD.getX() - pA.getX()) + (pB.getY() - pA.getY()) * (pD.getY() - pA.getY())) /
                                    (length(pB.getX() - pA.getX(), pB.getY() - pA.getY()) * length(pD.getX() - pA.getX(), pD.getY() - pA.getY()))));

        angleB = trunc(10000 * acos(((pA.getX() - pB.getX()) * (pC.getX() - pB.getX()) + (pA.getY() - pB.getY()) * (pC.getY() - pB.getY())) /
                                    (length(pA.getX() - pB.getX(), pA.getY() - pB.getY()) * length(pC.getX() - pB.getX(), pC.getY() - pB.getY()))));

        angleC = trunc(10000 * acos(((pB.getX() - pC.getX()) * (pD.getX() - pC.getX()) + (pB.getY() - pC.getY()) * (pD.getY() - pC.getY())) /
                                    (length(pB.getX() - pC.getX(), pB.getY() - pC.getY()) * length(pD.getX() - pC.getX(), pD.getY() - pC.getY()))));

        angleD = trunc(10000 * acos(((pC.getX() - pD.getX()) * (pA.getX() - pD.getX()) + (pC.getY() - pD.getY()) * (pA.getY() - pD.getY())) /
                                    (length(pC.getX() - pD.getX(), pC.getY() - pD.getY()) * length(pA.getX() - pD.getX(), pA.getY() - pD.getY()))));

        cout << angleA << endl
             << angleB << endl
             << angleC << endl
             << angleD << endl;
    }
    point points[4] = {pA, pB, pD, pC};
    cout << "Points are satisfy the requirement of a rectangle" << endl;
    while (true)
    {
        cout << "Choose the ex from 1 to 3 or input 'q' for exit" << endl;
        char ch;
        cin >> ch;
        switch (ch)
        {
        case '1':
            Ex1(pA.getX(), pA.getY(), pB.getX(), pB.getY(), pC.getX(), pC.getY(), pD.getX(), pD.getY());
            break;
        case '2':
            area(pA, pB, pC);
            break;
        case '3':
            Ex3();
            break;
        case 'q':
            exit(0);
            break;
        }
    }
}

// dont worry