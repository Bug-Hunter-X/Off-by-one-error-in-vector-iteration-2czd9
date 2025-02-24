std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i <= vec.size(); ++i) {
  std::cout << vec[i] << std::endl;
}

This code will cause a runtime error (segmentation fault or access violation) because it tries to access vec[vec.size()], which is one element past the end of the vector.