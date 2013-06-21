#include <curl/curl.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

#define TMP /tmp

//Created by Adam Kessler. I don't care what you do with this. I give it the GNU GPL, so boom, there ya go..
//"Mirror Mirror on the wall, shovel chestnuts in my path"

struct TARBALL {
	char *URL;
	char *filename;
	FILE *file_descriptor;
};

typedef struct TARBALL tarball; //redundant, I know.

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

int main(int argc, char *argv[]) {
	if (argc == 1)
		printf("No URL defined. Type spuk -h OR spuk --help for more info\n");

return 0;
}
