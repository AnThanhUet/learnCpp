#include <iostream>

class Point3d
{
private:
    int m_x {};
    int m_y {};
    int m_z {};
public:
    void setValue(int a, int b, int c)
    {
        m_x = a;
        m_y = b;
        m_z = c;
    }

    void print(void)
    {
        std::cout << m_x << " " << m_y << " " << m_z << std::endl;
    }

    bool isEqual(const Point3d& p)
    {
        return (m_x == p.m_x && m_y == p.m_y && m_z == p.m_z);
    }


};

int main()
{
        Point3d point1;
        //point.setValue(1, 2, 3);
        //point.print();
        point1.setValue(1, 2, 3);
        Point3d point2;
        point2.setValue(1, 2, 3);

        if (point1.isEqual(point2))
        {
            std::cout << "point 1 and point 2 are equal\n";
        }
        else
        {
            std::cout << "point 1 and point 2 are not equal\n";
        }

        Point3d point3;
        point3.setValue(3, 4, 5);
        if (point1.isEqual(point3))
        {
            std::cout << "point 1 and point 3 are equal\n";
        }
        else
        {
            std::cout << "point 1 and point 3 are not equal\n";
        }
    return 0;
}