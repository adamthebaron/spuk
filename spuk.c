//OS preprocessor directives
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <ctype.h>
#include <getopt.h>

//Program preprocessor directives
#include "spuk.h"
#define BUFFER 256 //To make it seem important.

//"Mirror Mirror on the wall, shovel chestnuts in my path"

static const struct option options[] = {
	{"append", no_argument, 0, 'a'}
	{"build", no_argument, 0, 'b'}
	{"configure", no_argument, 0, 'c'}
	{"download", required_argument, 0, 'd'}
	{"extract", required_argument, 0, 'e'}
	{"force-install", required_argument, 0, 'f'}
	{"help", no_argument, 0, 'h'}
	{"install", required_argument, 0, 'i'}
	{"makefile", no_argument, 0, 'm'}
	{"remove", required_argument, 0, 'r'}
	{"skip-md5", no_argument, 0, 'M'}
	{"skip-sha", no_argument, 0, 'S'}
	{0,			 0,			  0,  0} //sentinel
}

static const char *optstring = "a:b:c:d:e:f:i:m:r:hSM";


void version(void) {
	printf("spuk, the Gryphix package manager. It's pretty spooky!\n");
	printf("Version: This is from github so I will call this version git.\n");
}

void functionality(void) {
	printf("SYNOPSIS: spuk [OPTION] [URL]\n");
	printf(" Options:\n \
	-a OR --append: 	   Append string to \"./configure.\"\n \
	-b OR --build: 		   Download and build, do not install.\n \
	-c OR --configure:     	   Download then edit configure script. Does not build or install.\n \
	-d OR --download:          Just download the tarball, does not build or install.\n \
	-e OR --extract: 	   Download and extract the tarball in the location specified by TMP_DIR in /etc/spuk/spuk.conf.\n \
	-f OR --force-install: 	   Install the package regardless of whether or not it is installed. \n \
	-h OR --help:              Display this. \n \
	-i OR --install:           Download, build, and install the tarball.\n \
	-m OR --makefile: 	   Download then edit the makefile. Does not build or install.\n \
	-r OR --remove: 	   Remove the package. Do not enter the URL, enter the package name. grep /var/log/installed to find package.\n \
	-M OR --skip-md5: 	   Do not check to see if MD5SUMS match. \n \
	-S OR --skip-sha:          Do not check to see if SHA512SUMS match.\n");
}

int getsocket (package *package, char const * const url) {
	*package->URL = url;
	char[BUFFER] url_parse_var;
	for (int i 0; i >= BUFFER; i++)
		url_parse_var[i] = 0; //Init that, yo.
	while (*url != ':') {
		url_parse_var[i] = url[i];
		i++;
}

}

int main(int argc, char *argv[]) {
	printf("spuk\n"); //Dunno.
	int call_opt = NULL;
	while (call_opt = getopt_long(argc, argv, optstring, options,) != -1 ) {
		switch (call_opt) {
			case 'a' :
			
			case 'b' :
			
			case 'c' :
			
			case 'd' :
			
			case 'e' :
			
			case 'f' :
			
			case 'h' :
			
			case 'i' :
				package package;
				while (getsocket(package, optopt) != 0)
			break;
			
			case 'm' :
			
			case 'r' :
			
			case 'M' :
			
			case 'S' :
		}

	}

	return 0;
}
