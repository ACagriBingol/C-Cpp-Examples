void printFPHex( FILE* fpRead, FILE* fpWrite){
 double number1;
  if(fpRead == NULL || fpWrite == NULL){
    /*printf("Error opening file\n");*/
  }else{
    /*printf("File opened successfully.\n");*/
    while(fscanf(fpRead,"%lf", &number1)!= EOF){
        fprintf(fpWrite,"2 digit precision: %.2f\n",number1);
        fprintf(fpWrite,"Hex format: %a\n",number1);
    }
    fclose(fpRead);
    fclose(fpWrite);
  }
}