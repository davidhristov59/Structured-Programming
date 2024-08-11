#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define MAX 100

//1 ZAD
/*
 Минимум 3
Од стандарден влез се читаат N тројки цели броеви. Да се напише програма која за  секоипрочитани три цели броја ќе го
отпечати најмалиот. Наоѓањето на најмалиот од три броја да се реализира со посебна рекурзивна функција.
 Пример:
за тројката броеви 8 15 3 треба да се отпечати 3.
*/

/*
int minimum3(int a, int b, int c){
    
    if(a<=b && a<=c){
        return a;
    }
    if(a>b){
        return b;
    }
    if(a>c){
        return c;
    }
    
    return minimum3(a, b, c);
}


int main(){
    
    int n,a,b,c;
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d", minimum3(a, b, c));
    
    return 0;
}
 */

//ZA BARANJE MAX
/*
int max3(int a,int b, int c){


    if(a>=b && a>=c){
        return a;
    }
    if(a<b){
        return b;
    }
    if(a<c){
        return c;
    }

    return max3(a,b,c);
}

int main(){

    int n,a,b,c;
    scanf("%d", &n);
    
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d ", max3(a, b, c));

    return 0;
}
*/


//ZAD 2
/*

Пример влез        Излез
4                   4 + 5 = 9
4 18 7 11
3 8 16 1
17 12 9 5
6 14 4 17
*/


int Matrix(int a[100][100], int n){
    
    int zbir=0, min_zbir=99999;
    
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            if(i+j==n-1){
//                zbir+=a[i][j];
//            }
//        }
//    }
   // min_zbir=zbir;
    //zbir=0;
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //j==i-1-n
            if(j==i-1){
                zbir+=a[i][j];
            }
        }
        if(zbir<min_zbir){
            min_zbir=zbir;
        }
    }
    return min_zbir;
}

int main(){
    
    int a[100][100];
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("%d\n", Matrix(a,n));
    
    
    return 0;
}


//ZAD 3
/* Да се напише програма која во текстуалната датотека "text.txt" ќе го најде редот со најголема комплексност и ќе ја испечати на стандарден излез оваа комплексност, заедно за кој е пресметана. Комплексност на редот се пресметува
  како збир на ASCII кодовите на сите мали букви. Максималната должина на еден ред е 80 знаци.
 Input
 jadfkhdfuadjfiaf
 alksfpakfajfiakdjfiaojf
 jkadfkaf
 apteovck
 #
 ````
 Output
 2390: alksfpakfajfiakdjfiaojf
 
 */

/*
void wtf()
{
    FILE *f=fopen("text.txt" , "w");
    char c;
    while((c=getchar())!='#')
        fputc(c,f);
fclose(f);
}

int main(){

    wtf();
    FILE *f=fopen("text.txt" , "r");

    char a[100], max_niza[100];
    int zbir=0, max=0;

    while((fgets(a, 100, f))!=NULL){
        zbir=0;
        int n=strlen(a);
        for(int i=0;i<n;i++){
            if(islower(a[i])){ //moze i a[i]>='a' && a[i]<='z'
                zbir+=a[i];
            }
        }
        if(zbir>max){
            max=zbir;
            strcpy(max_niza, a);
        }
    }
    printf("%d: %s", max, max_niza);

    fclose(f);

    return 0;
}
*/

