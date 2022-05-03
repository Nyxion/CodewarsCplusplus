#include "codewarsfunc.h"

using namespace std;

int main()
{
    CodewarsFunc cwf;
    cout << "-------------" << endl;
    cout << "Codewars bullshit\n";
    cout << "-------------" << endl;
    cout << cwf.number_to_String(1 + 2) << endl;
    cout << "-------------" << endl;
    cout << cwf.bmi(86.7, 1.7) << endl;
    cout << "-------------" << endl;
    cwf.string_to_array("Robin Singh");
    for (auto i : cwf.test_array)
        cout << i << " ";

    
}
