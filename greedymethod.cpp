#include <iostream>
using namespace std;
struct Item {
    int value;
    int weight;
};
int knapsack(Item items[], int n, int capacity) {
    int totalValue = 0;
    for (int i = 0; i < n; i++) {
        if (capacity == 0) break;
        if (items[i].weight <= capacity) {
            totalValue += items[i].value;
            capacity -= items[i].weight;
        } else {
            totalValue += items[i].value * ((double)capacity / items[i].weight);
            capacity = 0;
        }
    }
    return totalValue;
};
int main(){
    Item items[] = {{60, 10}, {100, 20}, {120, 30}};
    int n = sizeof(items) / sizeof(items[0]);
    int capacity = 50;
    int maxValue = knapsack(items, n, capacity);
    cout << "Maximum value in Knapsack = " << maxValue << endl;
};
