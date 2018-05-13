#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int started = 1;
	// Це версія Python.
	int version = atoi(argv[1]);
	char *pip = "pip.exe";
	if (version == 2) {
		pip = "C:\\Python27amd64\\Scripts\\pip2.7.exe";
	} else if (version > 3 || version < 2) {
		started = 0;
	}
	if (started) {
		char *args = "";
		for (int i = 2; i < argc; i++) {
			args = strcat(args, argv[i]);
		}
		pip = strcat(strcat(pip, " "), args);
		system(pip);
	}
	return !started;
}