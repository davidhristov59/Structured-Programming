#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/*
 1va zad
 POSLEDOVATELNI SAMOGLASKI
Дадена е текстуална датотека text.txt.
Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката. Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов
ред се печати бројот на појавувања на паровите самогласки.

Пример: за датотеката:
IO is short for Input Output
medioio medIo song
излез:
io
ou
io
oi
io
io

For example:
Input    Result
Why so serious?
#
 Result
io
ou
2
 */

/*void writeToFile() {

FILE *f = fopen("text.txt", "w");
char c;

while((c = getchar()) != '#') {

fputc(c, f);

}

fclose(f);
}

int samoglaska(char bukva){ //f-ja za da proveram dali e samoglaska, proveruvam vnatre vo bukvata dali e samoglaska

    //Pojavata na golemi i mali bukvi da se ignorira
    //Ja pravam vo mala bezrazlika dali e golema
    if(tolower(bukva)=='a' || tolower(bukva)=='e' || tolower(bukva)=='i' || tolower(bukva)=='o' || tolower(bukva)=='u'){
        
        return 1; //ke vrati 1 ako e samoglaska
    }
    else {
        return 0;
    }
    
}

int main (){
    
    writeToFile();
    FILE *f = fopen("text.txt", "r");

    int brojac=0;
    char bukva, prethodna_bukva='t';//mu davam bilo koja vrednist na prethodna bukva ,potocnoo nekoja bukva sto ne e samoglaska.
    while ((bukva=fgetc(f))!=EOF) {
        
        if(samoglaska(bukva)){ //proveruvam dali sekoja bukva sto ja vnel e samoglaska.
            if(samoglaska(prethodna_bukva)){ //Ako e samoglaska, proveruvam dali narednata sto ja imam e samoglaska, ako ne e, ne vleguva
                printf("%c%c\n", tolower(prethodna_bukva),tolower(bukva)); //ako dvete se samoglaski, gi pravi mali i gi pecati i gi broi
                brojac++;
            }
        }
        prethodna_bukva=bukva; //prvata samoglaska ja dodeluva na prvata bukva
    }
    
    printf("%d", brojac);//gi broi kolku se na kraj i gi pecati
    
    fclose(f);
    
    return 0;
}
*/



//3ta
/*Од тастатура во низа се внесуваат N позитивни цели броеви (N <= 100), а потоа се внесува и цел број ind (ind >= 0).
Да се напише функција sum_pos која ја прима низата, бројот ind (кој претставува индекс во низата) и бројот на валидни елементи во низата. Функцијата треба да врати сумата на сите елементи почнувајќи од дадениот индекс ind па се до крајот на низата. Ако индексот ind е поголем од Nфункцијата треба да врати 0.

НАПОМЕНА: Задачата да се реши со помош на покажувачи (без користење на оператор [ ]).

Пример
влез:                          излез:
 10                             98
2 4 6 8 1 3 9 12 33 44          98 = 9+12+33+44
6

Primer2
Input                   Result
6                       2
2 1 66 100 1 2
5
2
 */

/*
int sum_pos(int *a, int n, int ind){

    if(ind > n){ //ako indeksot e pogolem od n
        return 0;
    }

    int *ptr = a+ind; //pokazuvac vo elementtot na index ind

    int zbir=0;

    for(int i=ind;i<n;i++){ //pocnuvajki od indeksot pa se do krajot na nizata

        zbir+=*ptr; //dodadi ja vrednosta sto pokazuva od pokazuvacot na sumata.
        ptr++; //mora da dvizi na slednite elementi vo nizata
    }

    return zbir;//vrati go zbirot
}

int main() {

    int a[100];
    int n,zbir,ind;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    scanf("%d", &ind); //od koj element da pocnuva da broi

   zbir=sum_pos(a, n, ind);//ja bara sumata pocnuvajki od indeksot ind

    printf("%d\n", zbir);

    return 0;
}
*/



//5ta zad
/*
Дадена е текстуална датотека (livce.txt) која претставува ливче во спортска обложувалница. На почетокот во датотеката, во посебен ред е запишана сумата на уплата (цел број).
Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:
ab12 1 1.25. Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).
Ваша задача е да се испечати типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.

Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.
*/

/*
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main(){

    wf();
    FILE *f = fopen("livce.txt", "r");

    int uplata, tip, max_tip;
    char sifra[100];
    char max_sifra[100];
    float koeficient, max_koeficient=0, dobivka;
    
    fscanf(f, "%d", &uplata);
    
    dobivka=uplata;
    
    while(fscanf(f, "%s %d %f", sifra, &tip, &koeficient)!=EOF){
        
        if(koeficient>max_koeficient){
            
            max_koeficient=koeficient;
            max_tip=tip;
            strcpy(max_sifra, sifra);
            
        }
        dobivka*=koeficient;
    }
    printf("%s %d %.2f\n", max_sifra, max_tip, max_koeficient);
    printf("%.2f\n", dobivka);
    
return 0;
}*/


//13zad
/*
Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви), како и елементите на матрицата со димензии M x N (цели броеви). Да се напише програма што ќе ги промени редиците на матрицата на следниот начин:
- Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1
- Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1
- Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0
Променетата матрица да се испечати на екран.

 Input
 17
 4 6
 1 5 7 2 1 1
 10 0 0 5 1 1
 5 8 3 9 1 0
 9 8 2 5 3 4
 
 Output
 0 0 0 0 0 0
 0 0 0 0 0 0
 1 1 1 1 1 1
 1 1 1 1 1 1
 
 */

//treba da se doresi bidejki ne gi dava site elementi, krati nekolku

/*void Matrix(int a[MAX][MAX], int n, int m,int x){
    
    int i,j, zbir_red;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        zbir_red=0;
        for(j=0;j<m;j++){
            zbir_red+=a[i][j];
        }
        if(zbir_red>x){
            for(j=0;j<n;j++){
                a[i][j]=1;
            }
        }
        else if(zbir_red<x){
            for(j=0;j<m;j++){
                a[i][j]=-1;
            }
        }
        else {
            for(j=0;j<m;j++){
                a[i][j]=0;
            }
        }
    }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }


int main(){
    
    int a[100][100];
    int n,m,x;
    scanf("%d", &x);
    scanf("%d %d", &n, &m);
    
    Matrix(a, n, m, x);
    
    return 0;
}
*/

/* 15 zad - vezbanje
За еден природен број а велиме дека е порамнување на друг природен број b ако и само ако цифрите еднакви на 9 во бројот b се заменети со цифрата 7 во бројот а.
Пример. Бројот 734775 е порамнување на бројот 934795.
Од стандарден влез се внесуваат непознат број на цели броеви (не повеќе од 100), се додека не се внесе нешто што не може да се интерпретира како цел број.
Ваша задача е да ги отпечатите најмалите 5 од порамнувањата на сите внесени броеви, по редослед од најмалиот кон најголемиот.
Забелешка: Доколку се внесат помалку од 5 броеви, тогаш печатите толку броеви колку што се соодветно внесени.
Наоѓањето на порамнувањето на даден број треба да се реализира во посебна рекурзивна функција poramnet(int a).
Пример.
За броевите: 9592, 69403, 100007, 6, 987, 6977, 33439, треба да се најдат нивните порамнувања ( тоа се: 7572, 67403, 100007, 6, 787, 6777 и 33437, соодветно),
и да се отпечатат најмалите 5 од нив по овој редослед: 6 787 6777 7572 33437.
 
 Input                  Output
5 6 8 9 9 9 9 y        5 6 7 7 7

*/

/*
void sort(int *a, int n){
    
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
}

int poramnet(int n){
    
    if(n==0){
        return 0;
    }
    
    int cifra=n%10;
    
    if(cifra==9){
        return 7+ 10 * poramnet(n/10);
    }
    
    return cifra+ 10 * poramnet(n/10);
    
}

int main(){
    
    int n=0,i=0;
    int a[100];
    while(scanf("%d", &a[i])==1){
        i++;
        
    }
        n=i;
    
        for(i=0;i<n;i++){
            a[i]=poramnet(a[i]); //poramnet(n)
        }
    
    sort(a, n);
    
    if(n<5){
        
        for(i=0;i<n;i++){
            printf("%d ", a[i]);
        }
    }
    else {
        
        for(i=0;i<5;i++){
            printf("%d ", a[i]);
        }
        
    }
    
    return 0;
}
*/




/*
 18ta
За квадратна матрица А со димензии n x n, од стандарден влез се внесува бројот n (n > 2) и елементите на матрицата (реални броеви). Нека X e збирот од елементите под главната дијагонала во матрицата А. Нека Y е збирот од елементите под споредната дијагонала во матрицата А. Да се креира нова матрица B на следниот начин:
- сите елементи од главната дијагонала во матрицата B треба да имаат вредност X
-сите елементи од споредната дијагонала во матрицата B треба да имаат вредност Y
ако даден елемент припаѓа и на главната и на споредната дијагонала во матрицата B, тогаш неговата вредност e X+Y
сите останати елементи во матрицата B имаат вредност 0

Новата матрица B да се испечати на стандарден излез.

ПРИМЕР:

Матрица A

5 5.5 6 1.2 2.5
8 95.1 21.3 13 0.3
34 4.1 37.4 22 6
4.1 5.5 0.7 7 0
42 1.1 3.2 7.5 1.8

Матрица B

110.2 0 0 0 49.5
0 110.2 0 49.5 0
0 0 159.7 0 0
0 49.5 0 110.2 0
49.5 0 0 0 110.2

*/

/*
 void matrix_B(double a[MAX][MAX], double b[MAX][MAX], int n){
 
 double X=0, Y=0;
 
 for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){
 scanf("%lf", &a[i][j]);
 }
 }
 
 for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){
 if(i>j){ //X e zbirot od elementite pod glavnata dijagonala
 X+=a[i][j];
 }
 if(i+j>n-1){ //Y e zbirot od elementite pod sporednata dijagonala
 Y+=a[i][j];
 }
 }
 }
 
 //NE MORA
 //Kreiranje na nova matrica B
 for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){
 b[i][j]=0; KOGA SE KREIRA NOVA MATRICA OBEVEZNO NA 0 DA SE STAVI
 }
 }
 
 
 //Eden ciklus za nova matrica
 for(int i=0;i<n;i++){
 b[i][i]=X; //site elementi od glavnata dijagonala treba da imaat vrednost X
 b[i][n-i-1]=Y; //site elementi od sporednata dijagonala treba da imaat vrednost Y
 //sporedna
 if(i==n-i-1){ //ako daden element pripaga i na glavnata i na sporednata dijagonala, togas negovata vrednosst e X+Y.
 b[i][i]=X+Y;
 }
 }
 
 printf("\n");
 for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){
 printf("%.1lf ", b[i][j]);
 }
 printf("\n");
 }
 
 }
 
 
 int main(){
 
 double a[MAX][MAX], b[MAX][MAX];
 int n;
 scanf("%d", &n);
 
 matrix_B(a, b, n);
 
 return 0;
 }
 */


/*
 -9ta zad od tie za vezbanje so dropkata
Да се имплементира рекурзивна функција која за низа од цели броеви $[a{0}, a{1}, ..., a_{n-1}]$ ќе ја пресмета вредноста на непрекинатата дропка дефинирана како:

𝑣=𝑎0+1𝑎1+...1𝑎𝑛−2+1𝑎𝑛−1

Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви (не повеќе од 100). Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.

Vlez:
50 50 8 43 32 29 4 23 26 17 16 30 16 20 42 41 24 36 27 38 43 22 10 27 14 48 21 20 40 36 13 10 28 33 3 8 3 6 49 23 23 12 31 37 33 12 47 32 42 16 1

Rezult:
50.124638
*/

/*
double Neprekinata_Dropka(int broj[100],int n){
    
    if(n==1){
        return broj[0]; //vraka 0 vo nizata
    }
    
    return broj[0] + 1.0 / Neprekinata_Dropka(broj+1 , n-1); //se zgolemuva za 1
    
}

int main(){
    
    int broj[100],n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &broj[i]);
    }
    
    double v = Neprekinata_Dropka(broj, n);
    printf("%lf", v);
    
    return 0;
}
*/

//4TA ZAD - ZA VEZBANJE
/*
Еден елемент од матрица ја дели матрицата на 4 квадранти (прикажани на сликата). Притоа самиот елемент кој ја дели матрицата припаѓа во четвртиот квадрант (-5 во примерот на сликата).
Од стандарден влез се внесува матрица со димензии NxM (1 <= N, M < 100). Потоа се внесуваат два броеви кои претставуваат индекси на еден елемент од матрицата.
Да се најдат сумите на секој од квадрантите и да се испечатат на стандарен излез. Притоа се печати сумата за првиот квадрант, па за вториот, па третиот и на крај за четвртиот. Доколку не може да се креира квадрант, тогаш за сумата на тој квадрант треба да се испечати 0
 
 Input      Result
 2 3        15 5 1 5
 5 7 8
 1 2 3
 1 1
 
*/

/*
void KvadrantiMatrica(int a[100][100], int n, int m){
    
    int indeks1,indeks2;
    int zbir1=0,zbir2=0,zbir3=0,zbir4=0;
    scanf("%d%d", &indeks1, &indeks2);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //site kombinacii od indeksi
            if(i<indeks1 && j<indeks2){
                zbir1+=a[i][j];
                }
            else if(i<indeks1 && j>=indeks2){
                zbir2+=a[i][j];
                }
            else if(i>=indeks1 && j<indeks2){
                zbir3+=a[i][j];
                }
            else if(i>=indeks1 && j>=indeks2){
                zbir4+=a[i][j];
                }
            }
        }
    
    printf("%d %d %d %d", zbir1, zbir2, zbir3, zbir4);
}

int main(){
    
    int a[100][100];
    int n,m,i,j;
    int indeks1, indeks2;
    
    scanf("%d%d", &n, &m);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            }
        }
    
    KvadrantiMatrica(a, n, m);
    
    return 0;
}
*/


//19 ZAD - ZA VEZBANJE
//ISTO KAKO TAA SO CEZAR - SIFRIRANJE
/*
 Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци. На почетокот на програмата се читаат два цели броеви:
 
 N - бројот на низи од знаци кои ќе се читаат и
 X - поместување.
 Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви (a-z, A-Z) се заменува со истата буква поместена X места понапред во азбуката (a-z). Ако се надмине опсегот на буквите во азбуката, се продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.
 
 Трансформацијата да се имплементира со посебна рекурзивна функција.
 
 Пример:
 Welcome -> трансформирано со поместување 5 -> Bjqhtrj
 
 Input
 3 5(x - za kolku mesta da se pomestat)
 Welcome to the Machine
 Another Brick in the Wall
 Shine on you crazy Diamond
 
 Output
 Bjqhtrj yt ymj Rfhmnsj
 Fstymjw Gwnhp ns ymj Bfqq
 Xmnsj ts dtz hwfed Infrtsi
 */

/*
void pomestuvanje(char *niza, int x){
    
    if(!*niza){ //ako ne e niza zavrsi
        return;
    }
    
    // if(niza[0]=='\0'){
    //     return;
    // }
    
    if(isalpha(*niza)){ //ako e alfanumericki znak, potocno ako e bukva
        char a = 'A'; //malata bukva da se zameni so ista ama golema
        char A= 'a'; //golemata bukva da e zameni so ista ama mala
        if(isupper(*niza)){ //ako e golema , zameni ja so golema
            a='A';
            *niza = a + (*niza + x - a)%26;
        }
        if(islower(*niza)){ //ako e mala, zameni ja so mala
            A='a';
            *niza = A + (*niza + x - A)%26;
        }
    }
    
    pomestuvanje(niza+1, x); //Se dvizi za edna bukva napred, pominuva niz cela niza
}

int main(){
    
    char niza[100];
    int n,x;
    scanf("%d%d\n",&n,&x);
    for(int i=0;i<n;i++){
        fgets(niza,100, stdin);
        niza[strlen(niza)-1]='\0';
        pomestuvanje(niza, x);
        printf("%s\n", niza);

    }
    
    return 0;
}
 */


//1-Dopolnitelni za Vezbanje
 
/*
Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), а секоја од нив не е подолга од 80 знаци.
Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром (се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак. Ако нема такви низи, се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.
Input                                       Output
5                                   AnothERString?gnirtSREhtonA
palindromemordnilap
AnothERString?gnirtSREhtonA
bananab
!randomodnar!
?strts?
 */

/*
int palindrom(char *a){
    
    int n=strlen(a);
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-i-1]){ //ako prviot znak e ist so posledniot, potocno ne e ist bidejki pocnuvame so negacija
            return 0; //posto ne e palindrom
        }
    }
    return 1;
}

int main(){
    
    char a[100], max_niza[100]; //moram dve nizi za da go kopiram vtoriot string vo vtorata niza
    int n, max=0, najden=0;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){ //poveke stringovi vnesuvam
       // fgets(a, 100, stdin);
        scanf("%s", a);
        if(palindrom(a)==1){ //ako e palindrom
            najden=1;//ako ja najdam nizata sto e max ja stavam na 1
            if(strlen(a)>max){ //ako goleminata na nizata e pogolema od max
                max=strlen(a); //max ja zimam za taa da bide najgolema niza
                strcpy(max_niza, a); //ja kopiram nizata vo max_niza;
            }
        }
    }
    if(najden==1){ //ako nasol BAREM edna niza sto e palindrom ispecati mi ja
        puts(max_niza);
    }
    else {
        printf("Nema!");
    }
    
    return 0;
}
*/


//12-ta - Dopolnitelna Vezbanje
/*
Во рамките на текстуална датотека matrica.txt се сместени елементите од една матрица (A), составена од природни броеви. Во првиот ред од датотеката се запишани бројот на редици N и бројот на колони M на матрицата (N, M < 100). Потоа, во секој ред од датотеката се запишани елементите од соодветната редица на матрицата.
За секоја редица, да се испечати индексот на редицата и бројот на штосни броеви во таа редица во формат indeks_na_redica: broj_na_stosni_broevi_vo_taa_redica (види тест пример).
Штосен број е број чија парност е иста со парноста на збирот од индексите на редицата и колоната на елементот.

Помош:
Штосен елемент: парноста на елементот Aij е иста со парноста на i + j
- ако i=11, j=21, а елементот Aij има вредност 14, тогаш тој е штосен број бидејќи 11 + 21 = 32 што е парен број, а и 14 е исто така парен број
 
 Input              Output
 4 5                0: 5
 0 1 2 3 4          1: 2
 6 6 7 7 8          3: 0
 11 22 21 24 13     3: 3
 0 1 21 4 21
 #
 
*/

/*
void wtf() {
    FILE *f = fopen("matrica.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

                //a se stava na kaj so treba matrica namesto a[100][100]
int Shtosen_Broj(int a, int i,int j){ //indeksi - i i j
    
    if(((a%2==0) && ((i+j)%2==0)) || ((a%2!=0) && ((i+j)%2!=0))){ //ako elementot vo nizata e paren i zbirot na indeksite e paren ILI elementot ne e paren i zbirot na indeksite e neparen
        
        return 1;
    }
    return 0;
}


int main(){
    
    wtf();
    FILE *f = fopen("matrica.txt", "r");
    
    int a[100][100];
    int n,m,indeks,brojac=0;
    fscanf(f,"%d %d", &n, &m);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fscanf(f, "%d", &a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        brojac=0;
        for(int j=0;j<m;j++){
            if(Shtosen_Broj(a[i][j], i, j)){
                brojac++; //broi stosni broevi
                indeks=i;//go bara indeksot na redicata
            }
            else{
                indeks=i;//mora da ja zaPAMti redicata duri i da ima 0 stosni broevi
            }
        }
        printf("%d: %d\n", indeks, brojac);
    }
    
    return 0;
}
*/

//16 ЗАД
/*
Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.
Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број. За секој од нив да се испечати максималната цифра во посебен ред
 Input      Output
 5128          8
 4126          6
 7258          8
 4000          4
 */

/*
int max_cifra(int n){
    
    if(n==0){
        return 0;
    }
    
    int cifra=n%10;
    
    int max = max_cifra(n/10);
    
    if(cifra>max){
        return cifra;
    }
    else {
        return max;
    }
    
}

int main(){
    
    int n;
    
    while(scanf("%d", &n)){
        printf("%d\n", max_cifra(n));
    }
    
    return 0;
}
*/



//7 ZAD
/*
Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата. Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица. Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот. Редоследот на запишување на елементите во низата одговара на редоследот на редиците.

Пример:
Влез:
3 6
 
1 2 2 3 4 5
1 1 2 2 3 3
1 2 3 4 5 6

Излез:
5 1 1
*/

//Oliver- RESENIE
/*
int main(){

    int n,m,broj,zbir=0;
    int a[100][100];
    

    scanf("%d %d", &n, &m);
    
    float b[m], max=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[i]+=a[i][j]; //smestuvam vo b niza
        }
        //delam so n, bidejki odi do n
        //zbirot na sekoj elemenet vo nizata go vmetnuvam vo nizata i go delam so brojot na elementi
        b[i]/=n; //gi sobira samo elementite posebno vo redicite
        //go delime so n zosto vika da se najde aritmeticka sredina, vo slucajot n ni kazuva kolku elementi ima vo redicata
    }

    for(int i=0;i<n;i++){
        max=0;
        broj=0;
        for(int j=0;j<m;j++){

            float razlika=b[i]-a[i][j]; //elementot od nizata ke go odzemam so sekoj element od matricata i od niv kego baram max
           
            if(fabs(razlika>max)){
                max=fabs(razlika);
                broj=a[i][j];
            }
        }
        printf("%d ", broj);
    }
   
    return 0;
}
*/



//Moe resenie
/*
int main(){

    int n,m,i,j;
    int a[100][100];
    float ars=0, razlika=0, max_razlika=0;

    scanf("%d %d", &n, &m);

    int b[m];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<n;i++){
        max_razlika=0;
        razlika=0;
        ars=0;
        for(j=0;j<m;j++)
            //b[i]+=a[i][j];
        ars+=a[i][j];
        ars/=n;
        //go delime so n zosto vika da se najde aritmeticka sredina, vo slucajot n ni kazuva kolku elementi ima vo redicata - odi do krajot

        for(j=0;j<m;j++){
            razlika=ars-a[i][j]; //elementot od nizata ke go odzemam so sekoj element od matricata i od niv kego baram max

            if(razlika<0){
            razlika=-razlika;
            }

            //baram max broj
            if(razlika>max_razlika){
                max_razlika=razlika;
                b[i]=a[i][j];
            }
        }
    }

    for(int i=0;i<n;i++)
            printf("%d ",b[i]);

    return 0;
}
*/


//14TA ZAD

/*Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50). Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата колона ќе ги префрли под N-тата редица, односно од матрица со димензија N редици и 2 * N колони ќе се добие матрица со 2 * N редици x N колони.

Пример за N=3
Влез
3
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18

Излез
1 2 3
7 8 9
13 14 15
4 5 6
10 11 12
16 17 18
*/

/*
void Matrix_2N(int A[MAX_N][MAX_N*2],int B[MAX_N][MAX_N*2], int N){
   
    
    for(int i=0;i<N;i++){//redicite N
        for(int j=0;j<N*2;j++){ //kolonite N*2
            B[i][j]=A[i][j];//transformira matricata od a vo b
            }
        }
    
    for(int i=0;i<N;i++){//redicite N
        for(int j=0;j<N*2;j++){ //kolonite N*2
            B[i][j]=A[i][j];//transformira matricata od a vo b
            B[i+N][j]=A[i][j+N]; //prvo gi dodava N elementite vo redicite vo B matricata,
            }
        }
    
    for(int i=0;i<N*2;i++){//redicite N*2
        for(int j=0;j<N;j++){ //kolonite N
            printf("%d ", B[i][j]);
            }
        printf("\n");
        }
}

int main(){

    int A[MAX_N][MAX_N*2], B[MAX_N][MAX_N*2];
    int N;
    scanf("%d", &N);
    
    for(int i=0;i<N;i++){//redicite N
        for(int j=0;j<N*2;j++){ //kolonite N*2
                scanf("%d", &A[i][j]);
            }
        }
    
    Matrix_2N(A, B, N);
}

*/



//9ta zad od dopolnitelnite za vezbanje
/*
Од стандарден влез се внесуваат непознат број на реченици претставени преку текстуални низи (стрингови) секоја не подолга од 100 знаци и секоја во нов ред. Програмата треба да го најде стрингот кој содржи најмногу сврзници и да го испечати заедно со бројот на најдените сврзници. За сврзници се сметаат сите зборови составени од една, две или три букви. Зборовите во текстуалната низа се одделени со едно или повеќе прзани места и/или интерпункциски знак.

Броењето на сврзници во дадена текстуална низа треба да се реализира во посебна функција. Решенијата без користење функција ќе бидат оценети со најмногу 40% од поените.

Ако има повеќе реченици со ист максимален број на сврзници, се печати прво најдената.

Објаснување на тест примерот:
Бројот на сврзници по реченици е 2, 3, 4, 2, 4 и 7 соодветно. Најмногу сврзници има по последната реченица па се печати бројот 7 и содржината на таа реченица.
 
 Input
 Svrznicite vo makedonskiot jazik se sluzbeni zborovi
 odnosno niv gi upotrebuvame za povrzuvanje oddelni zborovi
 vo ramkite na edna recenica ili poveḱe recenici vo edna slozena recenica.
 Pri povrzuvanjeto, svrznicite gi izrazuvaat odnosite megju zborovite
 ili megju recenicite, pa taka sprotiven odnos se iskazhuva so
 ama ili no, a usloven odnos so ako itn.
 
 Result
 7: ama ili no, a usloven odnos so ako itn.

*/
//
//int Svrznici(char *a){
//    
//    int brojac_svrznici=0;
//    int i;
//    
//    for(i=0;i<strlen(a);i++){
//        
//        if(isalpha(*(a+i))){
//            brojac_svrznici++;
//        }
//        
//        if(brojac_svrznici<=3){
//        }
//}
//
//
//int main(){
//    
//    char a[101];
//    char max[101];
//    int svrznik;
//    
//    while((fgets(a, 100, stdin))!=NULL){
//        a[strlen(a)-1]='\0';
//        
//        svrznik=Svrznici(a);
//        
//        
//    }
//    
//    return 0;
//}





//10ta - Dopolnitelni
/*
Во рамките на текстуална датотека matrica.txt се сместени елементите (целобројни вредности) од една матрица (A). Во првиот ред од датотеката се запишани бројот на редици n и бројот на колони m на матрицата (n, m < 120). Потоа, во секој ред од датотеката се запишани елементите од соодветната редица на матрицата.
Да се испечати колку индексни броеви има во секоја колона поединечно.

Индексен број е број чија вредност е идентична со вредноста што се добива со спојување на индексот од редицата и колоната на елементот.

Помош:
Индексен елемент: вредноста на елементот Aij е иста со ij како број
- ако i=10, j=31, елементот Aij треба да има вредност 1031 за да биде индексен број

Пример:

Влез: // датотека matrica.txt

4  5

0    1    2    3    4
5    6    7    8    9
10  21  22  23  11
0    1    2    33    4

Излез:
1
2
2
3
1

Објаснување:
Во матрицата A индексни елементи се:
1ва колона: 0
2ра колона: 1, 21
3та колона: 2, 22
4та колона: 3, 23, 33
5та колона: 4
*/



void wtf() {
    FILE *f = fopen("matrica.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int broj_cifri(int broj){
    
    int brojac=0;
    
    while(broj>0){ //delkam cifri
        broj/=10;
        brojac++; //gi brojam cifrite
    }
    return brojac;
}

int main() {
    
    wtf();
    
    FILE *f = fopen("matrica.txt", "r");
    
    int a[100][100],b[100];
    int n,m,brojac=0,broj,j;
    
    fscanf(f,"%d %d", &n, &m);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            fscanf(f,"%d", &a[i][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        //ako e 12 - ke go zeme brojot na cifri i ke go stai na kvadrat 10 i ke bide 10^2=100
        broj=pow(10, broj_cifri(i)); //ako ima 4 cifri, ke bide 10^4
        broj=i*broj; //broj na redovi * toj broj
        for(int j=0;j<n;j++){
            if(broj+j==a[i][j]){ //ako brojot plus kolonata e ednakov so elementot vo matricata
                b[j]++; //go dvizxam j deka se dvizi niz koloni
            }
        }
        printf("%d\n", b[j]);
    }
    
    
    
    return 0;
}
//da se doresi


/*
 6ta
Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100). На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0. Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.

Пример:

 1 1 1 0
 1 0 1 1
 1 0 0 1

1 ред + 1 колона = 2

For example:

Input                   Result
3 8                     5
0 0 1 1 1 0 0 0
1 1 1 0 1 1 1 0
0 1 1 1 1 0 0 1
*/


/*
int main() {
   
    int m, n;
    int a[MAX][MAX];
    int posledovatelni_edinici = 0, redovi_posledovatelni = 0, koloni_posledovatelni = 0;

    scanf("%d%d", &n, &m);
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    //Proveruva redovite dali ima 3 posledovatelni edinici
    for (int i = 0; i < n; i++) {
        int posledovatelni_edinici = 0;
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1) {
                posledovatelni_edinici++; //izbroj mi gi posledovatelnite edinici
                if (posledovatelni_edinici == 3) {
                    redovi_posledovatelni++; //ako ima 3 posledovatelni edinici vo redovite izbroj mi gi i i tie. Koga ke stignes do 3, break.
                    break;
                }
            } else {
                posledovatelni_edinici = 0;
            }
        }
    }
    
 //Proveruva kolonite
    for (int j = 0; j < m; j++) {
        int posledovatelni_edinici = 0;
        for (int i = 0; i < n; i++) {
            if (a[i][j] == 1) {
                posledovatelni_edinici++; //izbroj mi gi posledovatelnite edinici
                if (posledovatelni_edinici == 3) {
                    koloni_posledovatelni++; //ako ima 3 posledovatelni koloni vo redovite izbroj mi gi i i tie. Koga ke stignes do 3, break.
                    break;
                }
            } else {
                posledovatelni_edinici = 0;
            }
        }
    }

    printf("%d\n",redovi_posledovatelni+koloni_posledovatelni);
   

    return 0;
}
*/



//8ma za vezbanje
/*
Во дадена датотека dat.txt да се најде најдолгиот ред во кој има барем 2 цифри. На стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.

Пример.

Влез:
dat.txt:
    aaa123aa222aa2aaa23aaaaa22
    aaaaaaaaaaaa 23aaaa
    123 aaa aaa aaa aaa 12345 aaa aaa 2a

Излез:
    123 aaa aaa aaa aaa 12345 aaa aaa 2
 */

/*
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *f = fopen("dat.txt", "r");
    
    char a[100], max_red[100];
    int i, brojac_cifri=0, brojac_vkupno=0,max=0;
    int prva_cifra=0, posledna_cifra=0, znaci=0;
    int prva,prc,posc;
    
    while((fgets(a, 100, f))!=NULL){
        brojac_vkupno=0;
        brojac_cifri=0;
        
        prva=1;
        for(i=0;i<strlen(a);i++){
            if(isdigit(*(a+i))){
                if(prva){ //ako e prva cifra sto sej avuva
                    brojac_cifri++;
                    prva_cifra=i; //mi treba pozicijcija za pocetok na pecatenjeto
                    prva=0;
                }
                else {
                    brojac_cifri++;
                    posledna_cifra=i; //mi treba i poslednata pozicija za krajot
                }
            }
            brojac_vkupno++;
        }
        if(brojac_cifri>1 && brojac_vkupno>=max){
            max=brojac_vkupno;
            strcpy(max_red, a);
            prc=prva_cifra; //POCETOK I KRAJ NA CIFRITE, ZA PECATENJE
            posc=posledna_cifra;
        }
    }
    for(i=prc;i<posc;i++){
        printf("%c", max_red[i]); //Pecatenje na najdolgiot red, od prvata do poslednata cifra
    }
    fclose(f);
}
*/



//3ta ZAD - Dopolnitelni za vezbanje
//ne ispaga nitu eden test primer

/*
int main(){
    
    int n,i,j;
    scanf("%d", &n);
    
    if(n>=100){
        return 0;
    }
    
    char a[50];
    int brojac=0;
    
    for(i=0;i<n;i++){
        scanf("%s", a);//-2
        for(j=0;j<strlen(a)-2;j++){
            if(tolower(a[j])=='a' && a[j+1]=='1' && a[j+2]=='c'){
                brojac++;
            }
        }
        if(brojac>=2){
            for(j=0;j<strlen(a);j++){
                printf("%c", tolower(a[j]));
            }
            printf("\n");
        }
    }
   
    return 0;
}
*/


//2 ZAD
/*
Од тастатура се чита природен број N (N < 400).
Да се напише програма којашто формира квадратна матрица што ги содржи броевите од 1 до N по растечки редослед на следниот начин: во првата колона во правец од горе надолу, па продолжува во втората колона од долу нагоре, па продолжува во третата колона од горе надолу итн. Да се избере најмалата димензија на матрицата во која ќе ги собере сите броеви до N. Доколку има преостанати празни места, тие да се пополнат со нули.

Формираната матрица да се запише во датотека "shema.txt".

Пример.
Влез
22

Излез во датотеката "shema.txt"

1 10 11 20 21
2 9 12 19 22
3 8 13 18 0
4 7 14 17 0
5 6 15 16 0
*/

//FORMIRA MATRICA - NE E MATRICA

//fajl za printanje matrica

/*
void printFile() {
    FILE *f=fopen("shema.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main(){
    
    FILE *f=fopen("shema.txt","w");

    int a[100][100];
    int j,n,broj=1; //da trgne od 1
    int br_koloni;
    
    scanf("%d", &n);//vnesuvame broj na redovi i koloni
    br_koloni=ceil(sqrt(n)); //koren od n - bidejki koren od 22 e 4.6 i sakame da go zaokruzi na 5 i ke iskoristime ceil (tavanska) za da go zaokruzi brojot. Zimame ceil bidejki se 5 koloni i go barame toj broj
    
    for(int j=0;j<br_koloni;j++){ //odam po koloni
        if(j%2==0){ //ako kolonata mi e parna - gi zimam parnite koloni - 0, 2, 4
            for(int i=0;i<br_koloni;i++){
                if(broj<=n){ //ako ovoj broj=1 e pomal od 22-n
                    a[i][j]=broj; //stavi go brojot vo matricata i zgolemuvaj go
                    broj++;
                }
                else { //ako brojot ne e pomal od n
                    a[i][j]=0;//ispecati 0
                    broj++;//brojot seuste se zgolemuva
                }
            }
        }
        
        if(j%2!=0){ //ako kolonata mi e neparna - gi zimam neparnite koloni - 1, 3
            for(int i=br_koloni-1;i>=0;i--){ //trgnuvam od obratno, namaluvam ,bidejki opagaat, i so -1 se vrakam nanazad.
                if(broj<=n){ //ako ovoj broj=1 e pomal od 22-n
                    a[i][j]=broj; //stavi go vo matricata i zgolemuvaj go
                    broj++;
                }
                else { //ako brojot ne e pomal od n
                    a[i][j]=0;//ispecati 0
                    broj++;//brojot seuste se zgolemuva
                }
            }
        }
    }
    
    //odi do broj na koloni
    for(int i=0;i<br_koloni;i++){
        for(int j=0;j<br_koloni;j++){
            fprintf(f,"%d ", a[i][j]);
        }
        fprintf(f,"\n");
    }
    
    
    printFile();
    
    return 0;
}
*/



//4TA ZAD - DOPOLNITELNI
/*
Od tastatura se vnesuvaat dizmenzii m i n na matricata od celi broevi Amxn(0<m,n<30) i nejzinite elementi. Potoa se vnesuvaat dva celi broja r i k ( indeksi na redica/kolona od matricata t.e 0<=r<m i 0<=k<n.
Da se  napise programa koja ja transformira matricata A taka sto elementite  nad redicata r i LEVO od kolonata k se zamenuvvat so minimalnata vrednost od matricata A.
Novodobienata matrica da se zapise vo datotekata "matrica.txt"
 Input
m n: 4 6
 
r k: 2 3
 
1 2 3 4 5 1
2 9 4 5 1 3
4 5 6 7 3 2
1 2 3 3 2 8

levo od taa kolona i redica - 3 e k i 2 e r(levo od 3ta kolona i nad redicata r - potocno od 2 red gore.
0 1 2 3 - primer e ova
 
1 1 1 4 5 1
1 1 1 5 1 3
4 5 6 7 3 2
1 2 3 3 2 8
 
 site elementi levo od k -potocno od 4 i gore od r - fakticki goren lev agol
 
*/

void printFile() {
    FILE *f=fopen("matrica.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}


int main(){
    
    FILE *f=fopen("matrica.txt","w");

    int a[100][100];
    int n,m,i,j,r,k;
    int min=99999;
    
    scanf("%d %d", &n, &m);
    scanf("%d %d", &r, &k); //indeksi na redica i kolona
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    
    //tuka ke gi zameni broevite - zavisi koi broevi ke gi stavime kaj r i k
    //nad redicata i levo od kolonata - znaci pomalo od r i pomalo od k (i<r i<k)
    for(i=0;i<r;i++){
        for(j=0;j<k;j++){
            a[i][j]=min;
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            fprintf(f,"%d ", a[i][j]);
        }
        fprintf(f,"\n");
    }
    
    
    printFile();
    
    return 0;
}
