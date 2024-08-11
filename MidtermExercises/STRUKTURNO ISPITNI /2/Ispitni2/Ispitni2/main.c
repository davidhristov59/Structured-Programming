#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define MAX 100


//1 ZAD

/*
Од стандарден влез се читаат N цели броеви. Да се напише програма коа за секо прочитан бро ке ги отпечати на стандарден излез само цифрите помали од 5, како и броот на цифри кои се отпечатени. Печатенето на цифрите помали од 5 да се реализира со посебна рекурзивна функциа.
Пример:
за броіот 8423871 треба да се отпечати 4231 : 4
 */

/*
int Mali_Cifri_Print(int n){
    
    if(n==0){
        return 0;
    }
    
    int cifra=n%10;
    //int malicifri=n/10;
    
    if(cifra<5){
        
        return cifra + Mali_Cifri_Print(n/10);
    }
    
    return Mali_Cifri_Print(n/10);
}

int Mali_Cifri_Broi(int n){
    
    if(n==0){
        return 0;
    }
    
    int cifra=n%10;
    
    if(cifra<5){
        return 1 + Mali_Cifri_Broi(n/10);
    }
    
    return Mali_Cifri_Broi(n/10);
}

int main(){
    
    int n;
    scanf("%d", &n);
    
    printf("%d: %d", Mali_Cifri_Print(n), Mali_Cifri_Broi(n));
        
    return 0;
}
*/

//2 ZAD
//Sosedi - sekoj element ke go zameni so zbirot na negovite sosedni elementi po horiz i vertijala koi se pogolemi od samiot toj element
/*Input:
4 4
4 2 7 11
3 8 16 1
17 8 9 5
6 14 4 7

Output: - Horiz i vert
0 19 27 0
29 16 0 32
0 40 16 16
31 0 30 0
 
Output - Dijagonalno
 8 19 9 16
 10 37 26 16
 22 29 30 20
 8 26 13 9
 */

/*
void Sosedi_Matrica_HorizVertikalno(int a[100][100],int b[100][100], int n, int m){
    
    int i,j; //zbir
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            b[i][j]=0; //zbir=0;
            if(i+1<m && a[i+1][j]>a[i][j]){ //DOLE
                b[i][j]+=a[i+1][j]; //zbir+=a[i+1][j]; - moze i vaka
            }
            if(i-1>=0 && a[i-1][j]>a[i][j]){ //GORE
                b[i][j]+=a[i-1][j]; //zbir+=a[i-1][j];
            }
            if(j-1>=0 && a[i][j-1]>a[i][j]){ //LEVO
                b[i][j]+=a[i][j-1]; //zbir+=a[i][j-1];
            }
            if(j+1<n && a[i][j+1]>a[i][j]){ //DESNO
                b[i][j]+=a[i][j+1]; //zbir+=a[i][j+1];
            }
            //b[i][j]=zbir;
        }
    }
    
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}

void Sosedi_Matrica_Dijagonalno(int a[100][100],int b[100][100], int n, int m){
    
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            b[i][j]=0;
            if(i+1<m){ //DOLE DESNO
                b[i][j]+=a[i+1][j+1];
            }
            if(i-1>=0){ //GORE DESNO
                b[i][j]+=a[i-1][j+1];
            }
            if(j-1>=0){ //DOLE LEVO
                b[i][j]+=a[i+1][j-1];
            }
            if(j+1<n){ //GORE LEVO
                b[i][j]+=a[i-1][j-1];
            }
            //b[i][j]=zbir;
        }
    }
    
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
}

int main(){
    
    int a[100][100], b[100][100];
    int n,m;
    scanf("%d%d", &n, &m);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    Sosedi_Matrica_HorizVertikalno(a, b, n, m);
    Sosedi_Matrica_Dijagonalno(a, b, n, m);
    
    return 0;
}

*/


//3 ZAD
//Posledovatelni soglaski - da se najde REDOT so najgolem broj posledovatelni povtoruvanja na soglaski i ke go otpecati toj broj kako i sodrzinata na redot
/*
 Input
I know someday you'll have a beautiful life,
I know you'll be a star in somebody else's sky,
But why, why, why can't it be, can't it be mine?
 
 Output
 11
 But why, why, why can't it be, can't it be mine?
 
 */


/*
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int Samoglaski(char bukva){
    
    bukva=tolower(bukva);
    
    if(bukva=='a' || bukva=='e' || bukva=='i' || bukva=='o' || bukva=='u'){
        return 1;
    }
    
    return 0;
    
}

int Max_Broj_Soglaski(char *a){
    
    int brojac_soglaski=0, max=0;
    
    while(*a){
        if(isalpha(*a)){
            if(!(Samoglaski(*a))){
                brojac_soglaski++;
            }
            else {
                if(brojac_soglaski>max){
                    max=brojac_soglaski;
                }
                else {
                    brojac_soglaski=0;
                }
            }
        }
        a++;
    }
    return max;
}


int main(){
    
    wtf();
    FILE *f = fopen("broevi.txt", "r");

    char a[100], max_niza[100];
    int max=0, max_brojsoglaski=0;
    
    while((fgets(a, 100, f))!=NULL){
        
        max_brojsoglaski=Max_Broj_Soglaski(a); //da dademe vrednost, ja stavam funkcijata vo nekoja promenliva
        
        if(max_brojsoglaski>max){
            max=max_brojsoglaski;
            strcpy(max_niza, a);
        }
    }
    
    printf("%d %s", max, max_niza);
    
    fclose(f);
    
    return 0;
}

*/
