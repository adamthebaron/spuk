#include <curl/curl.h>
#include <stdio.h>
#include <stdlib.h>

#define TMP /tmp

//Created by Adam Kessler. I don't care what you do with this. I give it the GNU GPL, so boom, there ya go..
//"Mirror Mirror on the wall, shovel chestnuts in my path"

struct TARBALL {
	char *URL;
	char *filename;
	FILE *file
	

}

int CURL_EASY_INSTANCE (CURL *curl, CURLcode *res, tarball *package) {
curl = curl_easy_init();

}
