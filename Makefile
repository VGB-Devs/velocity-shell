compile:
	g++ main.cpp shell/commands/Command.cpp shell/commands/echo/Echo.cpp shell/commands/exec/Exec.cpp shell/Input.cpp shell/Shell.cpp util/colors/Colors.cpp util/prefix/Prefix.cpp -o velocity-shell
