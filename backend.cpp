#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



float cal_m1(float ld, float rd)
{

    return ((2 * ld) / (M_PI * pow(rd,2)));
}
float cal_m2(float matl, float lenh,float angle, float rd){
    return  matl * angle * rd / lenh;
    
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
        float re = cal_m1(load, radius);
        cout<<fixed<< setprecision(2) << re;
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
        float re = cal_m2(matr, len, ang, radius);
        cout<<fixed<< setprecision(2) << re;


    }
}
