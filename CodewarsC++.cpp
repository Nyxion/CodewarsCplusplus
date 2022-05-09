#include "codewarsfunc.h"

using namespace std;



int main()
{
    CodewarsFunc cwf;
    //cout << "-------------" << endl;
    //cout << "Codewars bullshit\n";
    //cout << "-------------" << endl;
    //cout << cwf.number_to_String(1 + 2) << endl;
    //cout << "-------------" << endl;
    //cout << cwf.bmi(86.7, 1.7) << endl;
    //cout << "-------------" << endl;
    //cwf.string_to_array("Robin Singh");
    //for (auto i : cwf.test_array)
    //    cout << i << " ";
    //cout << "-------------" << endl;
    //cout << cwf.zero_fuel(50, 25, 2) << endl;
    //cout << cwf.zero_fuel(100, 50, 1) << endl;
    //cout << "-------------" << endl;
    //cout << cwf.isDividedby(-12, 2, -6) << endl;
    //cout << "-------------" << endl;
    //cout << cwf.removeExclamationMarks("Hello World!!!") << endl;
    //cout << "-------------" << endl;
    //cout << cwf.repeat_str(5, "Hello") << endl;
    //cout << "-------------" << endl;
    //cout << cwf.square_sum(std::vector<int>{1,2,3,4}) << endl;
    //cout << "-------------" << endl;
    //cout << cwf.sum(std::vector<int>{1, 2, -3, 3, 4}) << endl;
    //cout << "-------------" << endl;
    //vector<string> a = cwf.split_string_evenly("abcdefg");
    //copy(a.begin(),
    //    a.end(),
    //    ostream_iterator<string>(cout, " "));
    //cout << "-------------" << endl;
    //cout << cwf.seriesSum(9) << endl; // 1.77
    //cout << "-------------" << endl;
    //cout << cwf.get_sum(0, 1);
    cout << "-------------" << endl;
    cout << "Should return 12: " << cwf.queueTime(std::vector<int>{5, 3, 4}, 1) << endl; // 12
    cout << "Should return 10: " << cwf.queueTime(std::vector<int>{10, 2, 3, 3}, 2) << endl; // 10
    cout << "Should return 12: " << cwf.queueTime(std::vector<int>{2, 3, 10}, 2) << endl; // 12
    cout << "should return 8: " << cwf.queueTime(std::vector<int>{3, 8, 3, 4, 5}, 100) << endl;

    return 0;
}
