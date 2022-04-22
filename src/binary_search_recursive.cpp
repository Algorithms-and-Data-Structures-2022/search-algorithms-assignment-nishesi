//
// Created by ramil on 14.04.2022.
//

#include "assignment/binary_search_recursive.hpp"

namespace assignment {

  std::optional<int> BinarySearchRecursive::Search(const std::vector<int>& arr, int search_elem) const {
    // запускаем рекурсивный метод с границами поиска от начала массива до конца
    return search(arr, search_elem, 0, static_cast<int>(arr.size() - 1));
  }

  std::optional<int> BinarySearchRecursive::search(const std::vector<int>& arr, int search_elem, int start, int stop) const {

    // Tips:
    // 1. Рассмотрите базовые случаи выхода из рекурсии:
    //    1) индекс левого элемента стал больше индекса правого элемента
    //    2) целевой элемент найден
    // 2. Вызовите рекурсивный метод, изменив границы поиска
    //    в зависимости от неравенства между элементом посередине и целевого элемента

    if (start > stop) {
      return std::nullopt;
    }
    int middle = static_cast<int>((static_cast<long>(start) + stop)/2);

    if (search_elem == arr[middle]) {
      return middle;
    } else if (search_elem < arr[middle]) {
      return search(arr, search_elem, start, --middle);
    } else {
      return search(arr, search_elem, ++middle, stop);
    }

  }

}  // namespace assignment
