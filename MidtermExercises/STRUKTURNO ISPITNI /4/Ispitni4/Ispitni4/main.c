#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define MAX 100

//1VA ZAD
/*
 Од стандарден влез се читаат N парови цели броеви. Да се напише програма која за секој прочитан пар
од цели броеви ќе отпечати колку пати вториот број се појавува во првиот без преклопување на повторувањата.
 Ова да се реализира со посебна рекурзивна функција.
Пример:
за парот броеви 5167163 и 16 треба да се отпеачти 2.
*/

/*
int Parovi(int n){
    if(n==0){
        return 1;
    }
    else {
        return 10 * Parovi(n/10);
    }
}

int Broevi(int n,int m){
    
    if(n==0){
        return 0;
    }
    else {
        if(n%Parovi(m)==m){
            return 1 + Broevi(n/10, m);
        }
        else {
            return Broevi(n/10, m);
        }
    }
}

int main(){
    
    int n, a, b, i;
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        scanf("%d %d", &a, &b);
        printf("%d ", Broevi(a, b));

    }
   
    return 0;
}
*/


//2 ZAD
/* Maksimalna Podmatrica
 
 Oд стандарден влез се вчитува матрица со димензии M x N. Да се напише програма која ќе ги најде елементите на матрицата со димензии 2 x 2 која е подматрица на дадената матрица и има максимална сума. Да се отпечати оваа матрица на стандарден излез. Матрицата која се вчитува е со минимални димензии 2 x 2.
 
 Input                  Output
 4   2   7   11
 3   8  16   1       17    12
 17  12  9  5        6     14
 6    14   4   7
 
 */

/*
void Podmatrica(int a[100][100], int b[2][2],int n, int m){
    
    int i,j,zbir=0,max_zbir=0;
    for(i=0;i<n-1;i++){ //n-1
        zbir=0;
        for(j=0;j<m-1;j++){
            zbir=a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1]; // gi sobira site elementi na site nacini
            if(zbir>max_zbir){
                max_zbir=zbir;
                b[0][0]=a[i][j];    //barame podmatrica od 2x2
                b[0][1]=a[i][j+1];
                b[1][0]=a[i+1][j];
                b[1][1]=a[i+1][j+1];
            }
        }
    }
}

int main(){
    
    int a[100][100], b[2][2];
    int n,m,i,j;
    scanf("%d%d", &n, &m);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    Podmatrica(a, b, n, m);
    
    for(i=0;i<2;i++){ //do 2 red
        for(j=0;j<2;j++){ //do 2 kolona
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
*/


//3 ZAD
/*  Да се напише програма која на стандарден излез ќе ја оптечати содржината на дадена текстуалната датотека "text.txt". При печатењето, на почетокот на секој ред треба да го отпечати и односот на големи/мали букви во тој ред. Максималната должина на еден ред е 80 знаци. На крај треба да се отпчати и редниот број на редот со најголем однос на големи/мали букви.*/

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
    
    char a[100];
    int i, brojac_golemi=0, brojac_mali=0;
    
    while((fgets(a,100,f))!=NULL){
        brojac_mali=0;
        brojac_golemi=0;
        for(i=0;i<strlen(a);i++){
            if(isalpha(*(a+i))){
                if(isupper(*(a+i))){
                    brojac_golemi++;
                }
                else {
                    brojac_mali++;
                }
            }
        }
        printf("%.2f %s", (float)brojac_golemi/brojac_mali, a);
    }
    
    
    fclose(f);
    
    return 0;
}
*/
