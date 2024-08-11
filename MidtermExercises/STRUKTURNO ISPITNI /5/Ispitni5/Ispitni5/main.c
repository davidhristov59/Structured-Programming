#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

//1VA ZAD - Cifri vo broj
//Za parot broevi 5167163 i 17, 1 se pojavuva 2 pati, a 7 se pojavuva 1 pat, taka sto treba da se otpecati 3 =1+2=3. Vtoriot broj e za koi cifri da gledame vo prviot

/*
int Cifri_Vo_Broj(int n, int m){
    
    if(n==0){
        return 0;
    }
    
    int cifra=n%10;
    
    if(cifra==m){ //ako cifra mi e ednakov na brojot desno(17) i gi sodrzi tie broevi
        return 1 + Cifri_Vo_Broj(n/10, m);
    }
    
    return Cifri_Vo_Broj(n/10, m);
    
}

int main() {
   
    int n,m,zbir=0;
    scanf("%d %d", &n, &m);

    while(m>0){
        zbir+=Cifri_Vo_Broj(n, m%10); //m%10 ja zima poslednata cifra za posle da gi sporedi so n
        m/=10;
        
        printf("%d\n", zbir);
    }
    
    
    return 0;
}
*/

//NERESENA
//2 ZAD
/* Oд стандарден влез се вчитува матрица со димензии M x N. Да се напише програма која ќе ги најде и отпечати на стандарден излез двата дијагонално соседни елементи со максимална сума.
Во примерот елементите во сино и црвено се пример за дијагонално соседни елементи, а десно се резултантните два дијагонално соседни елементи
со максимална сума.
Пример влез
4 4
4 2 7 11
3 8 16 1
17 12 9 5
6 14 4 7
Пример излез
17 14
*/

//
//void Matrix(int a[100][100], int n, int m){
//
//    int i,j,zbir=0, max=0;
//
//    for(i=0;i<n-1;i++){
//        zbir=0;
//        for(j=0;j<m-1;j++){
//            zbir+=a[i][j];
//        }
//        if(zbir>max){
//            max=zbir;
//        }
//    }
//
//
//}
//
//
//int main(){
//
//    int n,m,i,j;
//    int a[100][100];
//    scanf("%d %d" , &n , &m);
//    for(i=0;i<n;i++){
//        for(j=0;j<m;j++){
//            scanf("%d" , &a[i][j]);
//        }
//    }
//
//    return 0;
//}
//


//3TA ZAD

/*
 Да се напише програма која на стандарден излез ќе ја оптечати содржината на дадена текстуалната датотека "text.txt".При печатењето, на почетокот на секој ред треба да го отпечати и односот на празни_места/букви во тој ред. Максималната должина
 на еден ред е 80 знаци. На крај треба да се отпчати и редниот број на редот со најмал однос на празни_места/букви
 
 Input
 Come Dowsed in Mud, Soaked in Bleach
 As I Want you To be
 As a Trend, as a Friend, As An Old Memoria
 MemOria
 #
 
 Output
 0.23 Come Dowsed in Mud, Soaked in Bleach
 0.43 As I Want you To be
 0.30 As a Trend, as a Friend, As An Old Memoria
 0.14 MemOria
 
 */

/*
void wtf()
{
    FILE *f=fopen("text.txt" , "w");
    char c;
    while((c=getchar())!= '#')
        fputc(c,f);
fclose(f);
}


int main(){
    
    wtf();
    FILE *f=fopen("text.txt" , "r");
    
    char a[80];
    int i, brojac_praznimesta=0, brojac_bukvi=0;
    
    while((fgets(a,100,f))!=NULL){
        brojac_praznimesta=0;
        
        for(i=0;i<strlen(a);i++){
            
            if(isspace(*(a+i))){
                brojac_praznimesta++;
            }
            else{
                brojac_bukvi++;
            }
        }
        printf("%.2f %s", (float)brojac_praznimesta/brojac_bukvi, a);
    }

    
    return 0;
}
*/
