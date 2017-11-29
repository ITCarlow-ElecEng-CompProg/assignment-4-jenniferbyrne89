/** Jennifer Byrne
    20/09/2017
    Lab 4
    Electrical Resistance of a Wire */

/** Preprocessor directives */
#include <iostream>
#include <iomanip>
#include <math.h>

/** Enables cout, cin and endl */
using namespace std;

/** Declaring sub function */
double resistance(double rad, double len, double resistivity);


/** Main function */
int main()
{
    double res, resistivity = -1, len = -1, rad = -1;

    /** Specifies the number of decimal points to ce displayed in answer */
    cout << fixed;
    cout << setprecision(2);

    /** Ensuring pos value for variable */
    while (rad < 0)
    {
        cout << "Enter value for radius : " << "\t" ;
        cin >> rad ;
    }
    /** Ensuring pos value for variable */
    while (len < 0)
    {
        cout << "\n" << "Enter value for lenght : " << "\t";
        cin >> len ;
    }

    /** Ensuring pos value for variable */
    while (resistivity < 0)
    {
        cout << "\n" << "Enter value for resistivity : " << "\t";
        cin >> resistivity ;
    }

    /** Envoking subfunction */
    res = resistance(rad, len, resistivity);

    /** Displaying resistance on console */
    cout << "\n" << "Electrical resistacnce of a Wire : " << "\t" << res << endl;

    /** Terminating main function */
    return 0;
}

/** Resistance sub-function */
double resistance(double rad, double len, double resistivity)
{
    /** Declaring variables in resistance sub function */
    double res, area;

    /** Equation to calculate area */
    area = M_PI * pow(rad, 2);

    /** Equation to calculate resistance */
    res = resistivity * (len / area);

    /** Return value stored in res to main function */
    return res;
}
