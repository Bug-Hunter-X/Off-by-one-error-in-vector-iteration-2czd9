std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i < vec.size(); ++i) {
  std::cout << vec[i] << std::endl;
}

Alternatively, using iterators:

for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
  std::cout << *it << std::endl;
}

Or range-based for loop (C++11 and later):

for (int x : vec) {
  std::cout << x << std::endl;
}
These corrected versions iterate up to, but not including, the end of the vector, avoiding the out-of-bounds access.