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

    
    // ���������� multiset ����������� �������
    for (int i = 0; i < n; ++i) {
        int num = range_min + rand() % (range_max - range_min + 1);
        numbers.insert(num);
    }

    // ϳ�������� ������� ��������� ������� �����
    for (int num : numbers) {
        frequency[num]++;
    }

    // ��������� ����������
    cout << "����� � ������ (multiset): ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n\n������� ���������:\n";
    for (const auto& pair : frequency) {
        cout << "����� " << pair.first << ": " << pair.second << " ����\n";
    }

    return 0;
}
