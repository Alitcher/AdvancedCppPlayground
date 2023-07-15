/*Write a class template for a 2D point. The class should have two members x and y, and a member function to print the point coordinates.*/
#pragma once

template <typename T>
class Point2D {
public:
    Point2D(T xValue, T yValue) : x(xValue), y(yValue) {}

    void printCoordinates() const {
        std::cout << "Point Coordinates: (" << x << ", " << y << ")" << std::endl;
    }
        
    float distanceTo(const Point2D<T>& other) const {
        T dx = x - other.x;
        T dy = y - other.y;
        return std::sqrt(dx * dx + dy * dy);
    }

private:
    T x;
    T y;
};