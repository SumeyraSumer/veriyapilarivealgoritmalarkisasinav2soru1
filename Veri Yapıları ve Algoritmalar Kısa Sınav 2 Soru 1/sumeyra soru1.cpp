// Veri Yapýlarý ve Algoritmalar KS - 2 Soru 1
// Sümeyra Sümer
// 5210505067


#include <iostream>
#include <vector>
#include <algorithm>

// Linear search fonksiyonu
bool linearSearch(const std::vector<int>& array, int target) {
    for (size_t i = 0; i < array.size(); ++i) {
        if (array[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
	
	std::cout << "Veri Yapilari ve Algoritmalar KS - 2 Soru 1" << std::endl;
	std::cout << "Sumeyra Sumer" << std::endl;
	std::cout << "5210505067" << std::endl;
	std::cout << "-----------------------------------------------------------------------" << std::endl;
	
    int n, target;

    // Dizi boyutunu kullanýcýdan alma
    std::cout << "Dizinin boyutunu giriniz: ";
    std::cin >> n;

    std::vector<int> array(n);

    // Dizi elemanlarýný kullanýcýdan alma
    std::cout << "Dizinin elemanlarini giriniz:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    // Aranacak elemaný kullanýcýdan alma
    std::cout << "Aranacak elemani giriniz: ";
    std::cin >> target;

    // Linear search ile aranacak elemanýn kontrolü
    bool found = linearSearch(array, target);

    if (found) {
        std::cout << target << " elemani dizide bulundu.\n";
    } else {
        std::cout << target << " elemani dizide bulunamadi.\n";
    }

    // Gerekirse sýralama algoritmasý kullanma
    std::sort(array.begin(), array.end());
    
    return 0;
}

