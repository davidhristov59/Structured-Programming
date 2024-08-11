#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

/*Во дадена датотека “broevi.txt” се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во тој ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.
*/


/*
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int najznacaen_broj(int broj){
    
    while(broj>10){
        broj/=10;
    }
    
    return broj;
}

int main()
{
    wtf();
    FILE *f = fopen("broevi.txt", "r");

    int n,cifra,broj,max,max_cifra;
    
    while((fscanf(f, "%d", &n))!=EOF){
        
        if(n==0){
            break;
        }
        
        for(int i=0;i<n;i++){
            fscanf(f, "%d", &broj);
            
            if(i==0){
                max=broj;
                max_cifra=najznacaen_broj(broj);
            }
            
            if(najznacaen_broj(broj)>max_cifra){
                max_cifra=najznacaen_broj(broj);
                max=broj;
            }
        }
        
        printf("%d\n", max);
    }

    fclose(f);
}
*/


//Vtor Kolokvium sega i ispit januari 2021
/*Дадена е низа со броеви (позитивни и негативни). Ваша задача е да ја трансформирата така што позитивните броеви од низата ќе бидат од една страна, а негативните од друга.
Влез:
7
-2 5 0 1 5 -7 -4

Излез:
5 0 1 5 -2 -7 -4
*/

/*
void podredi_negativni(int a[100], int n){
    
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
    
    for(int i=0;i<n;i++){
        if(a[i]<0){
            printf("%d ", a[i]);
        }
        
    }
}

void podredi_pozitivni(int a[100], int n){
    
    int temp;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){ //opagacki redosled
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            printf("%d ", a[i]);
        }
    }
}
      
int main(){
    
    int a[100];
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
   
    podredi_pozitivni(a, n);
    podredi_negativni(a, n);
    
    return 0;
}
*/


//2 nacin
/*
void transformirana_niza(int a[100], int n){
    
    int temp1[100], temp2[100];//2 temp nizi za vo ednata da se vmetnat pozitivnite, a vo drugata negativnite broevi
    int i,k=0,j=0, pozitivni_broevi=0, negativni_broevi=0;
    
    for(i=0;i<n;i++){
        if(a[i]>=0){
            temp1[j++]=a[i];//stavi go vo nizata temp1 i zgolemi go j za narednata pozicija da se stavi nov broj, potocno dvii samo.
            pozitivni_broevi++; //zgolemi go brojacot za toa kolku pozitivni broevi se staveni vo nizata, potocno izbroj gi pozit. broevi
        }
        if(a[i]<0){
            temp2[k++]=a[i];//stavi go vo nizata temp2 i zgolemi go k za na narednata pozicija da se stavi nov broj
            negativni_broevi++; //zgolemi go brojacot za toa kolku negativni broevi se staveni vo nizata, potocno izbroj gi negativnite broevi
        }
    }
    
 //odime do granicata kolku pozitivni broevi ima vo novata temp niza
    for(int i=0;i<pozitivni_broevi;i++){
        printf("%d ", temp1[i]);
    }
    
    for(int i=0;i<negativni_broevi;i++){
        printf("%d ", temp2[i]);
    }
    
}

int main(){
    
    int a[100];
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    transformirana_niza(a, n);
    
    return 0;
}
*/

//3 nacin
/*
void transformirana_niza(int a[100], int n){
    
    int temp1[100], temp2[100];
    int i,k=0,j=0, pozitivni_broevi=0, negativni_broevi=0;
    
    for(i=0;i<n;i++){
        if(a[i]>=0){
            temp1[j]=a[i];
            j++;
            pozitivni_broevi++;
        }
        if(a[i]<0){
            temp2[k]=a[i];
            k++;
            negativni_broevi++;
        }
    }
    
    for(int i=0;i<pozitivni_broevi;i++){
        printf("%d ", temp1[i]);
    }
    
    for(int i=0;i<negativni_broevi;i++){
        printf("%d ", temp2[i]);
    }
    
}

int main(){
    
    int a[100];
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    transformirana_niza(a, n);
    
    return 0;
}
*/


/*
 Kolokviumska - ZAD 1
 
 Da se podredat broevite prvo neparni, pa parni-po golemina
 
input
10
12 3 7 90 5 1 13 900 125 8

Output:
900 90 12 8 1 3 5 7 13 125
*/

/*
void podredi_neparni(int a[100], int n){
    
    int temp;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){ //rastecki redosled
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){ //ispecati mi gi samo parnite
            printf("%d ", a[i]);
        }
        
    }
}

void podredi_parni(int a[100], int n){
    
    int temp;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){ //opagacki redosled
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        if(a[i]%2==0){ //ispecati mi gi samo parnite
            printf("%d ", a[i]);
        }
        
    }
}
      
int main(){
    
    int a[100];
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    podredi_parni(a, n);
    podredi_neparni(a, n);
    
    return 0;
}
*/

/*
 Kolokviumska ZAD 2
1. Niza so najmnogu 80 karakteri se vnesuva (bez prazni mesta) na primerot samo od bukvi bese
Da se pretvori taka sto prvi ke gi stavi golemite bukvi po red kako sto se pojavuvaat a potoa site mali i da se ispecati kako niza promeneto
input: - Ili da vneseme 1 i edna po edna da ja vneseme nizata, taka ke iskoci baraniot rezultat
3
as312&1AKLopscMK
LLPksOMwerPP
reaol123LOAsdePPOAsfaa

outupt:
312&1AKKLMacopss
LLMOPPPekrsw
123AALOOPPaaadeeflorss
 */

/*
void podredi_golemi(char *a){
    
    int n=strlen(a);
    char temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(isupper(*a)){
                if(*(a+i)>*(a+j)){
                    temp=*(a+i);
                    *(a+i)=*(a+j);
                    *(a+j)=temp;
                }
            }
        }
    }
    
}

void podredi_mali(char *a){
    
    int n=strlen(a);
    char temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(islower(a[i])){
                if(*(a+i)>*(a+j)){
                    temp=*(a+i);
                    *(a+i)=*(a+j);
                    *(a+j)=temp;
                }
            }
        }
    }
    
}


int main(){
    
    char a[100];
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%s", a);
    }
    
    podredi_mali(a);
    podredi_golemi(a);
    
    printf("%s\n", a);

    return 0;
}
*/



/*Да се напише функциjа за сортирање на низа од цели броеви. Потоа да се напише функциjа за споjување на две низи од цели броеви сортирани во растечки редослед. Оваа функциjа треба да ги смести веќе сортираните две низи во нова низа коjа ќе биде исто така сортирана во растечки редослед и НЕ СМЕЕ да ја повикува функциjата за сортирање.
 Input
 5
 10 62 39 76 53
 96 7 31 67 12
 
 Output
 7 10 12 31 39 53 62 67 76 96
 */

/*
void Sortiranje_Nizi(int *a, int n){
    
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

void Spojuvanje_Nizi(int *a, int *b, int*c,int n){
    
   int i=0,j=0,k=0;
    //i ke bide dvigatel za a[niza], j ke bide dvigatel za b[niza] i k ke bide dvigatel za c[niza]
    
    while(i<n && j<n){ //da odime do n so dvata dvigateli
        
        if(a[i]<b[j]){
            c[k]=a[i]; //ili c[k++]=a[i++]
            k++;
            i++;
        }
        else {
            c[k]=b[j]; //ili c[k++]=b[j++]
            k++;
            j++;
        }
    }
    
    while(i<n){ //dodadi gi site preostanati elementi od prvata niza vo novata niza
        c[k]=a[i];
        k++;
        i++;
    }
    
    while(j<n){//dodadi gi site preostanati elementi od vtorata niza vo novata niza
        c[k]=b[j];
        k++;
        j++;
        
    }
    
}

int main(){
    
    int a[100], b[100], c[100];
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    for(int i=0;i<n;i++){
        scanf("%d", &b[i]);
    }
    
    Sortiranje_Nizi(a, n);
    Sortiranje_Nizi(b, n); // i za b nizata se stava funkcijata, ne samo za a
    Spojuvanje_Nizi(a, b, c, n);
    
    for(int i=0;i<2*n;i++){ //do 2*n
        printf("%d ", c[i]);
    }
    
    return 0;
}

*/




/*Да се напише програма која за дадена тексутална датотека на екран ќе ги испечати
редните броеив на редовите во датотеката кои имаат повеќе од 20 цифри. Името на датотеката се задава како параметар од командна линија.
 23434534dfg2342353t34tdr34534
 fsdfgsf23sdfwe
 2343fg343t34f34t34t34g34
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

    char a[100];
    int n=strlen(a);
    int cifri=0, redovi=0,brojac=0,j=0;
    
    while((fgets(a, 100, f))!=NULL){
        brojac=0;
        for(int i=0;i<n;i++){
            if(isdigit(*(a+i))){
                brojac++;
            }
        }
        redovi++; //broi gi redovite
        if(brojac>20){ //ako ima poveke od 20 cifri
            a[j]=redovi; //vo novata niza
            j++; //dvigatel vo novata niza,
            cifri++; //broj mi gi cifrite
        }
    }
    
    for(int i=0;i<cifri;i++){
        printf("%d\n", a[i]);
    }
    
    fclose(f);
    
    return 0;
}
*/

/*
2. Datoteka se vnesuva tekst po poveke redovi ,
sekoj red se sostoi od zbor (od bukvi karakteri znaci bilosto)
treba od celiot tekst da go pecati vkupniot broj na
a) zborovi sto se sostaveni samo od bukvi i specijalen znak pr. a@b!   i
b) zborovite sto pocnuvaat so tri cifri i potoa mora barem edna bukva da imaat
input:
a!b!
12345
ab!22
123ab123

output
2
*/

/*
void wtf()
{
    FILE *f=fopen("input.txt" , "w");
    char c;
    while((c=getchar())!='#')
        fputc(c,f);
fclose(f);
}

int proverka_cifri(char *a){ //da proveri dali e cifra
    
    int i;
    int n=strlen(a);
    for(i=0;i<n;i++){
        if(isdigit(*(a+i))){
            return 0;
        }
    }
    return 1;

}

int tricifri_bukva(char *a){ //ako ima na pocetok 3 cifri
     
    int i;
    int n=strlen(a);
    for(i=0;i<n;i++){
        if(isdigit(a[0]) && isdigit(a[1]) && isdigit(a[2])){
            return 1;
        }
    }
    return 0;
}

int bukvi_spec_karakteri(char *a){
    
    int i;
    int n=strlen(a);
    for(i=0;i<n;i++){
        if(isalpha(*(a+i))){
            return 1;
        }
    }
    return 0;
    
}

int main(){
    
    wtf();
    FILE *f=fopen("input.txt" , "r");

    char a[100];
    int brojac=0;
    int n=strlen(a);
    
    while((fscanf(f, "%s", a))!=EOF){
        
        if(proverka_cifri(a)){
            brojac++;
        }
        if(tricifri_bukva(a)){
            if(bukvi_spec_karakteri(a)){
                brojac++;
            }
        }
    }
    
    printf("%d", brojac);
    
    fclose(f);
    
    return 0;
}
*/

/*
 Kolokviumska
Dadena e datoteka so ime "input.txt". Za sekoj red od datotekata na standarden izlez da se otpecatat informacii za brojot na bukvi i brojot na zborovi kako i samiot red. Zborovite se sostaveni od bukvi i cifri oddeleni so prazni mesta ili interpunkciski znaci.
Formatot na pecatenje e b,w:row - kade b e broj na bukvi, w e broj na zborovi a row e samiot red.
Redovite vo datotekata ne se podolgi od 100 znaci.
 
 INPUT
 You have been 123 in the pipeline
 Filling in time
 Provided with1 toys and scouting for boys
 You brought a guitar to punish your ma
 And you did not like school
 And you know you are nobody fool
 So welcome to the machine
 #
 OUTPUT:
 27, 7: You have been 123 in the pipeline
 13, 3: Filling in time
 35, 7: Provided withl toys and scouting for boys
 31, 8: You brought a guitar to punish your ma
 22, 6: And you did not like school
 26, 7: And you know you are nobody fool
 21, 5: So welcome to the machine
*/

/*
void wtf()
{
    FILE *f=fopen("input.txt" , "w");
    char c;
    while((c=getchar())!='#')
        fputc(c,f);
fclose(f);
}

int main(){
    
    wtf();
    FILE *f=fopen("input.txt" , "r");
    
    char a[100];
    
    while((fgets(a, 100, f))!=NULL){
        int brojac_bukvi=0, brojac_zborovi=0;
        int n=strlen(a);
        int Vo_Zbor=0;
        for(int i=0;i<n;i++){
            if(isalnum(*(a+i))){ //bukvi i broevi
                brojac_bukvi++; //ako e alfanumericki brojam bukvite
                if(Vo_Zbor==0){ //koga nema da bidam vo zborot ke e ednakvo na 0
                    Vo_Zbor=1; //koga ke bidam vo zborot ke bide ednkvo na 1
                    brojac_zborovi++; //koga sum VoZbor ke gi brojam zborovite
                }
            }
            else if(isspace(*(a+i))){ //ako dojdam do prazno mesto vo recenicata
                Vo_Zbor=0; //ne brojam, go stavam na 0
            }
        }
        printf("%d, %d: %s",brojac_bukvi, brojac_zborovi,a);
    
    }
    
    fclose(f);
    
    return 0;
}
*/

/*
Да се напише програма која во текстуалната датотека "text.txt" ќе го најде редот со најголема комплексност и ќе ја испечати на стандарден излез оваа комплексност, заедно за кој е пресметана. Комплексност на редот се пресметува
  како збир на ASCII кодовите на сите мали букви. Максималната должина на еден ред е 80 знаци.
 
 Input
 skajdaklsjd932djedne
 jfkdfnjsdbvjkawo2onwjekf2
 njdsfksdfhwufi\=
 #
 
 Output
 2460: jfkdfnjsdbvjkawo2onwjekf2
*/

/*
void wtf()
{
    FILE *f=fopen("input.txt" , "w");
    char c;
    while((c=getchar())!='#')
        fputc(c,f);
fclose(f);
}

int main(){
    
    wtf();
    FILE *f=fopen("input.txt" , "r");
    
    char a[100], b[100];
    int brojac_mali=0,max=0,zbir=0;
    
    while((fgets(a, 100, f))!=NULL){
        zbir=0;
        int n=strlen(a);
        for(int i=0;i<n;i++){
            if(a[i] >= 'a' && a[i] <= 'z'){ //se odi od a do z mali bidejki go bara ASCII kodot na malite bukvi
                zbir+=a[i]; //zbir na ASCII kodovoite na site mali bukvi
            }
            if(zbir>max){
                max=zbir;
                strcpy(b, a);
            }
        }
    }
    
    printf("%d: %s", max, b);
    
    fclose(f);
    
    return 0;
}
*/





/*
Да се напише програма која од дадена датотека “text.txt” ќе ги изброи зборовите кои почнуваат со голема буква и ќе го испечати нивниот број на екран. Зборовите се составени од алфанумерички знаци, меѓусебно одделени со празни места или специјални знаци.
 
Sample input:
Njutnov zakon, Sredingerova ravenka,
Fizika 1 i 2 A
 
Sample output:
4
 
*/


//da se debuggne

/*
void wtf() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main(){

    wtf();
    FILE *f = fopen("text.txt", "r");

    char a[100];
    int brojac_golema=0, Vo_Zbor=1;

    while((fgets(a, 100, f))!=NULL){
        int n=strlen(a);
        for(int i=0;i<n;i++){
            if(Vo_Zbor==1){
                if(isupper(*(a+i))){
                    brojac_golema++;
                    Vo_Zbor=0;
                }
            }
            if(isspace(*(a+i))){
                Vo_Zbor=1;
            }
        }
    }

    printf("%d\n", brojac_golema);

    fclose(f);


    return 0;
}
*/

//
//if(Vo_Zbor==0){ //koga nema da bidam vo zborot ke e ednakvo na 0
//    Vo_Zbor=1; //koga ke bidam vo zborot ke bide ednkvo na 1
//    brojac_zborovi++; //koga sum VoZbor ke gi brojam zborovite
//}
//}
//else if(isspace(*(a+i))){ //ako dojdam do prazno mesto vo recenicata
//Vo_Zbor=0; //ne brojam, go stavam na 0
//}
//}


//8 neresena - treba da se doresi

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
    
    int brojac_cifri=0,max_znaci=0;
    int prva_cifra=0,posledna_cifra=0;
    char niza[100], max_red[100];
    
    
    while((fgets(niza, 100, f))!=NULL){
        
        int dolzina_red=strlen(niza); //dolzinata na redot
        brojac_cifri=0;
        
        for(int i=0;i<strlen(niza);i++){
            if(isdigit(*(niza+i))){ //ako e cifra
                brojac_cifri++;
                if(brojac_cifri == 1){
                    prva_cifra=i; //pozicijata na prvata cifra se bara
                }
                posledna_cifra=i;//se bara pozicijata na poslednata cifra
            }
        }
        
        if(dolzina_red>max_red){
            max_red=dolzina_red;
            strcpy(max_red, niza);
        }
    }
    printf("%s", niza);
    
}
*/


/*
void printFile(){

    FILE *f=fopen("matrica.txt", "r"); //citame
    char line[100];
    while(!feof(f)){
        fgets(line, 100, f);
        if(feof(f))
            break;
        printf("%s", line);
    }
    fclose(f);
}

int main(){
        
  
    FILE *f=fopen("matrica.txt", "w");//pisuvame
    
    int a[100][100];
    int n,m,r,k, min=999999;
    scanf("%d%d", &n, &m);
    scanf("%d%d", &r, &k);
        
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    
    //tuka ke gi zameni broevite - zavisi koi broevi ke gi stavime kaj r i k
    //nad redicata i levo od kolonata - znaci pomalo od r i pomalo od k (i<r i<k)
    for(int i=0;i<r;i++){ //do r
        for(int j=0;j<k;j++){ //do k
            a[i][j]=min; //ke ja zameni vrednosta so min
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fprintf(f,"%d ", a[i][j]); //za printanje na matrica vo datoteka
        }
        fprintf(f,"\n");
    }
    
    printFile(); //na kraj se stava
    
    fclose(f);

    
    //Novodobienata matrica ke ja ispecati vo txt file - deka i izlezna
}
*/

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


/*
 7 - zad - dopolnitelni zad
Од стандарден влез се чита природен број N (N <= 100), како и низа a[ ] од N цели броеви.
Да се напише функција void premesti(а, n) која го преместува секој пронајден негативен број на крајот на низата. По преместувањето редоследот на позитивните броеви треба да остане ист како и во оригиналната низа, а истото важи и за редоследот на негативните. Нaпишете програма која ќе ја повика функцијата premesti за внесената низа a[ ] и потоа ќе ја испечати новодобиената низа.

Влез
9 // бројот N на елементи
1 3 -3 2 5 -7 9 0 3 // елементи на низата

Излез
1 3 2 5 0 3 -3 -7 -9 // добиената низа, после преместувањето
*/

/*
void premesti(int *a,int b[100],int n){
    
    int i,k=0;
    
    for(i=0;i<n;i++){
        if(a[i]>=0){
            b[k]=a[i];
            k++;
            }
        }
        
    for(i=0;i<n;i++){
        if(a[i]<0){
            b[k]=a[i];
            k++;
            }
        }
    
    for(i=0;i<k;i++){
        a[i]=b[i];
    }
    
}

int main(){
    
    int a[100], b[100];
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    premesti(a, b, n);
    
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
  
    return 0;
}
 */


/*
Да се напише рекурзивна функција obrati која како аргумент прима низа од n цели броеви, и по нејзиното завршување првичната низа ја „_преобратува_“ (секој член го заменува со бројот со спротивен знак и го менува редоследот на нејзините членови). На пример, низата 1, 4, -7, 5, 22, 9 ја претвора во низа -9, -22, -5, 7, -4, -1. (Дозволено е да се додадат дополнителни аргументи на функцијата!). Да се направи програма која од тастатура ќе прочита цел број n (0 < n < 100), и потоа уште n цели броеви – елементи на низата. Низата прво да се испечати на екран, потоа да се повика функцијата obrati за дадената низа и на крајот повторно да се испечати низата на екран.
 Input
 6
 1, 4, -7, 5, 22, 9
 
 Output
 -9, -22, -5, 7, -4, -1.
*/

/*
int obrati(int a[], int n){
    
    if(n==0){
        return 0;
    }
    
    if(a[n]>0){
        printf("%d ",  a[n-1]*(-1));
    }
    else {
        printf("%d ",  a[n-1]*(-1));
    }
    
    return obrati(a, n-1);
}

int main(){
    
    int a[100];
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    obrati(a, n);
    
    return 0;
}
*/

/*Niza so broevi da napravi transformacija kadesto elementite od prvata polovina ke se iskopiraat na mestoto na elementite od vtorata polovina. Dokolku nizata ima neparen broj na elementi, sredniot element ostanuva na istata pozicija.
Input                   Output
6
3 5 4 2 8 1            3 5 4 3 5 4
7
2 8 7 6 5 3 4          2 8 7 6 2 8 7
 
 */

/*
void Premesti(int *a, int n){

    for(int i=0;i<n/2;i++){
        (*(a+i+(n+1)/2))=*(a+i);
    }
    
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    
}
int main(){
    
    int a[100];
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    Premesti(a, n);

    
    return 0;
}
*/

/*
Да се напише рекурзивна функција prevrti која како аргумент прима низа од n цели броеви, и по нејзиното завршување првичната низа ја _„превртува“_ (го менува редоследот на нејзините членови). На пример, низата 1, 4, 7, 5, -22, 9 ја претвора во низа 9, -22, 5, 7, 4, 1. (Дозволено е да се додадат дополнителни аргументи на функцијата!). Да се направи програма која од тастатура ќе прочита цел број n (0 < n < 100), и потоа уште n цели броеви – елементи на низата. Низата прво да се испечати на екран, потоа да се повика функцијата prevrti за дадената низа и на крајот повторно да се испечати низата на екран.
 
 Input                          Output
 1, 4, 7, 5, -22, 9           9, -22, 5, 7, 4, 1
 
*/

/*
void prevrti(int a[], int n){
    
    if(n==0){
        return;
                
    }
    
   printf("%d ", a[n-1]);

    prevrti(a, n-1);
}

int main(){
    
    int a[100];
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
            
    prevrti(a, n);
    
    return 0;
}
*/

//5 zad dopolnitelni
/*
Еден елемент се заматува ако се најде аритметичка средина на елементот и сите негови соседи. Сосед на еден елемент се сите елементи кои припаѓаат на матрицата и се  околу истиот елемент (хоризонтално, вертикално и дијагонално).

Во датотеката input.txt е сместена матрица од реални броеви (3 < n,m < 50). Во првиот ред се дефинирани бројот на редици и колони на матрицата и во секој преостанат ред е внесен еден ред од матрицата (види пример).По читањето на матрицата, од стандарден влез се внесуваат и 2 пара координати на матрицата (ред и колона) кои го репрезентираат горниот-лев и долниот-десен елемент од регионот. Потребно е да генеирате нова матрица во која ќе ги заматите сите елементи кои припаѓаат на регионот.
Новодобиената матрица, во истиот формат, треба да се запише во датотеката output.txt.

Пример:
датотека: input.txt

3 4
1.00 2.00 3.00 4.00
5.00 6.00 7.00 8.00
9.00 0.00 1.00 2.00
0 1
2 2
 
Резултат:

датотека: output.txt
3 4
1.00 4.00 5.00 4.00
5.00 3.78 3.67 8.00
9.00 4.67 4.00 2.00
*/

/*
void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

void wtf() {
    FILE *f = fopen("output.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main(){
    wtf();
    
    FILE *f1=fopen("input.txt","r");
    FILE *f2=fopen("output.txt","w");

    int n,m;
    float a[50][50],b[50][50]; //kreiram nova matrica - bidejki vika vo dobienata matrica, sosema druga matrica treba da se dobie.
    int pocetok_i,kraj_i,pocetok_j,kraj_j;
    
    int brojac=1; //go stavam na 1 deka gi delam
    
    int gore_levo=0, gore_desno=0, dole_levo=0, dole_desno=0, desno=0,levo=0,gore=0,dole=0; //site mozni sosedi na matrica gi stavam
    
    fscanf(f1,"%d %d", &n, &m); //sve praime vo f1 - input deka e
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fscanf(f1,"%f", &a[i][j]);
        }
    }
    
    //vo b[i][j] stavi go a[i][j] - da se kopiraat i drugite elementi koi se nadvor od dole vnesenite pocetok i kraj
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[i][j]=a[i][j];
        }
    }
    
    //vnesuvam OD KAJ DO KAJ da se zamenat sosedite so nivnata aritmeticka sredina.
    fscanf(f1, "%d %d", &pocetok_i, &pocetok_j);
    fscanf(f1, "%d %d", &kraj_i, &kraj_j);

    //se bara da se trgne od elementite od pocetokot do krajot, taka da ke gi staime vo ciklusite od kaj da pocne i do kaj da odi
    //vo sredina regionot
    for(int i=pocetok_i;i<=kraj_i;i++){ //i kraj_i se broi
        for(int j=pocetok_j;j<=kraj_j;j++){ //i kraj_j se broi
            brojac=1;
            //site na 0 gi vrakam
//            gore_levo=0, gore_desno=0, dole_levo=0, dole_desno=0, desno=0,levo=0,gore=0,dole=0;
            
            //soberi gi site sosedi
            
            if(j-1>=0){ //levo elementot
                levo+=a[i][j-1];
                brojac++;
            }
            if(j+1<=m-1){ //desno elementot
                desno+=a[i][j+1];
                brojac++;
            }
            if(i-1>=0){ //gore elementot
                gore+=a[i-1][j];
                brojac++;
            }
            if(i+1<=n-1){ //dole elementot
                dole+=a[i+1][j];
                brojac++;
            }
            if(i-1>=0 && j-1>=0){ //gore levo elementot
                gore_levo+=a[i-1][j-1];
                brojac++;
            }
            if(i-1>=0 && j+1<=m-1){ //gore desno elementot
                gore_desno+=a[i-1][j+1];
                brojac++;
            }
            if(i+1<=n-1 && j+1<=m-1){ //dole desno elementot
                dole_desno+=a[i+1][j+1];
                brojac++;
            }
            if(i+1<=n-1 && j-1>=0){ //dole levo elementot
                dole_levo+=a[i+1][j-1];
                brojac++;
            }
            b[i][j]=(a[i][j]+desno+levo+gore+dole+gore_levo+gore_desno+dole_levo+dole_desno)/brojac; //vo b matricata ke gi soberam site elementi i ke gi podelam so vkupniot broj na brojaci
        }
    }
    
    //za printanje vo drug fajl obavezno f2 da se koristi
    
    fprintf(f2, "%d %d\n", n, m);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fprintf(f2, "%.2f ", b[i][j]);
        }
        fprintf(f2, "\n");
    }
    
    printFile();

    return 0;
}
*/


//ISPITNA OD LANI - treba da se doresi
/*
Од стандарден влез се вчитува бро х ко може да има вредности помегу 1 и 10 ( 1<=х <=10).
Потоа, од стандарден влез се внесува низа од цели броеви (максимум 100).
Програмата треба да ги испечати (во опагачки редослед според големината) сите броеви од низата чи броj на различни цифри е еднаков на броот х.
Наогаето на броот на различни цифри за даден бро треба да се реализира во посебна функциа. Решениата без користее функциа ке бидат оценети со назмногу 40% од поените.
Пример:
Влез:
4
10
99
190
10100
5931
1232
999
1231
9999
1234567
2342421

Излез:
2342421
5931
Обіаснуване: од внесените броеви, само 5931 и 2342421 имаат 4 различни цифри. Се печатат во опабачки редослед.
*/

/*
int Razlicen_Broj_Cifri(int broj, int x){ //barame broj na razlicni cifri kolku sto sme vnele x - pr. x=4, 5931 ke bide ispecaten deka se pecati brojot na razlicni cifri
    
    int brojac=0, i=0, j=0, duplikati=0; //i = vestacki broj
    int niza[10]; //gi stavam vo niza, za da gi socuvam
    
    while(broj>0){
        niza[i]=broj%10; //sekoja cifra od brojot, cifrata ja smestuvam vo nizata
        i++; //go dvizam
        brojac++; //brojam kolku pati go imam smesteno vo nizata
        broj/=10;
    }
    
    for(i=0;i<=brojac;i++){
        for(j=i+1;j<brojac;j++){
            if(niza[i]==niza[j]){
                i++;
                duplikati++;
            }
        }
    }
    if((brojac-duplikati)==x){ //ako vkupniot broj na cifri - duplikati mi e ednakov na x
        return 1;
    }
    else {
        return 0;
    }
}


void sort(int a[100], int n){
    
    int temp=0;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
}

int main(){
    
    int x,n,i=0,j=0;
    int a[100], b[100];
    
    scanf("%d", &x);
    if(x>=1 && x<=10){
        scanf("%d", &n);
        for(i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
    }
    
    if(Razlicen_Broj_Cifri(a[i], x)){
        b[j]=a[i];
        j++;
    }
    
    sort(a, n);
    
    for(i=0;i<n;i++){
        printf("%d ", b[i]);
    }

    return 0;
}
*/


//6ta - DOPOLNITELNI ZAD ZA VEZBANJE - NIZA
/*
Од стандарден влез се чита природен број N (N <= 100), како и низа од позитивни цели броеви a[ ] со N елементи.

Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во низата кој се појавува парен број пати во низата. Доколку нема таков елемент, функцијата враќа вредност 0.

Напишете програма што ќе ја повика функцијата par за внесената низа a[ ] и ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[ ].

Пример 1.

Влез
12 // бројот N на елементи
1 3 4 5 3 1 4 5 5 3 2 3 // елементи на низата

Излез
Najmaliot element koj se pojavuva paren broj pati e 1 // овде функцијата par враќа вредност 1, а се печати оваа порака

Primer 2
Влез
12 // бројот N на елементи
7 3 4 5 3 8 4 5 5 3 2 6 // елементи на низата

Излез
Nitu eden element ne se pojavuva paren broj pati! // овде функцијата par враќа вредност 0, се печати оваа порака
*/

/*
int par(int a[100], int n){

    int i,j,brojac=0,min=99999;
    for(i=0;i<n;i++){
        brojac=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){ //ako edniot element(i) e ist so drugiot(j), se povtoruva
                brojac++;
            }
        }
        if(brojac%2==0){ //se pojavuva paren broj pati
            if(a[i]<min){ //da se
 e najmaliot element vo nizata
                min=a[i];
            }
        }        
    }
    if(min!=99999){ //ako ne dojde do 99999
    return min;
    }
    else {
        return 0;
    }
}

    int main(){
        
        int n,i,j;
        int a[100];
        scanf("%d", &n);
        
        for(i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
        
        int min_element=par(a, n); //na nekoja promenliva davame vrednost - funkcijata

        if(min_element!=0){
            printf("Najmaliot element koj se pojavuva paren broj pati e %d\n", min_element);
        }
        else {
            printf("Nitu eden element ne se pojavuva paren broj pati!\n");
        }
        
    return 0;
}
*/

//17ta zad - ZAD ZA VEZBANJE

/*Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата. Да се трансформира матрицата така што средниот елемент во секоја редица ќе се замени со разликата (по апсолутна вредност) на сумата на елементите во првата половина од редицата и сумата на елементите во втората половина на редицата. Ако матрицата има парен број колони, се менува вредноста на средните два елемента. Средниот/те елемент/и влегува/ат во сумите (при непарен број на колони, средниот елемент влегува во двете суми!). Да се испечати на екран променетата матрица.

Пример.

Влез:

m = 4
n = 4

1 3 -5 4
2 10 2 10
7 2 3 5
3 2 10 3

Излез:
1 5 5 4
2 0 0 10
7 1 1 5
3 8 8 3
*/

/*
void Matrix(int a[100][100],int b[100][100],int n, int m){
    
    int zbir_leva_polovina=0, zbir_desna_polovina=0;
    int i,j;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[i][j]=a[i][j];
        }
    }
    
    for(i=0;i<n;i++){
        zbir_desna_polovina=0;
        zbir_leva_polovina=0;
        for(j=0;j<m/2;j++){
            zbir_leva_polovina+=a[i][j];
        }
        for(j=m/2;j<m;j++){
            zbir_desna_polovina+=a[i][j];
        }
        //(n%2==0)
        if(m%2==0){ //ako redicata e parna
            //levata polovina sto sme ja sobrale ja odzemame od desnata
           
            b[i][m/2-1]=abs(zbir_leva_polovina-zbir_desna_polovina);
            b[i][m/2]=abs(zbir_leva_polovina-zbir_desna_polovina);
        }
        else {
          b[i][m/2]=abs(zbir_leva_polovina-zbir_desna_polovina)+a[i][m/2];
        }
    }
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
    scanf("%d%d", &n,&m);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    Matrix(a, b, n, m);
    
    return 0;
}
*/


/*Да се напише програма коа работи со датотеки. Програмата како аргументи од командні
добива две датотеки (влезна и излезна). Првата редица од влезната датотека j има дол на низата, додека пак втората редица j има самата низа од знаци. Програмата треба да п дали корисникот внел влезна и излезна датотека (доколку нема внесено поавува по грешка). Потоа треба да се измине низата од влезната датотека и да се провери колку па исти букви има една до друга. Паровите од букви може да бидат преклопувачки. Вкупни на парови се запишува во излезната датотека.
Пример:
Влезна датотека: in.txt -> 36                 //ss dva pati broi
Jaas polaggam ssstrukturirano pprog. - aa, gg, ss, ss, pp
Излезна датотека: out.txt-> 5
*/

/*
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void printFile(){

    FILE *f=fopen("output.txt", "r");
    char line[100];
    while(!feof(f)){
        fgets(line, 100, f);
        if(feof(f))
            break;
        printf("%s", line);
    }
    fclose(f);
}

int main(){
    wtf();
    
    FILE *f1 = fopen("input.txt", "r");
    FILE *f2=fopen("output.txt", "w");
 
    char bukva,prethodna_bukva;
    int brojac_parovi=0;
    
    while((bukva=fgetc(f1))!=EOF){
        
        if(bukva==prethodna_bukva){ //ako se isti bukvite, potocno ako se par, izbroj mi gi
            brojac_parovi++;
        }
        prethodna_bukva=bukva; //broi i posledovatelnata bukva ako e ista so prethodnata

    }
    
    printf("%d\n", brojac_parovi);
    
    printFile();
    
    return 0;
}
*/
 

//ODNOS NA SAMOGLASKI I SOGLASKI
 /*
Да се напише програма код за дадена текстуална датотека, чие име се внесува како аргумент од командна линиа, ке го пресмета и испечати на си огносот на самогласките и согласките во секоj збор од датотеката како и вкупниот броj на зbорови во неа. Зборовите се составени од букви и мегусебно се одделени со една или повеке цифри, специални знаци или празни mesta.
Влез:
Odnos na soglaski
I samoglaski

Излез:
Odnos - 2: 3 na - 1: 1 soglaski - 3 : 5 l - 1: 0 samoglaski - 4 : 6
Vkupno zborovi: 5
*/

/*
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void SoglaskiSamoglaskiOdnos(char *zbor){
    
    int brojac_samoglaski=0, brojac_soglaski=0;
    
    while(*zbor){
        
        *zbor=tolower(*zbor);
        
        if(*zbor=='a' || *zbor=='e' || *zbor=='i' || *zbor=='o' || *zbor=='u'){
            brojac_samoglaski++;
        }
        else {
            brojac_soglaski++;
        }
        zbor++;
    }
    printf("- %d : %d\n",brojac_samoglaski, brojac_soglaski);
}

int main(){
    
    wtf();
    
    FILE *f = fopen("dat.txt", "r");

    char zbor[100];
    int brojac_zborovi=0;
    
    while(fscanf(f, "%s ", zbor)!=EOF){
        
        printf("%s ", zbor);
        brojac_zborovi++;
        
        SoglaskiSamoglaskiOdnos(zbor);
    }
    
    printf("Vkupno zborovi: %d\n", brojac_zborovi);
    
    return 0;
}
*/



//Ispitna - FEIT
/*
1.Да се напише функција која како аргументи добива низа од цели броеви и должина на низата. Функцијата треба да провери дали секој елемент од низата Х го има Х-пати во низата. На пример: елементот 2, треба да го има 2 пати во низата, елементот 5, треба да го има 5 пати во низата. Да се земе во предвид дека Х појавувања на елементот Х, не мора да се последователни. Низата е составена само од позитивни броеви поголеми од нула. Доколку низата не е составена одпозитивни броеви поголеми од нула, тогаш функцијата враќа -1. Доколку низата не го исполнува условот (Х пати појавување на елементот Х, притоа ова треба да важи за секој елемент во низата), тогаш функцијата враќа 0. Доколку е исполнет условот, функцијата враќа 1.
Пример:
int niza={2, 4, 2, 4, 3, 3, 3, 4, 1, 4}; функцијата враќа 1.
int niza2={2, 4, 2, 4, 3, 3, 3, 4, -6, 4}; функцијата враќа -1
*/

/*
int func(int *a, int n){
    
    int i,j,brojac=0;
    
    //sporedba na element - ciklus vo ciklus
    for(i=0;i<n;i++){
        brojac=0;
        for(j=0;j<n;j++){
            if(a[j]<=0){ //bilo koj element sto e nadvor od 0 ke break-ne
                return -1; //prvo negacija zosto ne treba mnogu dokazuvanje vo negacija
                break;
            }
            if(a[i]==a[j]){
                brojac++;
            }
        }
        
        //ako dadeniot element - primer 2 go nema 2 pati
        if(brojac!=a[i]){ //ako brojacot ne mi e ednakov so elementot
            return 0;
            break;
        }
    }
    
    return 1;
}

int main(){
    
    int a[100];
    int i,n;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    int broj = func(a, n);
 
    printf("%d\n", broj);
    
    return 0;
}
*/

/*
void brisenje(int *a, int n, int pozicija_brisenje){
    
    int i,j;
    
    //brisenje na elementi
    for(i=pozicija_brisenje;i<n;i++){
        a[i]=a[i+1];
    }
    //n--;
    
}

int func(int *a, int n){
    
    int i,j,brojac=0;
    
    for(i=0;i<n;i++){
        brojac=0;
        for(j=i;j<n;j++){ //i e pozcijata na toj sto sakam da go izbrisam
            
            if(a[i]==-a[j] && a[i]!=0){ //elementot se brise koga e ist element so drugiot i koga ne e 0
                brisenje(a, n, i); //i se stava zosto go brisam pozitivniot broj
                brojac++;
                brisenje(a, n, j-1); //se brise i negoviot negativen element
                brojac++;
            }
        }
    }
    
    return brojac; //vraka kolku elementi izbrisav
}

int main(){
    
    int a[100];
    int i,n;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    int broj = func(a, n);
 
    printf("%d\n", broj);
    
    for(i=0;i<n-broj;i++){ //za da se namali za tolku broevi
        printf("%d ", a[i]);
    }
    return 0;
}
*/


//SEPTEMVRI ISPIT
/*
Од стандарден влез се внесува низа од природни броеви. Прво се внесува броот на броеви што ке се внесат (3<=N<=100), а потоа и елементите на низата.
Да се напише програма што ке го отпечати наголемиот елемент во низата за ко важи дека елементот што се наоѓа пред него и по него во низата има вредност помала од неговата. Ако во низата ниту еден елемент не го задоволува условот, се печати порака:
"No element match the criteria".
Наоѓањето на наголемиот елемент во низата што го задоволува дадениот услов треба да се реализира со посебна функциа.
Решенизата без користене функциа ке бидат оценети со намногу 40% од поените.
Пример:
Влез
13
5 7 11 50 6 8 77 33 1 3 2 100 101
Излез
77
 
• Во овој пример следниве елементи го задоволуваат условот:
50 (11<50 и 50>6)
77 (8<77 и 77>33)
3 (1<3 и 3>2)
100 не го задоволува бараниот услов
Наголем од броевите 50, 77 и 3 е 77
*/

/*
int func(int *a, int n){
    
    int max=0,i;
    
    for(i=0;i<n-1;i++){ //stavame n-1 bidejki ni trebaat elementi sto imaat prethoden element
        if(a[i-1]<a[i] && a[i+1]<a[i]){
            if(a[i]>max){
                max=a[i];
            }
        }
    }
    return max;
}

int main(){
    
    int a[100];
    int i,n;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
   
    int broj = func(a, n);
    
    if(broj==0){ //ako e 0 i ne go ispolnuva uslovot
        printf("No element match the criteria\n");
        return 0;
    }
    
    printf("%d\n", broj);
    
    return 0;
}
*/

/*
Vo niza broevite koi se naogaat na pozciija 2i i 2i+1 se neparni da si gi zamenat mestata(poziciite) i da se ispecati izmenentata niza.
Input
16
1 5 13 8 11 65 18 27 19 21 31 36 22 7 17 84

Output
5 1 13 8 65 11 18 27 21 19 31 36 22 7 17 84
*/

/*
void niza(int *a, int n){
    
    int i, temp;
    for(i=0;i<(n+1)/2;i++){
        if((*(a+i*2)%2!=0) && (*(a+i*2+1)%2!=0)){ //spored dadenoto
            temp=(*(a+i*2));
            *(a+i*2)=*(a+i*2+1);
            *(a+i*2+1)=temp;
        }
    }
    
}

int main(){
    
    
    int n,i;
    int a[100];
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    niza(a, n);
    
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    
    
    return 0;
}
*/


//Funkciska programa koja vraka 1 ako zbirot na elementite od neparnite pozicii e pogolem od zbirot na elementite od parnite pozcii, gledajki ODDESNO NALEVO, a vo sprotivno vraka 0
/*
9
2 4 8 7 5 7 8 4 2

//neparni  poz      //parni poz
2 + 8 + 5 + 8 + 2 > 4 + 7 + 7 + 4
 */

/*
int niza(int *a, int n){
    
    int zbir_parni=0,zbir_neparni=0,i;
    
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            zbir_parni+=(*(a+n-1-i)); //gledajki oddesno nalevo
        }
        else {
            zbir_neparni+=(*(a+n-1-i));
        }
    }
    if(zbir_neparni>zbir_parni){
        return 1;
    }
    else {
        return 0;
    }
}


int main(){
    
    
    int n,i;
    int a[100];
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    if(niza(a, n)){
        printf("DA\n");
    }
    else{
        printf("NE\n");
    }
    
    return 0;
}
*/



/*Дадени се две низи со ист број на елементи во чии полиња се сместува злато во килограми. Во првата низа максималната количина
на злато што може да се смести во секое поле е 500 килограми, додека во втората е неограничено. Напишете функција која ги заменува
килограмите од првата и втората низа (елементите на исти позиции) ако во елементот во првата низа има повеќе од 500 кг., а елементот
во втората низа помалку од 500 кг. Ако во двата соодветни елементи има повеќе од 500 кг. тогаш златото во елементот од првата низа се
 уништува (се запишува нула). Задачата да се реши со покажувачи.
Пример:
За низите 100 501 600 и 200 300 700 треба да се испечатат низите 100 300 0 и 200 501 700.
 
Sample input
5
33 48 567 589 123
0 0 0 0 0
 
Sample output
33 48 0 0 123
0 0 567 589 0
*/

/*
void zamena(int *a, int *b, int n){
    
    int i, temp;
    
    for(i=0;i<n;i++){
        
        if(*a>500 && *b>=500){
            *a=0; //dokolku vo poleto vo prvata niza ima poveke od 500kg
        }
        else { //ako b ima pomalku od 500
            temp=*a;
            *a=*b;
            *b=temp;
        }
    }
    
}

int main (){
    
    int n;
    int a[100],b[100];
    int i;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    
    zamena(a, b, n);
    
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    
}
*/


/*
Од тастатура се внесува низа од целоброни елементи со должина N ( N <= 100 ).
Да се трансформира низата на то начин што ако тековниот елемент е делив со неговиот следбеник, истиот да се постави на 0, а следбеникот да се дуплира. После
трансформациіата да се преуреди низата, така што сите 0-ли треба да се пренесат на почетокот на низата мебутоа запазуваіки го редоследот на останатите елементи.
Испечатете ги елементите на трансформираната низа во еден ред на стандарден изл разделени со празно место.
Трансформациата на низата и преуредуваето на елементите да се направат во посебни функции.
 
 Input
 6
 2 2 3 4 8 8
 
 Output
 0 0 4 3 4 16
*/

//netocna
/*
void niza(int *a,int *b, int n){
    
    int i, nuli=0;
    int flag=0;
    for(i=0;i<n-1;i++){
        if(a[i]%a[i+1]==0){ //елемент е делив со неговиот следбеник
            b[i]=0; //истиот да се постави на 0
            nuli++;
            b[i+1]=2*b[i+1]; //da se duplira
        }
        else {
            if(flag==0){
                b[i]=a[i];
                b[i+1]=a[i+1];
            }
            flag=0;
        }
    }
    for(i=0;i<nuli;i++){
        printf("0 ");
    }
        for(i=0;i<n;i++)
        {
            if(b[i]!=0)
                printf("%d " , b[i]);
        }
}

int main(){
    
    int a[100], b[100];
    int n,i;
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    niza(a, b, n);
    
    return 0;
}
*/


//18 ZAD

