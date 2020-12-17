#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

class ChompGame {
private:
	int width, length;
	vector<vector<bool>>chomp;
public:
	ChompGame (const int& w, const int& l) noexcept {
		width = w;
		length = l;
		chomp = vector<vector<bool>> (width, vector<bool> (length, true));
		chomp.at (0).at (0) = false;
	}
	
};

int main () {
}