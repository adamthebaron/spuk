#include <curl/curl.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

//Created by Adam Kessler. I don't care what you do with this. I give it the GNU GPL, so boom, there ya go...
//"Mirror Mirror on the wall, shovel chestnuts in my path"

typedef struct TARBALL {
	char *URL;
	char *filename;
	FILE *file_descriptor;
}tarball; //redundant, I know.

void curl_easy_instance(CURL *curl, CURLcode *res, tarball *package) {
curl = curl_easy_init();
	if (curl) {
		package->file_descriptor = fopen()
		curl_easy_setopt(curl, CURLOPT_URL, (package->URL));
		curl_easy_setopt
	} //Check to make sure
}

void version(void) {
printf("spuk, the Gryphix package manager. It's pretty spooky!\n");
printf("Version: --\n");
}

void functionality(void) {
printf("SYNOPSIS: spuk [FIRST_OPTIONS] [SECOND_OPTIONS] [URL]\n");
printf(" First options:\n \
-b OR --build: Download and build, do not install.\n \
-c OR --configure: Download then edit configure script. Does not build or install.\n \
-d OR --download: Just download the tarball, does not build or install.\n \
-e OR --extract: Download and extract the tarball in the location specified by TMP_DIR in /etc/spuk/spuk.conf.\n \
-h OR --help: Display this. \n \
-i OR --install: Download, build, and install the tarball.\n \
-m OR --makefile: Download then edit the makefile. Does not build or install.\n \
-r OR --remove: Remove the package. Do not enter the URL, enter the package name. Grep /etc/spuk/installed.txt to find package.\n ");
}

int main(int argc, char *argv[]) {
	if (argc == 1)
		printf("No URL defined. Type spuk -h OR spuk --help for more info\n");

return 0;
}
