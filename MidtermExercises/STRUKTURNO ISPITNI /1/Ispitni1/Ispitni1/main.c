#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define MAX 100

//1VA ZAD
/*
Да се креираат функции со потпис:
int daliProst(int broj); // оваа функциа врака 1 ако броіот broi е прост, а 0 во спротивно
int brojPomaliProst(int broj); // оваа функциа е рекурзивна функциа кода го врака броіот на прости броеви помали од вредноста broj. Оваа функциа j користи функциата daliProst

Во main функциата од стандардден влез се внесува еден цел бро а.
На стандарден изелз во првиот ред да се отпечати:
Brojot na prosti broevi pomali od A e X.
Х е вредност коа се добива со повик на соодветна функциа.
*/

/*
int daliProst(int broj){
    
    int brojac=0;
    
    for(int i=1;i<=broj;i++){
        if(broj%i==0){
            brojac++;
        }
    }
    if(brojac==2){
        return 1;
    }
    else {
        return 0;
    }

}

int brojPomaliProst(int broj){
    
    if(broj==1){
        return 1;
    }
    
    return daliProst(broj) + brojPomaliProst(broj-1);
    
}

int main() {
    
    int n;
    scanf("%d", &n);
    
    printf("Brojot na prosti broevi pomali od %d e %d", a, brojPomaliProst(a));

    
    return 0;
}
*/

//2RA ZAD
/*
 Од стандарден влез се вчитува матрица со димензии M×N. Треба да се напише програма кода ке го наіде и отпечати наголемиот погоден броj. Ако нема таков броj да се отпечати: Nema pogoden broj. 3a еден броj од матрицата велиме дека е погоден бро ако тоі е делив и со редниот броі на редот и на колоната во коза се наога. Притоа да се земе предвид дека редиците и колоните почнуваат од реден броі 1.
 Pr.             Izlez
 4 18 7 11       4, 18, 8, 12, 9, 24 = 24(24 e max broj)
 3 8 16 1
 17 12 9 5
 6 14 24 17
 */

/*
void Pogoden_Broj_Matrix(int a[100][100], int n, int m){
    
    int max=0;
    int i,j;
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]%i==0 && a[i][j]%j==0){  //deliv so redniot broj na redot i kolonata.
                if(a[i][j]>max){
                    max=a[i][j];
                }
            }
        }
    }
    printf("%d\n", max);
}

int main(){
    
    int a[100][100];
    int n,m;
    int i,j;
    scanf("%d%d", &n, &m);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    Pogoden_Broj_Matrix(a, n, m);
    
    return 0;
}
*/


//3TA ZAD
/*
Нека е дадена влезна датотека со име „text.txt". Да се напише програма коа ке ги отпечати на стандарден излез секо трет збор од датотеката, но така што буквите од зборовите да се сите мали и во зборовите буквата а и претходната буква да си ги заменат местата. Ако а се наоба на почеток на зборот, тогаш да биде со голема буква.
На пример модифициран зборот inForMatika би бил inforamtiak.
Забелшака_: Во датотеката зборовите се составени само од алфанумерички знаци и се оделени со празно место или нов ред.
Максималниот броі на знаци во еден збор е 20.
 
 Input
 Vo ovoj Tekst treba da sE pEchati
 seKoj tretti zbOr
 #
 
 Output
 tekst
 se
 tretti
 
 Input
 uj so informatika be eden anavar
 #
 inforamtiak
 Aanavr
 
 Output
 inforamtiak
 Aanavr
 
*/

/*
void wtf() {
    FILE *f = fopen ("text.txt", "w");
    char c;
    while((c=getchar())!= '#'){
        fputc(c, f) ;
    }
    fclose(f);
}

int main(){
    
    wtf();
    FILE *f = fopen ("text.txt", "r");
    
    char zbor[20];
    int brojac=0;
    int i;
    char temp;
    
    while((fscanf(f,"%s", zbor))!=EOF){
    
        brojac++; //gi brojam zborovite
        
        if(brojac%3==0){ //go delime so 3 za da go najdeme tretiot zbor
            for(i=0;i<strlen(zbor);i++){
                //i==0 && zbor[i]=='a'
                if(zbor[0]=='a'){ //ako prvata bukva =0 e 'a' togas napraj ja golema
                    zbor[0]=toupper(zbor[0]);
                }
                else if(zbor[i]=='a'){ //ako ima a vo zborot, da si gi zameni mestata so prethodnata
                    temp=zbor[i];
                    zbor[i]=zbor[i-1]; //zamenuva so prethodnata
                    zbor[i-1]=temp;
                }
                else {
                    zbor[i]=tolower(zbor[i]); //site ostanati zborovi da si ostanat
                }
            }
            printf("%s\n", zbor); //tuka go stavam vnatre bidejki treba sekoj 3ti zbor da se pecati
        }
    }
    
    fclose(f);
    
    return 0;
}
*/

