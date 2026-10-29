//Given the following 7 items and a knapsack of capacity 15, Write a cpp program to solve the Fractional Knapsack problem using the greedy approach.
<include <iostream>
#include <vector>
using namespace std;
struct Item {
    int weight;
    int value;
    double ratio; // value/weight
};
bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}
double fractionalKnapsack(int capacity, vector<Item> items) {
    sort(items.begin(), items.end(), compare);
    double totalValue = 0.0;
    int currentWeight = 0;
    for (const auto& item : items) {
        if (currentWeight + item.weight <= capacity) {
            currentWeight += item.weight;
            totalValue += item.value;
        } else {
            int remainingCapacity = capacity - currentWeight;
            totalValue += (double)(remainingCapacity * item.value) / item.weight;
            break;
        }
    }
    return totalValue;
}