#include <stdio.h>
#include <string.h>
int main()
{
    char tekst[]= "nabuchodonozor";
    int k;
    printf("tekst do szyfrowania: \n*%s* ",tekst);
    printf("\npodaj klucz <0;26> :");
    scanf("%i",&k);
    printf("podales klucz: '%i'\n",k);

        for(int i=0;i<=strlen(tekst);i++ )
            if(tekst[i]>=97 && tekst[i]<=122-k)
                tekst[i]=  (tekst[i])+k;
    else if(tekst[i]>=123-k && tekst[i]<=122)
        tekst[i]= (tekst[i])-26+k;


    printf("zaszyfrowany tekst: %s\n",tekst);
    printf("podaj zaszyfrowany tekst :");
    printf("%s", tekst);

    for(int i = 0; i<= strlen(tekst);i++)
        if(tekst[i]>=97+k && tekst[i]<=122+k)
                tekst[i]=(tekst[i])-k;
        else if(tekst[i]>=97-k && tekst[i]<=97+k)
            tekst[i]= (tekst[i])+26-k;



//printf("\n%i",tekst[1]);
printf("\nodszyfrowany tekst :%s",tekst);
    return 0;

}