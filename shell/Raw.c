#include <signal.h>

sig_atomic_t sigflag = 0;

void catch_int(int sig_num) {
    sigflag = 1;
}

void disableCntrlC(int argc, char** argv) {
    signal(SIGINT, catch_int);
}