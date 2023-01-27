void convertUpperCase( FILE* fpRead, FILE* fpWrite){
  char ch;
  if(fpRead == NULL || fpWrite == NULL){
    /*printf("Error opening file\n");*/
  }else{
    /*printf("File opened successfully.\n");*/
    
        while((ch=fgetc(fpRead))!=EOF){
            
            if ('a'<=ch && ch<='z')
                ch+='A' -'a';
            fprintf(fpWrite, "%c", ch);
        }
    
        fclose(fpRead);
        fclose(fpWrite);
    }
}
