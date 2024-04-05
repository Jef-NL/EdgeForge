# Setup directiory link
set(dir ${CMAKE_CURRENT_SOURCE_DIR})

# List all source files
list(
  APPEND src_files
  ${dir}/Test.cpp
)

# Update source files in parent scope
set(src_files ${src_files} PARENT_SCOPE)