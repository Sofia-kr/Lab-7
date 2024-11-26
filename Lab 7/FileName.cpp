#include <iostream>
#include <set>
#include <map>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    multiset<int> numbers;
    map<int, int> frequency;
    const int n = 50; 
    const int range_min = 0;
    const int range_max = 20;

    
    // Заповнення multiset випадковими числами
    for (int i = 0; i < n; ++i) {
        int num = range_min + rand() % (range_max - range_min + 1);
        numbers.insert(num);
    }

    // Підрахунок кількості повторень кожного числа
    for (int num : numbers) {
        frequency[num]++;
    }

    // Виведення результатів
    cout << "Числа у множині (multiset): ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n\nЧастота повторень:\n";
    for (const auto& pair : frequency) {
        cout << "Число " << pair.first << ": " << pair.second << " разів\n";
    }

    return 0;
}
