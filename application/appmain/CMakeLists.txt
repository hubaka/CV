cmake_minimum_required(VERSION 2.8)

include(cmakebuild)
set_project_id("_PROJECT_NAME_")

#
# List with modules we depend on
#
add_folder_dependencies(
	"clrapp"
)

add_lib_dependencies(
	# "sqlite"
)

#
# List of public module header files, relative to the module source folder
#
add_public_header_files(
	# "appmain.h"
)

#
#
#
add_resource_files(
	"App.config"
	"application.resx"
	"Properties/Resources.resx"
	"Properties/Settings.settings"
)

#
#
#
add_designer_cs_properties(
	"application.cs"
	"application.Designer.cs"
	"application.resx"
	"Properties/Resources.resx"
)
#
# List of source files, relative to the module source folder
#
add_source_files(
	 "application.cs"
	 "application.Designer.cs"
	 "Program.cs"
	 "Properties/AssemblyInfo.cs"
	 "Properties/Resources.Designer.cs"
	 "Properties/Settings.Designer.cs"
)


# add_libs_to_exe(
	# ${DEP_LIBS}
# )

#
# Build and install library
#
install_module_exe()