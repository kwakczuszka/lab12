#include <iostream>
#include <random>
#include <vector>


namespace fnc {
	struct SortInfo {
		int swaps;
		int comparisons;
	};

	class cTablica {
		std::vector<int> vec;
		void ArrInput();
	};

	class cSortTablicy : cTablica {
	public:
		SortInfo ShakerSort(cTablica* arr);
		SortInfo QuickSort(cTablica* arr, std::string divalg);

    };
}






