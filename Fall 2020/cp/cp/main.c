
#include <stdio.h>    //fprintf
#include <stdlib.h>    //exit
#include <string.h>    //strcpy
#include <sys/stat.h>    //stat
#include <fcntl.h>    //O_RDONLY, O_WRONLY, O_CREAT, O_TRUNC
#include <unistd.h>    //close


int is_file(const char *path);
int is_dir(const char *path);
int copy_file(int src, int dst);

#define BUFSIZE 1

int main(int argc, char ** argv) {
    
    //argc: the number of arguments
    //argv: the path of the arguments

    if(argc != 3) {
        fprintf(stderr, "usage: cp src dst\n");
        exit(1);
    }
    
    int fd_src, fd_dst;
    int byteswritten = 0;
    char answer;
    char dst[255];

    strcpy(dst, argv[2]);   //get the dst
    
    //check whether the argv[1] is a file or it exists and tell us if there is an error.
    if(! is_file(argv[1])) {
        fprintf(stderr, "%s doesn't exist or is not a file\n", argv[1]);
        exit(1);
    }
    
    //??
    if(is_dir(dst)) {
        int lenarg = strlen(argv[2]) - 1;
        //how is argv a two dimensional array?
        if(argv[2][lenarg] == '/') {
            argv[2][lenarg] = 0;
        }
        sprintf(dst, "%s/%s", argv[2], argv[1]);
    }

    
    if(is_file(dst)) {
        printf("%s exists, do you want to overwrite (y/n)? ", dst);
        scanf("%c", &answer);
        if(answer != 'y' && answer != 'Y') {
            exit(1);
        }
    }
    
    //open src
    //return -1 if there is an error, otherwise open the file with the following options
    if((fd_src = open(argv[1], O_RDONLY)) == -1) {
        perror("Source file open error");
        exit(1);
    }
    
    //open dst
    //return -1 if there is an error, otherwise open the file with the following options
    // 0644: the owner can read and write the file but others only can read the file
    if((fd_dst = open(dst, O_WRONLY | O_CREAT | O_TRUNC, 0644)) == -1) {
        perror("Destination file open error");
        exit(1);
    }

    byteswritten = copy_file(fd_src,fd_dst);

    //close src
    if(close(fd_src) == -1) {
        perror("Source file close error");
    }

    exit(0);
}

int is_file(const char *path) {
    int temp = 0;
    struct stat statbuf;
    if((stat(path, &statbuf)) != 1) {
        temp = S_ISREG(statbuf.st_mode);
    }
    return temp;
}

int is_dir(const char *path) {
    int temp =0;
    struct stat statbuf;
    if((stat(path, &statbuf)) != -1) {  // -1: failed or there is an error
        temp = S_ISDIR(statbuf.st_mode);
    }
    return temp;
}

int copy_file(int src, int dst) {
    int byteswritten = 0;
    int itemp = 0;
    char buf[BUFSIZE];

    while((itemp = read(src, &buf, BUFSIZE)) > 0) {
        byteswritten += write(dst, &buf, itemp);
    }
    return byteswritten;
}
