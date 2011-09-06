#ifndef FILE_H
#define FILE_H

#include <sys/stat.h>
#include <sys/types.h>
#include <limits.h>

#ifndef _POSIX_PATH_MAX
# define _POSIX_PATH_MAX 256
#endif

/* Structure to be stored in a tarball for each file */
typedef struct
{
	struct stat st;
	char path[_POSIX_PATH_MAX+1];
}
file_struct;

#endif
