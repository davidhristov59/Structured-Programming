#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*Да се напише програма која вчитува квадратна матрица. На почетокот се внесува бројот на редици и колони N на матрицата, а потоа и елементите на матрицата.
Да се трансформира матрицата на тој начин што секој негативен број во неа би се заменил со збирот на неговите соседи.
Соседи на даден број во матрица се броевите до него (гледано хоризонтално и вертикално).
 Input
 4
 5
 6
 7
 8
 20
 -1
 4
 3
 50
 1
 2
 -6
 5
 -8
 5
 4
 
 Result
 5 6 7 8
 20 31 4 3
 50 1 2 9
 5 11 5 4
*/
 
/*
void Matrix(int a[100][100], int n){
    
    int zbir=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i>j) && ((i+j)>(n-1))){
                a[i][j]=a[i][j]*-1;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
}


int main() {
    
    int a[100][100];
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    Matrix(a, n);
    
    
    return 0;
}
*/


/*
Од стандарден влез се вчитува матрица сo m редици и n колони. Прво се вчитуваат броевите m и n а потоа и елементите на матрицата.

Да се изврши min-max нормализација на секоја колона од матрицата, односно секој елемент во секоја колона да се замени со вредноста 𝑥−𝑚𝑖𝑛𝑚𝑎𝑥−𝑚𝑖𝑛
 каде што x е елемент во некоја колона, а max и min се соодветно најголемиот и најмалиот елемент во соодветната колона.

Трансформираната матрица да се испечати на екран.
Објаснување на примерот:
Елементите на 0-тата колона се: 1,6,11,16,21. Минимален елемент е 1, а максимален елемент е 21
Секој од 5те елементи ќе се трансформира на следниот начин:

(1-1)/(21-1) = 0/20 = 0.00
(6-1)/(21-1) = 5/20 = 0.25
(11-1)/(21-1) = 10/20 = 0.50
(16-1)/(21-1) = 15/20 = 0.75
(21-1)/(21-1) = 20/20 = 1.00
*/

/*
void Matrix(double a[100][100],int n, int m){
    
    double min=99999, max=-99999;
    int i,j;
    
    for(j=0;j<m;j++){
        min=a[0][j]; //prvata redica da e 0.00
        max=a[0][j];
        for(i=0;i<n;i++){
            
            if(a[i][j]<min){
                min=a[i][j];
            }
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        
       for(i=0;i<n;i++){
            a[i][j]=(a[i][j]-min)/(max-min);
        }
        
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%.2lf ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    double a[100][100];
    int n,m;
    scanf("%d%d", &n, &m);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%lf", &a[i][j]);
        }
    }
    
    Matrix(a,n,m);
        
    return 0;
}
*/



/*Da se zdipli matricata, kako sto e dadeno , ak se vnese neparen broj, da se ispecati greska. Se sobiraat elementite na pozicitte sto se poklopuvaat
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Result
34 34
34 34
*/

/*
void Matrix(int a[100][100],int n){
    
    int i,j;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(n % 2 != 0){
                printf("GRESKA\n");
                return 0;
            }
        }
    }
    
    for(i=0;i<n/2;i++){
        for(j=0;j<n;j++){
            a[i][j]+=a[n-1-i][j];
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n/2;j++){
            a[i][j]+=a[i][n-1-j];
        }
    }
    
    for(i=0;i<n/2;i++){
        for(j=0;j<n/2;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
     
}


int main() {
    
    int  a[100][100];
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    Matrix(a, n);
        
    return 0;
}
*/

//Да се напише програма која чита две целобројни матрици со димензија mxn, а потоа печати колку колони од првата матрица се наоѓаат во втората матрица.

/*
void Matrix(int a[100][100], int b[100][100],int n, int m){
    
    int brojac=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[j][i]==b[j][i]){
                brojac++;
            }
        }
    }
    printf("%d\n", brojac-m);
}

int main() {
    
    int  a[100][100], b[100][100];
    int n, m;
    scanf("%d %d", &n, &m);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &b[i][j]);
        }
    }
    
    Matrix(a,b,n,m);
        
    return 0;
}
*/

/*
Напишете програма за читање елементи во матрица и проверете дали дадената матрица е симетрична матрица или не. Од стандаред влез се внесуваат димензиите на матрицата M и N соодветно и потоа се внесуваат елементите на матрицата. Ваша задача е доколку матрицата е симетрична да испечатете на екран 1, доколку не е симетрична да испечатете -1, потоа се печати самата матрица на екран.
3 3         1
1 2 3       1 2 3
2 4 5       2 4 5
3 5 8       3 5 8
*/

/*
int main() {
    
    int  a[100][100];
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    int simetricna=1; //stavam promenliva siemtricna i aj stavam na 1
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]!=a[j][i]){ //proveruvam dali e simetricna
                simetricna=0; //vrakam na 0 i break
                break;
            }
        }
    }

    if(simetricna){
        printf("1\n");
    }
    else {
        printf("-1\n");
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
*/


/*
int TransformiranBroj(int n){

    if(n==0){
        return 0;
    }
    int cifra=n%10;

    if(cifra%2==0){
        cifra=0;
    }
    else if(cifra%2!=0){
        cifra=cifra-1;
    }

    return cifra+10*TransformiranBroj(n/10);
}

int main(){

    int n;
    scanf("%d", &n);

    printf("%d", TransformiranBroj(n));


    return 0;
}
 */



//int isInteresting(int number){
//
//    int flag=0;
//    while(number>0){
//
//    int posledovatelna_cifra=number%10;
//    int prethodna_cifra=number/10%10;
//
//    if(prethodna_cifra==0){
//        break;
//    }
//
//        if(((posledovatelna_cifra%2==0)&&(prethodna_cifra%2!=0))||((posledovatelna_cifra%2!=0)&&(prethodna_cifra%2==0))){
//            flag=1;
//        }
//        else {
//            flag=0;
//            break;
//        }
//        number/=10;
//    }
//
//   if(flag==1){
//       return 1;
//   }
//   else {
//       return 0;
//   }
//
//}
//
//void printArray(int numbers[], int n, int start){
//
//    if(start<0){
//        return ;
//    }
//
//    if(isInteresting(numbers[start])){
//        printf("%d\n", numbers[start]);
//    }
//    printArray(numbers, n,start-1);
//}
//
//
//int main(){
//
//    int n,i,start;
//    int a[100];
//    scanf("%d", &n);
//    for(i=0;i<n;i++){
//        scanf("%d", &a[i]);
//    }
//
//    printArray(a,n,n-1);
//
//    return 0;
//}

/*
Од стандарден влез се читаат соодветно низа со M елементи и низа со N елементи, ваша задача е да ги споите двете низи во трета сортирана низа по растечки редослед.

Објаснување: Се внесува најпрвин должината на првата низа М, па потоа се чита првата низа, потоа се внесува должината на втората низа N, па втората низа.
 input
 5
 1 4 6 9 15
 4
 2 5 8 10
 
 output
 1 2 4 5 6 8 9 10 15

 */


/*
void sort(int *a, int n){
    
    int temp,i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
}

int main(){
    
    int n,m,i,j,k=0;
    int a[100], b[100], c[100];
    
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &m);
    for(j=0;j<m;j++){
        scanf("%d", &b[i]);
    }
    
    for(j=0;j<m;j++){
        scanf("%d", &b[i]);
    }
    
    for(i=0;i<n;i++){
        c[k]=a[i];
        k++;
    }
    
    for(j=0;j<m;j++){
        c[k]=b[i];
        k++;
    }
    
    sort(c, k);
    
    for(i=0;i<k;i++){
        printf("%d ", c[i]);
    }
    
    return 0;
}
*/

/*
Од стандарден влез се чита низа на цели броеви се додека не се внесе нешто различно од цел број. Треба да се направи трансформација на низата, на тој начин што за секој елемент, сите елементи после него кои што се еднакви со него ќе се зголемат за разликата на позициите помеѓу двата елементи.

 Пример: - Низата 5 6 10 5 3 10 10, после трансформација би била 5 6 10 8 3 13 14.
 */
/*
void sort(int *a, int n){
    
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){ //сите елементи после него кои што се еднакви со него
                a[j]+=j-i; //ќе се зголемат за разликата на позициите помеѓу двата елементи.
            }
        }
    }
    
}

int main(){
    
    int a[100];
    int i,n,k=0;
    
    while(scanf("%d", &n)==1){
        a[k]=n; //nekoj dvigatel za niza, osven i
        k++;
    }
    
    sort(a,n);
    
    for(i=0;i<k;i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}
*/

void Niza(int *a, int n){
    
    int i,j,prethoden_broj=0;
    
    for(i=0;i<n;i++){
        a[i]+=prethoden_broj;
        prethoden_broj=a[i];
    }
    
}


int main(){
    
    int n,i;
    int a[100];
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    printf("Vnesenata niza e:\n");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    
    Niza(a, n);
    
    printf("\nNovata niza e:\n");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    
    
    return 0;
}
