#include <iostream>
using namespace std;

class Vector
{
private:
    float x;
    float y;
    float z;

public:
    Vector() : x(5.4), y(3.21), z(2.45555)
    {}

    float Get_x()
    {
        return x;
    }
    float Get_y()
    {
        return y;
    }
    float Get_z()
    {
        return z;
    }

};

int main()
{
    Vector temp;
    cout << temp.Get_x() << endl;
    cout << temp.Get_y() << endl;
    cout << temp.Get_z() << endl;
}
