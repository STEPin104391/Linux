#include<unistd.h>
#include<fcntl.h>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int fd,fd1,nbytes;
	fd=open("alpha.txt",O_RDONLY);
	fd1=open("beta.txt",O_WRONLY|O_CREAT, 0666);
	if(fd<0 || fd1<0)
	{
		perror("open");
		exit(1);
	}
	int maxlen=128;
	char buf[maxlen];
	nbytes=read(fd,buf,maxlen);
	if(nbytes<0)
	{
		perror("read");
		exit(2);
	}
	//buf[nbytes]='\0';
	//printf("nbytes=%d,buf=%s\n",nbytes,buf);
	write(fd1,buf,nbytes);
	close(fd);
	return 0;	//exit(0);
}
		





