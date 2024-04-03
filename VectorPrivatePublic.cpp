#include <iostream>
#include <vector>

using namespace std;

class Vector
{
private:
    int x;
    int y;
    int z;

public:
    std::vector<int> vectornumbers;
    std::vector<int> vectornumbers1;
    std::vector<int> vectornumbers2;
    void SetAll()
    {
        for(x = 0; x < 9; x++) 
        {
            vectornumbers.push_back(x);
        }
        for(y = 0; y < 19; y++) 
        {
            vectornumbers1.push_back(y);
        }
        for(z = 0; z < 49; z++) 
        {
            vectornumbers2.push_back(z);
        }
    }
    void GetVector()
    {
        cout << x <<"\t" << y << "\t" << z << endl;
    }
    void Show()
    {
        float length = sqrt(x * x + y * y + z * z);
        cout << "Length: " << length;
    }
};

int main()
{
    Vector temp{  };
    temp.SetAll();
    temp.GetVector();
    temp.Show();
}
