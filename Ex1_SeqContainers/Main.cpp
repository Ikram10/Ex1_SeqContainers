#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    cout << "Please enter a series of numbers" << endl;

    //Creates a Vector
    vector<double> v;
    //Temporary variable to store read in values
    double x;

    while (cin >> x) {
        //appends x to the Vector
        v.push_back(x);
    }
    auto n = v.size();
    cout << n << " numbers stored" << '\n';

    if (n > 0) {
        sort(v.begin(), v.end());
        // finds the middle value
        auto middle = n / 2;
        double median;
        //if
        if (n % 2 == 1)
            median = v[middle];
        else
            median = (v[middle - 1] + v[middle]) / 2;
        cout << "median = " << median << endl;
    }

    auto sum = accumulate(v.begin(), v.end(), 0);
    auto average = (sum / v.size());

    cout << "Average = " << average << endl;

    return 0;
}