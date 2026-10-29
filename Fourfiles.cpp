#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n = 4;
    int files[] = {8, 2, 4, 6};
    // Step 1: Sort files in ascending order
    sort(files, files + n);
    int totalTime = 0;
    int retrievalTime = 0;
    // Step 2: Calculate retrieval time
    cout << "File Length\tRetrieval Time\n";
    for (int i = 0; i < n; i++) {
        retrievalTime += files[i];
        totalTime += retrievalTime;
        cout << files[i] << "\t\t"
             << retrievalTime << endl;
    }
    // Step 3: Calculate average retrieval time
    double averageTime = (double)totalTime / n;
    cout << "\nTotal Retrieval Time: "
         << totalTime << endl;
    cout << "Average Retrieval Time: "
         << averageTime << endl;
    return 0;
}