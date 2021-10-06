#include "simdjson.h"
#include <iostream>
int main(int argc, char* argv[]) {
  if(argc < 2) {
      std::cout << "provide the filename of a JSON file" << std::endl;
      return EXIT_SUCCESS;
  }
  try {
    simdjson::dom::parser parser;
    simdjson::dom::element doc = parser.load(argv[1]);
    std::cout << "found valid JSON" << std::endl;
    return EXIT_SUCCESS;
  } catch (simdjson::simdjson_error &e) {
    std::cout << "Exception! Bad JSON?" << std::endl;
    std::cout << e.what() << std::endl;
    return EXIT_FAILURE;
  }
}
