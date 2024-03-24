#include <iostream>
using namespace std;

class Vector
{
private:
    float x;
    float y;
    float z;

public:
    void SetAll(float _x, float _y, float _z)
    {
        x = _x;
        y = _y;
        z = _z;
    }

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
    temp.SetAll(5.21, 3.6894, 9.3563);
    cout << temp.Get_x() << endl;
    cout << temp.Get_y() << endl;
    cout << temp.Get_z() << endl;
}
