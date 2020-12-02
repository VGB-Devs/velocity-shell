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
	shell/commands/prompt/Prompt.cpp \
	shell/commands/exit/Exit.cpp \
	shell/commands/ping/Ping.cpp \
	shell/commands/reset/Reset.cpp \
	shell/commands/usage/Usage.cpp \
	shell/Input.cpp \
	shell/Shell.cpp \
	util/colors/Colors.cpp \
	util/prefix/Prefix.cpp \
	util/output/Output.cpp \
	util/string/String.cpp \
	-o vsh
