#include <iostream>
using namespace std;

class Item {
public:
    int value, weight;
    double ratio;
};
int main() {
    int n, capacity;
    cin >> n;
    Item a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i].value;
    for (int i = 0; i < n; i++) {
        cin >> a[i].weight;
        a[i].ratio = (double)a[i].value / a[i].weight;
    }
    cin >> capacity;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].ratio < a[j].ratio)
                swap(a[i], a[j]);
        }
    }
    double ans = 0;
    for (int i = 0; i < n && capacity > 0; i++) {
        if (a[i].weight <= capacity) {
            capacity -= a[i].weight;
            ans += a[i].value;
        }
        else {
            ans += a[i].value *
                   (double)capacity / a[i].weight;
            break;
        }
    }
    cout << "Maximum Value = " << ans;
    return 0;
}