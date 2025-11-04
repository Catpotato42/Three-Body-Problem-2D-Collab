#include "Calculations.h"

int main() {
	Calculations test(3, 60, 10);
	std::vector<PlanetInfo> initialValues = { {0, 0, 5, 2, 10}, {5, 5, -1, 4, 10}, {1, 10, 3, -1, 10} };
	test.setInitialValues(initialValues);
	auto solution = test.solve();
	for (auto c : solution) {
		for (auto d : c) {
			std::cout << d.first << ", " << d.second << std::endl;
		}
	}
}