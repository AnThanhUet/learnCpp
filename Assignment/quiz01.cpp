#include <iostream>

class Point2D
{
private:
    double m_x {};
    double m_y {};
public:
    Point2D(double x = 0.0, double y = 0.0)
        : m_x{ x }, m_y{ y } {}
    void print()const;
};

void Point2D::print() const
{
    std::cout << m_x << "  " << m_y;
}
int main()
{
    Point2D first{};
    Point2D secound { 3.0, 4.0 };
    Point2D a { secound };
    first.print();
    secound.print();
    std::cout << std::endl;
    a.print();
    
    return 0;
}