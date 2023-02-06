#include<bits/stdc++.h>
using namespace std;

map<double, string> expenses = {
{26.0, "TOI"},
{20.5, "Hindu"},
{34.0, "ET"},
{10.5, "BM"},
{18.0, "HT"},
};

vector<double> prices = {26.0, 20.5, 34.0, 10.5, 18.0};

void weekly_Expenses(double budget) {
    
vector<pair<string, string>> papers;

for (int i = 0; i < prices.size(); i++) {
for (int j = i + 1; j < prices.size(); j++) {
if (prices[i] + prices[j] <= budget) {
papers.push_back({expenses[prices[i]], expenses[prices[j]]});
}
}
}

for (const auto& p : papers) {
cout << "{" << p.first << ", " << p.second << "}" << std::endl;
}
}

int main() {
double budget;
cin >> budget;
weekly_Expenses(budget);

return 0;
}
