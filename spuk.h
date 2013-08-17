
// Local preprocessor directives
#define TMP /tmp

// Remote preprocessor drectives
#define DEFAULT_FTP 20
#define DEFAULT_HTTP 80
#define DEFAULT_HTTPS 443
#define DEFAULT_SSH 22
#define DEFAULT_SFTP 22
#define DEFAULT_FTPS 22
#define DEFAULT_TELNET 23
//#define DEFAULT_DNS 53


// Prototypes

/* Write data */
size_t write_data(char *ptr, size_t size, size_t nmemb, void *userdata);

/* Get socket for specific location, protocl, and port */
int getsocket(int sockfd, package);

/* Package structure */
typedef struct package{
	/* URL to EXACT location where tarball is. Accept protocols in README */
	char const * const URL;
	/* Y-you know what... I don't know why I declared this. */
	char const * const filename;
	/* Location of tarball on server */
	char const * const location;
	/* Size of tarball in bytes */
	float size;
	/* Checksums to be safe */
	char const * const MD5SUM;
	char const * const SHA512SUM;
	/* Port to use, some defaults are defined at the top of "spuk.h" */
	int const port;

}shrek; //K Justin.