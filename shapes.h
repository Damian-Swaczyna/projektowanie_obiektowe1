#ifndef SHAPES_H
#define SHAPES_H

class Square {
private:
    int length;
public:
    Square(int len = 0);
    void setLength(int l);
    int getLength() const;
    int getArea() const;
    int getPerimeter() const;
};

class Circle {
private:
    double radius;
public:
    Circle(double r = 0);
    void setRadius(double r);
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
};

class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle(int l = 0, int w = 0);
    void setDimensions(int l, int w);
    int getLength() const;
    int getWidth() const;
    int getArea() const;
    int getPerimeter() const;
};

#endif // SHAPES_H
