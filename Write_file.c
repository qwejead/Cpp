#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
   int fd=0;
   int ret=0;
   char arr[]="Marvellous Infosystem";

   fd = open("Marvellous.txt",O_RDWR);

   if(fd==-1)
   {
    printf("Unabel to open file");
   }
   else
   {
    printf("Files gets open with fd:%d\n",fd);

    ret=write(fd,arr,12);

    printf("%d bytes get returend into the file",ret);
   }

   close(fd);

    return 0;
}