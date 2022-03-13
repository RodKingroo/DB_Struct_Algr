#include <iostream>
#include <fstream>
#include <chrono>
#include <list>
#include <iterator>
#include <math.h>

using namespace std;
using namespace chrono;

int main()
{
    high_resolution_clock::time_point start_time, end_time;

    ifstream in; 
    in.open("numbers.txt");

    list<int> numlist;
    list<int>::iterator curelem;

    int num;

    start_time = high_resolution_clock::now();

    do
    {
        in >> num;
        numlist.push_back(num);
    } while (!in.eof());

    curelem = numlist.begin();
    int a = *curelem;
    curelem++;
    int b = *curelem;
    curelem++;
    int ab, k = 0;
    for (curelem; curelem != numlist.end(); curelem++)
    {
        ab = *curelem;
        if (((a + b) % 3 == 0) && ((a + b) % 6 != 0) && ((a * b) % 10 == 8))
            k++;
        a = b;
        b = ab;
    }

    end_time = high_resolution_clock::now();

    cout << k << endl;
    cout << duration_cast<milliseconds>(end_time - start_time).count() << " ms";
    in.close();
    return 0;
}