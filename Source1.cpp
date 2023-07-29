
#include "inout.h"

void read(std::vector<int>& vec)
{

    cout << " size: ";
    cin >> x;       cout << endl;

    vec.resize(x);

    cout << "enter value: " << endl;
    for (int i = 0; i < x; i++)
    {
        cout << '\t';     cin >> vec.at(i);
    }

}