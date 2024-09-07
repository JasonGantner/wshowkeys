#ifndef _DEVMGR_H
#define _DEVMGR_H
#include <fcntl.h>
#include <stdbool.h>

int devmgr_start(bool allow_root, int *fd, pid_t *pid, const char *devpath);
int devmgr_open(int sockfd, const char *path);
void devmgr_finish(int sock, pid_t pid);

#endif
