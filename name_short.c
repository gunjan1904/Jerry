 #include<stdio.h>
 void short_name(char str[]);
int main(){
   char str[100];
   printf("Enter a string: ");
   gets(str);
   short_name(str);
}

void short_name(char str[])
  {
   
   int i=0, lastword=0;
   if(str[i]=='\0')
     {
       printf("\n Sorry Empty String");
       return;
     }
   else
    {
      printf("%c",str[i]);
      while(str[i]!='\0')
       {
       
	       if(str[i]==' ')
	        {
                i++; lastword = i;
                printf(".%c",str[i]);
            }
            i++;
       }
   printf("%s", str+lastword+1);
}
   //return 0;
}
