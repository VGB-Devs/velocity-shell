compile:
	g++ main.cpp shell/Shell.cpp shell/commands/Command.cpp shell/commands/exec/Exec.cpp util/colors/Colors.cpp util/prefix/Prefix.cpp util/handler/Handler.cpp -o velocity-shell
