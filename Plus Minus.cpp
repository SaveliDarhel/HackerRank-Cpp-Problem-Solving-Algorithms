#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

vector<string> split_string(string);

// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {

int i;
double sumP = 0, sumM = 0, sumO = 0;

for (i=0; i < arr.size(); i++){
    
    if (arr[i] > 0)
        sumP++;
    else if (arr[i] == 0)
        sumO++;
    else
        sumM++;

}
