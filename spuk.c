#include <curl/curl.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h> 
#include <getopt.h>

#include "spuk.h"


#define TMP /tmp

//"Mirror Mirror on the wall, shovel chestnuts in my path"

typedef struct package{
	char const * const URL; 
	char const * const filename;
	char const * const location;
	float size;
	char const * const MD5SUM;
	char const * const SHA512SUM;
}shrek; 

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
{"skip-md5", no_argument, 0, 0}
{"skip-sha", no_argument, 0, 0}
{0,0,0,0} //sentinel
}

static const char *optstring = "a:b:c:d:e:f:i:m:r:hSM"; /*Optstring is a pointer to a character that is constant and static
							  Ah, geez, I hope I am doing this right.*/
void curl_easy_instance(CURL *curl, CURLcode *res, shrek *package) {
curl = curl_easy_init();
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, (package->URL));
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
	} 
}

void version(void) {
printf("spuk, the Gryphix package manager. It's pretty spooky!\n");
printf("Version: Dude, I don't know, I'm too young.\n");
}

void functionality(void) {
printf("SYNOPSIS: spuk [OPTION] [URL]\n");
printf(" Options:\n \
-a OR --append: 	   Append string to configure script.\n \
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

int main(int argc, char *argv[]) {
printf("spuk"); //Dunno.
int call_opt = 0;
call_opt = getopt_long(argc, argv, optstring, options, )

return 0;
}
