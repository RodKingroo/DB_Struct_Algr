#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

float stofl(string value) {

	float new_value = stof(value);
	return new_value;

}

float cValue(string cvalue, float convert_value) {
	convert_value = stofl(cvalue);
	return convert_value;
}

int main() {
	setlocale(LC_ALL, "rus");

	vector<vector<string>> all_data;
	vector<string> row;
	string line, word;
	char devider = ';';

	ifstream inp_file("Table/City.csv");
	ifstream table("Table/City.csv");

	int cword;
	int cline = 0;
	int cline2 = 0;
	float value = 0.0;
	float vicram = 0.0;
	float iv = 0.0;
	float a_value = 0.0;
	if (inp_file.is_open()) {
		while (getline(inp_file, line)) {
			cword = 0;
			row.clear();
			stringstream str_line(line);

			while (getline(str_line, word, devider)) {
				if (cword == 4) {
					if (cline != 0) {
						value = cValue(word, value);
						vicram += value;
						iv++;
					}
				}
				row.push_back(word);
				cword += 1;
			}
			all_data.push_back(row);
			cline += 1;	
		}
		a_value = vicram / iv;


		while (getline(table, line)) {
			cword = 0;
			row.clear();
			stringstream string_line(line);
			string city, object;
			//getline(string_line, city, devider);
			//getline(string_line, object, devider);
			while(getline(string_line, word, devider)){
				if (cword == 4) {
					if(cline2 != 0){
						value = cValue(word, value);
						if (value > a_value) {
							cout << line << endl;
						}
					}
				}
				row.push_back(word);
				cword += 1;
			}
			all_data.push_back(row);
			cline2 += 1;
			
			}
	

	}
	else {
		cout << "Can't open file" << endl;
	}
	return 0;
}