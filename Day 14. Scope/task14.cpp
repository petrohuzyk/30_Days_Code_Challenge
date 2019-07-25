#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector<int> elements) {
        this->elements = elements;
    }

    void computeDifference() {
        int buffer;
        for (int i=0; i < this->elements.size(); i++) {
            for (int j = i + 1; j < this->elements.size(); j++) {
                buffer = abs(elements[i] - elements[j]);
                if (maximumDifference < buffer) {
                    maximumDifference = buffer;
                }
            }
        }
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}