#include <iostream>
#include <vector>
	int main() {
		std::cout << "git test\n"; 
		std::vector<int> vec = {1, 2, 3};
		for (auto it : vec)
			std::cout << it << "\n";
		return 0;
	}
