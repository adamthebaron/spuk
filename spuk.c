#include <curl/curl.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h> //Oh getopt() you magnificent beast.
#include "spuk.h"


#define TMP /tmp

//Created by Adam Kessler. I don't care what you do with this. I give it the GNU GPL, so boom, there ya go...
//"Mirror Mirror on the wall, shovel chestnuts in my path"
//Remember that indexing a pointer is easy as type casting and addign/subtracting your wat to the speicif element. C know the size of the typedef.


/* This, ladies and gentlemen, is an instance of a tarball that spuk uses. Very basic, no? */
typedef struct SHREK { /* Long story and an inside joke */
	char const * const URL; // URL is a constant pointer pointing to a constant character. BOOM got it down.
	char const * const filename;
	char const * const location;
	float size;
	char const * const MD5SUM;
	char const * const SHA512SUM;
}shrek; //redundant, I know.

typedef struct opt_argopts { // "Kessler, you're killing me." "This is open source, either I'll change it or some 12 year old will"


}

static const char *optstring = ""
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
-b OR --build: Download and build, do not install.\n \
-c OR --configure: Download then edit configure script. Does not build or install.\n \
-d OR --download: Just download the tarball, does not build or install.\n \
-e OR --extract: Download and extract the tarball in the location specified by TMP_DIR in /etc/spuk/spuk.conf.\n \
-f OR --force-install: Install the package regardless of whether or not it is installed. \n \
-h OR --help: Display this. \n \
-i OR --install: Download, build, and install the tarball.\n \
-m OR --makefile: Download then edit the makefile. Does not build or install.\n \
-r OR --remove: Remove the package. Do not enter the URL, enter the package name. Grep /var/log/installed to find package.\n \
--skip-md5: Do not check to see if MD5SUMS match. \n \
--skip-sha: Do not check to see if SHA512SUMS match.\n");
}

int main(int argc, char *argv[]) {
printf("spuk")
int call_opt = 0;
call_opt = getopt(argc, argv, optstring)
while (call_opt != -1) {
//Now what?!
}


return 0;
}
