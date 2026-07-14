#include <iostream>
#include <vector>

int main() {
    // Create a dynamic vector of integers
    std::vector<int> scores;

    // Push elements into the vector automatically
    scores.push_back(85);
    scores.push_back(92);
    scores.push_back(78);

    // Print using a Modern C++ range-based loop!
    std::cout << "Student Scores: ";
    for (int score : scores) {
        std::cout << score << " ";
    }
    std::cout << "\nTotal elements: " << scores.size() << std::endl;

    return 0;
}