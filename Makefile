compile:
	g++ -std=c++2a \
	main.cpp \
	shell/commands/Command.cpp \
	shell/commands/echo/Echo.cpp \
	shell/commands/exec/Exec.cpp \
	shell/commands/pwd/Pwd.cpp \
	shell/commands/clear/Clear.cpp \
	shell/commands/read/Read.cpp \
	shell/commands/write/Write.cpp \
	shell/commands/file/File.cpp \
	shell/commands/delete/Delete.cpp \
	shell/commands/reset/Reset.cc \
	shell/Input.cpp \
	shell/Shell.cpp \
	util/colors/Colors.cpp \
	util/prefix/Prefix.cpp \
	util/output/Output.cpp \
	util/string/String.cc \
	-o vsh
