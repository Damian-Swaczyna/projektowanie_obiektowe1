#include <iostream>
#include "shapes.h"

using namespace std;

int main()
{
    double radius = 0;
    int length = 0, width = 0;
    Square square;
    Circle circle;
    Rectangle rectangle;
    int ch;

    cout << "Wybierz operacje na ksztalcie (nacisnij 1-6):\n\n"
           "1.) Pole kola\n"
           "2.) Pole kwadratu\n"
           "3.) Obwod kola\n"
           "4.) Obwod kwadratu\n"
           "5.) Pole prostokata\n"
           "6.) Obwod prostokata" << endl;
    cout << "\nWpisz swoj wybor: " << endl;
    cin >> ch;

    switch(ch)
    {
        case 1:
        {
            cout << "\nPodaj promien kola: ";
            cin >> radius;
            circle.setRadius(radius);
            cout << "\nPole kola wynosi " << circle.getArea() << endl;
            break;
        }
        case 2:
        {
            cout << "\nPodaj dlugosc boku kwadratu: ";
            cin >> length;
            square.setLength(length);
            cout << "\nPole kwadratu wynosi " << square.getArea() << endl;
            break;
        }
        case 3:
        {
            cout << "\nPodaj promien kola: ";
            cin >> radius;
            circle.setRadius(radius);
            cout << "\nObwod kola wynosi " << circle.getPerimeter() << endl;
            break;
        }
        case 4:
        {
            cout << "\nPodaj dlugosc boku kwadratu: ";
            cin >> length;
            square.setLength(length);
            cout << "\nObwod kwadratu wynosi: " << square.getPerimeter() << endl;
            break;
        }
        case 5:
        {
            cout << "\nPodaj dlugosc prostokata: ";
            cin >> length;
            cout << "\nPodaj szerokosc prostokata: ";
            cin >> width;
            rectangle.setDimensions(length, width);
            cout << "\nPole prostokata wynosi " << rectangle.getArea() << endl;
            break;
        }
        case 6:
        {
            cout << "\nPodaj dlugosc prostokata: ";
            cin >> length;
            cout << "\nPodaj szerokosc prostokata: ";
            cin >> width;
            rectangle.setDimensions(length, width);
            cout << "\nObwod prostokata wynosi " << rectangle.getPerimeter() << endl;
            break;
        }
        default:
        {
            cout << "\nProsze podac prawidlowy wybor!" << endl;
            break;
        }
    }

    return 0;
}
