#include <bits/stdc++.h>
using namespace std;

class Subscription {
private:
  
  map<double, string> expenses = {
{26.0, "TOI"},
{20.5, "Hindu"},
{34.0, "ET"},
{10.5, "BM"},
{18.0, "HT"},
};
vector<double> prices = {26.0, 20.5, 34.0, 10.5, 18.0};


public:
  vector<pair<string, string>> papers;

  void computeExpanses(double budget) {
    for (int i = 0; i < prices.size(); i++) {
      for (int j = i + 1; j < prices.size(); j++) {
        if (prices[i] + prices[j] <= budget) {
          papers.push_back({expenses[prices[i]], expenses[prices[j]]});
        }
      }
    }
  }

  void printCombination() {
    for (auto p : papers) {
      cout << "{" << p.first << ", " << p.second << "}" << endl;
    }
  }
};

int main() {
  double budget;
  cin >> budget;

  Subscription my_paper_subs;
  my_paper_subs.computeExpanses(budget);
  my_paper_subs.printCombination();

  return 0;
}
