import os

def editCSSettings():
        with open("../../1_builds/appmain/appmain_d.csproj", "r") as in_file:
                buf = in_file.readlines()

        with open("../../1_builds/appmain/appmain_d.csproj", "w") as out_file:
                for line in buf:
                        if '</CompileAs>' in line:
                                line = line + "    <EnableUnmanagedDebugging>true</EnableUnmanagedDebugging>\n"
                                out_file.write(line)
                        else:
                                out_file.write(line)
	
editCSSettings()
