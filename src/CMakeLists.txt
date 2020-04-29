add_executable(test test.cpp) 

target_link_libraries(test simdjson) 
target_link_libraries(test simdjsondep) 

