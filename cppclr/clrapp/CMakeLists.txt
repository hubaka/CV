cmake_minimum_required(VERSION 2.8)

include(cmakebuild)
set_project_id("_PROJECT_NAME_")

add_folder_dependencies(
	"filter"
)

#
# List of public module header files, relative to the module source folder
#
add_public_header_files(
	"TweetBankCLR.h"
)
#
# List of source files, relative to the module source folder
#
add_source_files(
	"TweetBankCLR.cpp"
)

#
# Build and install library
#
install_shared_module_lib()