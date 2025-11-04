#include "Calculations.h"
#include <fstream>

int main() {
	Calculations test(3, 60, 10);
	std::cout << "hi" << std::endl;
	std::vector<PlanetInfo> initialValues = { {1, 0, 5, 2, 10}, {5, 5, -1, 4, 10}, {1, 10, 3, -1, 10} };
	
	std::ofstream fileFile;
	fileFile.open("fileFile.txt");

	test.setInitialValues(initialValues);

	auto solution = test.solve();
	
	for(int i = 0; i < solution[0].size(); i++) {
		fileFile << "(" << solution[0][i].first << ", " << solution[0][i].second << ")" << "   " << "(" << solution[1][i].first << ", " << solution[1][i].second << ")" << "   "<< "(" << solution[0][i].first << ", " << solution[0][i].second << ")" << std::endl;
	}
	fileFile.close();
}