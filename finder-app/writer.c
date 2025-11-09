#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>


int main(int argc, char* argv[]) {
    openlog("writer", LOG_PID | LOG_CONS, LOG_USER);
    if (argc < 3) {
        syslog(LOG_ERR, "Not all arguments were provided");
        closelog();
        return 1;
    }

    const char *writefile = argv[1];
    const char *writestr = argv[2];

    FILE *file = fopen(writefile, "w");
    if (file == NULL) {
        syslog(LOG_ERR,"Failed to open file %s for writing\n", writefile);
        closelog();
        return 1;
    }

    fprintf(file, "%s", writestr);
    fclose(file);
    closelog();
    return 0;
}