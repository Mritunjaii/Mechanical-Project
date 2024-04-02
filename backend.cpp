#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



string cal_m1(float ld, float rd)
{
    float re =((2 * ld) / (M_PI * pow(rd,2)));
    ostringstream oss;
    oss << fixed << setprecision(2) << re;
    string chRE = oss.str();
    return chRE;

}
string cal_m2(float matl, float lenh,float angle, float rd){
    float re = matl * angle * rd / lenh;
    ostringstream oss;
    oss << fixed << setprecision(2) << re;
    string chRE = oss.str();

    return chRE;
    
}

int main()
{

    
    int choose;
    cin >> choose;
    if (choose == 1)
    {
        float load, radius;
        cout << "load on cylindrical shaft";
        cin >> load;
        cout << "radius of cylinder";
        cin >> radius;
        string re = cal_m1(load, radius);
        cout<< re;
    }
    else if (choose == 2)
    {
        float matr, len, ang, radius;
        cout << "material of cylindrical shaft";
        cin >> matr;
        cout << "lenght of cylindrical shaft";
        cin >> len;
        cout << "angle of twist cylindrical shaft";
        cin >> ang;
        cout << "radius of cylindrical shaft";
        cin >> radius;
        string re = cal_m2(matr, len, ang, radius);
        cout<< re;


    }
}
