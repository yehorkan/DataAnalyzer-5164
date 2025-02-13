```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class DataProcessor {
public:
    // Function to add data to the vector
    void addData(int newData) {
        data.push_back(newData);
    }

    // Function to get the sum of all data
    int getDataSum() {
        int sum = 0;

        for (int i = 0; i < data.size(); i++) {
            sum += data[i];
        }

        return sum;
    }

    // Function to get the average of all data
    double getAverage() {
        return (double)getDataSum() / data.size();
    }

    // Function to get the max data
    int getMaxData() {
        return *max_element(data.begin(), data.end());
    }

    // Function to get the min data
    int getMinData() {
        return *min_element(data.begin(), data.end());
    }

    // Function to display all data
    void displayData() {
        for (int i = 0; i < data.size(); i++) {
            std::cout << "Data[" << i << "]: " << data[i] << "\n";
        }
    }

private:
    std::vector<int> data;
};

int main() {
    DataProcessor dp;

    dp.addData(10);
    dp.addData(20);
    dp.addData(30);
    dp.addData(40);
    dp.addData(50);
    dp.addData(60);
    dp.addData(70);
    dp.addData(80);
    dp.addData(90);
    dp.addData(100);

    dp.displayData();

    std::cout << "Sum of all data: " << dp.getDataSum() << "\n";
    std::cout << "Average of all data: " << dp.getAverage() << "\n";
    std::cout << "Max data: " << dp.getMaxData() << "\n";
    std::cout << "Min data: " << dp.getMinData() << "\n";

    return 0;
}
```

Цей код описує простий клас `DataProcessor`, який працює з вектором даних типу `int`. Він має функції для додавання даних, отримання суми всіх даних, отримання середнього значення даних, отримання максимального та мінімального значень і відображення всіх даних.

У функції `main` ми створюємо об'єкт `DataProcessor`, додаємо декілька чисел до вектора даних, відображаємо ці дані, а потім виводимо суму, середнє значення, максимальне та мінімальне значення.