// running-sum-of-1d-array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> running_sum(vector<int>& nums) {
    vector<int> output;
    int sum = 0;
    for (int value : nums) {
        sum += value;
        output.push_back(sum);
    }
    return output;
}
int main()
{
    vector<int> numbers = { 1,2,3,4 };
    vector<int> sum = running_sum(numbers);
    for (int value : sum) {
        cout << value << endl;
    }
}
