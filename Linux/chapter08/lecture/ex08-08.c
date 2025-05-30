﻿#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * getsid, setsid
 *
 * getsid는 프로세스의 세션 식별 번호를 구하고, setsid는 새로운 세션을 생성한다.
 */
int main(int argc, char *argv[]) {
    pid_t pid;
    int interval;

    if (argc != 3)
        exit(1);

    pid = atoi(argv[1]);
    interval = atoi(argv[2]);

    printf("shell process...\n");
    printf("process id: %d, group id: %d, session id: %d\n", pid, getpgid(pid), getsid(pid));
    printf("current process... not daemon...\n");
    printf("process id: %d, group id: %d, session id: %d\n", getpid(), getpgrp(), getsid(0));

    sleep(interval);

    return EXIT_SUCCESS;
}
