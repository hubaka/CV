cmake_minimum_required(VERSION 2.8)

include(cmakebuild)
set_project_id("_PROJECT_NAME_")

add_source_layers(
	"s" "common"
	"l" "algo"
	"l" "cppclr"
	# "s" "windows"
	# "s" "database"
	# "s" "grid"
	# "s" "errorhandle"
	# "s" "bar"
	# "s" "encryption"
)

add_subfolder_dependency()