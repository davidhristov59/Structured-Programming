#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

/*
 1va ZAD
Од стандарден влез се читаат N цели броеви. Да се напише програма која за секој прочитан број ќе ги отпечати на стандарден излез сите парни цифри од бројот помножени со 2, како и бројот на помножени парни цифри кои се отпечатени. Печатењето на помножените парни цифри да се реализира со посебна рекурзивна функција.
    Пример:
   за бројот 15628 треба да се отпечати 12416 : 3.
 */

/*
int parni(int n){
    
    int cifra=n%10;
    
    if(n==0){
        return 0;
    }
    
    else if(cifra%2==0 && cifra!=1){
        if(cifra*2 && cifra>=10){
            return cifra*2 + parni(n/10)*100;
        }
        else {
            return cifra*2 + parni(n/10)*10;
        }
    }
    
    return parni(n/10);
}

int brojac_parni(int n){
    
    int cifra=n%10;
    
    if(n==0){
        return 0;
    }
   
    if(cifra%2==0 && cifra!=1){
        return 1 + brojac_parni(n/10);
    }
    
    return brojac_parni(n/10);
}

int main() {
   
    int n, broj;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &broj);
        printf("%d : %d\n", parni(n), brojac_parni(n));
    }
    
    
    return 0;
}
*/

//2 ZAD
/*
Од стандарден влез се вчитува матрица со димензии М × N. Да се напише програма која во друга матрица со исти димензии секоі елемент ке го замени со производот на неговите соседни елементи (по двете диіагонали) кои се помали од самиот тоі елемент.
Соседни елементи на еден елемент во матрицата се елемнтите кои се наоґаат горе-лево, долу-лево, горе-десно и долу-десно од самиот то елемент (ако елементот е дел од првата или последната редица или колона му недостасува по некоі сосед).*/
/*Input:
4 4
4   2   7   11
3   8   16  1
17  12  9   5
6   14  4   7

Output: - Dijagonalno
1   1   1       1
2   28  1320    1
112 72  52      1
 1  9   1       1
 
 */

/*
void Sosedi_Matrica_HorizVertikalno(int a[100][100],int b[100][100], int n, int m){
    
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            b[i][j]=1; //Stavame na 1 deka mnozime
            if(i+1<m && j+1<n && a[i+1][j+1]<a[i][j]){ //pomali od samiot toj element
                b[i][j]*=a[i+1][j+1]; //DOLE DESNO
            }
            if(i-1>=0 && j+1<n && a[i-1][j+1]<a[i][j]){
                b[i][j]*=a[i-1][j+1]; //GORE DESNO
            }
            if(j-1>=0 && i+1<m && a[i+1][j-1]<a[i][j]){
                b[i][j]*=a[i+1][j-1]; //DOLE LEVO
            }
            if(j-1>=0 && i-1>=0 && a[i-1][j-1]<a[i][j]){
                b[i][j]*=a[i-1][j-1]; //GORE LEVO
            }
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
    
    return 0;
}
*/

//3 ZAD
/*
Да се напише програма која во текстуалната датотека "text.txt" ќе го најде редот со најдолгиот збор и на стандарден  излез ќе ја отпечати должината на тој збор, како и содржината на редот во кој е најден. Максималната должина на еден ред е
80 знаци. Зборовите се одделени со едно или повеќе празни места. Ако зборот се наоѓа на крајот од редот разделен е со знак за нов ред \n.
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
    
    char a[80], max_niza[100];
    int i, brojac=0, max=0;
    
    while((fgets(a, 100, f))!=NULL){
        //max=0;
        brojac=0;
        for(i=0;i<strlen(a);i++){
            if(isalpha(*(a+i))){
                brojac++;
            }
            else {
                if(brojac>max){
                    strcpy(max_niza, a);
                    max=brojac;
                }
            }
        }
    }
    
    printf("%d %s\n", max, max_niza);
    
    fclose(f);
    
    return 0;
}
*/


