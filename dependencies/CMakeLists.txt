function(initialize_submodule DIRECTORY)
  if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${DIRECTORY}/.git)
    find_package(Git QUIET REQUIRED)
    message(STATUS "${CMAKE_CURRENT_SOURCE_DIR}/${DIRECTORY}/.git does not exist. Initializing ${DIRECTORY} submodule ...")
    execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init ${DIRECTORY}
                    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                    RESULT_VARIABLE GIT_EXIT_CODE)
    if(NOT GIT_EXIT_CODE EQUAL "0")
      message(FATAL_ERROR "${GIT_EXECUTABLE} submodule update --init dependencies/${DIRECTORY} failed with exit code ${GIT_EXIT_CODE}, please checkout submodules")
    endif()
  endif()
endfunction(initialize_submodule)
  initialize_submodule(simdjson)
  add_library(simdjsondep INTERFACE)
  target_include_directories(simdjsondep INTERFACE simdjson/include)

set(SIMDJSON_JUST_LIBRARY ON CACHE STRING "Do not give me all the dependencies." FORCE)
add_subdirectory(simdjson EXCLUDE_FROM_ALL)
