compile:
	g++ -std=c++2a \
	main.cpp \
	shell/commands/Command.cpp \
	shell/commands/echo/Echo.cpp \
	shell/commands/exec/Exec.cpp \
	shell/commands/pwd/Pwd.cpp \
	shell/commands/clear/Clear.cpp \
	shell/commands/read/Read.cpp \
	shell/Input.cpp \
	shell/Shell.cpp \
	util/colors/Colors.cpp \
	util/prefix/Prefix.cpp \
	util/output/Output.cpp \
	-o velocity-shell
