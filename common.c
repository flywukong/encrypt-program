#include "crypt_demo.h"


/* get key fromm user's input */
char* get_key_from_password1(){

    int i,j,count,n,wds;
    char buf1[40];
    char *str;
    char *buf2;
    FILE *fp1,*fp2;
    fp1 = fopen("password.txt", "r");

    fgets(buf1,35,fp1);
    printf("buf1:%s",buf1);


    buf2=(char *)malloc(strlen(buf1));
    str=(char *)malloc(10);

    
    for(i=0;i<strlen(buf1);i++){
       
        if(isdigit(buf1[i])){
            
            n = i+1; 
            wds = strlen(buf1) - n;
            count = 0;
            for(j=0;j < wds;j++)
            {
                count *= 10;
                count += buf1[i+j]-'0';
            }
            break;   
        }   
    }
    count -= 1;
    sprintf(str,"%d\n",count);

    printf("str:%s\n",str);

    if (count == 0){
        fprintf(stderr," it is the max time to decrypt !()\n");
        memset(buf1,0,35);
        fp2 = fopen("password.txt","w");
        fputs(buf1,fp2);
          
    }
    else{
        strncpy(buf2,buf1,n-1);
        fp2 = fopen("password.txt","w");
        fputs(buf2,fp2);
        fputs(str,fp2);
        printf("%s\n",buf2);
    }
    fclose(fp1);
    fclose(fp2);
    
    char * outbuf=(char *)malloc(SIZE_OF_RETKEY);
    memset(outbuf,0,SIZE_OF_RETKEY);

    gpg_error_t err = gcry_kdf_derive(buf2,strlen(buf2),
				GCRY_KDF_PBKDF2,GCRY_MD_SHA512,
				SALT,sizeof(SALT),ITER,
				LEN_OF_RETKEY,outbuf);
    if (err) {
        fprintf(stderr,"a error occured in get_key_from_password()\n");
	fprintf(stderr,"error id = %d\n",err);
	exit(2);
    }
    free(buf2);
    free(str);
    return outbuf;
}

/* get key from user's input */
char* get_key_from_password2(){
    //init
    char buf1[40];
    int i,n;
    FILE *fp1;
    fp1 = fopen("password.txt", "r");
    char *buf2;
    fgets(buf1,35,fp1);
    buf2 =  (char*)malloc(strlen(buf1));
    
    for(i=0;i<strlen(buf1);i++){
        if(isdigit(buf1[i])){
            n = i;
        }
    }
    printf("%s\n",buf1);    
    strncpy(buf2,buf1,n-1);

    printf("%s\n",buf2);
    fclose(fp1);
    char * outbuf=(char *)malloc(SIZE_OF_RETKEY);
    memset(outbuf,0,SIZE_OF_RETKEY);
    

    //get key
    gpg_error_t err = gcry_kdf_derive(buf2,strlen(buf2),
                    GCRY_KDF_PBKDF2,GCRY_MD_SHA512,
                    SALT,sizeof(SALT),ITER,
                    LEN_OF_RETKEY,outbuf);
    if (err) {
        fprintf(stderr,"a error occured in get_key_from_password()\n");
        fprintf(stderr,"error id = %d\n",err);
        exit(2);
    }

    free(buf2);
    printf("%s\n",outbuf);
    return outbuf;
}


void cipher_error_handler(int cipher_err){
	fprintf(stderr,"An error occured! id=%d",cipher_err);
	exit(3);
}
int get_file_size(char *filename){
	struct stat file_stat;
	stat(filename,&file_stat);
	return file_stat.st_size;
}
