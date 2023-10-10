# Create a library called "pid_controller" (in Linux, this library is created
# with the name of either libpid_controller.a or pid_controller.so).
add_library(pid_controller

  # list of cpp source files:
  src.cpp
)

# Indicate what directories should be added to the include file search path when using this library.
target_include_directories(pid_controller PUBLIC

  # list of directories:
  .
)
