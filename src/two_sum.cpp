#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& arr, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int startIndex = 0;
    int endIndex = arr.size() -1;
    int summ;

    while (startIndex < endIndex) {
      summ = arr[startIndex] + arr[endIndex];
      if (summ == sum) {
        return std::make_pair(startIndex, endIndex);
      }
      if (summ < sum) {
        startIndex++;
      } else {
        endIndex--;
      }
    }

    return std::nullopt;
  }

}  // namespace assignment