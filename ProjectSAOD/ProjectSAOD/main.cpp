#include <iostream>
#include <fstream>
#include <chrono>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;
using namespace chrono;

int find_ind(int l, int h, int x, vector<int>numset1) {
    while (l <= h) {
        int k = (l + h) / 2;
        if (numset1[k] == x) return k;
        
        if (numset1[k] > x) h = k - 1;
        else l = k + 1; 
    }
    return -1;
}

int main(){
    
    int num = 0;
    int average = 0;
    int ave_res = 0;
    int count = 0;

    vector<int> numset1;
    vector<int> numset2;

    high_resolution_clock::time_point start_time, end_time;
    start_time = high_resolution_clock::now(); // начальное время

    ifstream in("numbers.txt");

    do {
        
        in >> num;
        numset1.push_back(num);
        if (num %2 == 0) {
            numset2.push_back(num);
        }


    } while (!in.eof());

    sort(numset1.begin(), numset1.end());
    

    int k = 0;
    for (int i = 1; i < numset2.size() - 1; i++) {
        for (int j = i + 1; j < numset2.size(); j++) {

            average = (numset2[i] + numset2[j]) / 2;
            //if (find(numset1.begin(), numset1.end(), average) != numset1.end()) {
            if (find_ind(0, numset1.size()-1, average, numset1) >= 0 ) {
                k++;
                if (average > ave_res) ave_res = average;
            }
        }
    }

    end_time = high_resolution_clock::now(); // конечное время
    cout << duration_cast<milliseconds>(end_time - start_time).count() / 1000. << " s" << endl << // искомое время
                k << "\t" << ave_res << endl;
    in.close();
    return 0;
}