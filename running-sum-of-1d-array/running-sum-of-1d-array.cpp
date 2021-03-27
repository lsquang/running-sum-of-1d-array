// running-sum-of-1d-array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
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
    
}
