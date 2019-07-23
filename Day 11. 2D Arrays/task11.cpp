/*
Task:
    Calculate the hourglass sum for every hourglass in , then print the maximum hourglass sum.
 */
#include <bits/stdc++.h>
#include <vector>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int maxSumHourClass = NULL, CurrentSum = 0;
    for (int i = 0; i <= arr[i].size() - 3; i++) {
        for (int j = 0; j <= arr[i].size() - 3; j++) {
            CurrentSum += arr[i][j] + arr[i][j+1] + arr[i][j+2];
            CurrentSum += arr[i+1][j+1];
            CurrentSum += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if (maxSumHourClass == NULL) {
                maxSumHourClass = CurrentSum;
            } else if (CurrentSum > maxSumHourClass) {
                maxSumHourClass = CurrentSum;
            }
            CurrentSum = 0;
        }
    }
    if (maxSumHourClass == -2) {
        maxSumHourClass = 0;
    }
    cout << maxSumHourClass << endl;
    return 0;
}
