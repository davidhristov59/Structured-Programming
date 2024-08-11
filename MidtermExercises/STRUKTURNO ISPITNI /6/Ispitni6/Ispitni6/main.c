#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

//1VA ZAD
//Da se najde max broj od 3 broja
// 8 15 3 - najgolem e 15

/*
int max3(int a,int b, int c){
    
    if(a>=b && a>=c)
    {
        return a;
    }
    
    if(a<b){
        return b;
    }
    
    if(a<c){
        return c;
    }
    
    return max3(a, b, c);
}

int main() {
   
    int n,a,b,c;
    int i;
    scanf("%d", &n);
  
    scanf("%d %d %d", &a, &b, &c);
    printf("%d ", max3(a, b, c));

    return 0;
}
*/


//2RA ZAD
/*
Oд стандарден влез се вчитува квадратна матрица со димензија N. Треба да се напише програма која ќе ја најде и отпечати на стандарден излез максималната сума на елементите кои се наоѓаат на сите дијагонали над главната дијагонала (вклучувајќи ја и главната).
 
Sample input:
4
4 18 7 11
3 8 16 1
17 12 9 5
6 14 4 7
 
Sample output:
39
*/

/*
int Matrix(int a[100][100], int n){
    
    int zbir=0, max_zbir=0;
    
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            if(i==j){
//                zbir+=a[i][j];
//            }
//        }
//    }
//    //max_zbir=zbir;
//    zbir=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i+1){
                zbir+=a[i][j];
            }
        }
        if(zbir>max_zbir){
            max_zbir=zbir;
        }
    }
    return max_zbir;
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
*/


//3TA ZAD
/*
Најдолго повторување
Да се напише програма која во текстуалната датотека "text.txt" ќе го најде редот со надолго последователно повторување на еден ист знак и ќе го отпечати на стандарден излез тој број, како и редот во кој е најден. Максималната должина на еден ред е 80 знаци.

Sample input:
I know someday you'll have a beautiful life,
I know you'll be a staaar in somebody else's sky,
But why, whyyyy, whhhy can't it be, can't it be mine?

Sample output:
4
But why, whyyyy, whhhy can't it be, can't it be mine?
*/

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

    char a[100], b[100];
    int i,max=0, brojac=0;
    int flag=1;
    
    while((fgets(a,100,f))!=NULL){
        brojac=0;
        for(i=0;i<strlen(a);i++){
            if(flag){
                flag=0;
                brojac++;
            }
            else {
                if(a[i]==a[i-1]){
                    brojac++;
                }
                else {
                    flag=1;
                    if(brojac>max){
                        max=brojac;
                        strcpy(b, a);
                    }
                   i--;
                }
            }
        }
    }
    
    printf("%d\n %s", max, b);
    
    return 0;
}
