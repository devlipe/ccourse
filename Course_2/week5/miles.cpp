/*  Miles are covered to kilometers
    Felipe P Ferreira
    21/09/2020
*/

#include<iostream>
using namespace ::std;
const double m_to_k = 1.609;

inline double convert (int mi){return (mi * m_to_k);}

int main() 
{
    int miles = 1;

    while (miles != 0)
    {
        cout << "Input distance in miles or 0 to terminate: ";
        cin >> miles;
        cout << "\nDistance is " << convert(miles) << " km." << endl;
    }
    cout << endl;
    return 0;
}