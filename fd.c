#include <stdio.h>
int main(int argc, char **argv){
FILE *fd_3, *fd_4;
// Open file descriptor 3
fd_3 = fdopen(3, "r");
// Open file descriptor 4
fd_4 = fdopen(4, "w");
// Read from file descriptor 3
char buf[32];
while ( fgets(buf, 32, fd_3) != NULL ){
// Write to file descriptor 4
fprintf(fd_4, "%s", buf);
}
// Close both file descriptors
fclose(fd_3);
fclose(fd_4);
}
