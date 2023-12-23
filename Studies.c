
// 1-/*veri girişi]*/
#include<stdio.h>
#include<conio.h>
int a,b,c,d,e,f ;
int main()

{
        printf("Bir pozitif tamsayı giriniz...");
        scanf("%u",&a);
        printf("Bir boşluk bırakarak iki tam sayı giriniz...");
        scanf("%d %d",&b,&c);
        printf("Arada virgül koyarak iki tam sayı giriniz...=");
        scanf("%d,%d",&d,&e); f=a+b+c+d+e ;
        printf("\nGirilen sayıların toplamı %d dir",f );
        getch();return 0;
}
// 2-/*veri girişi int32_t */
#include<stdio.h>
#include<conio.h>
float a,b,c;
int main()
{
        printf("Bir ondalıklı sayı giriniz...");
        scanf("%f",&a);
        printf("Bir başka ondalıklı sayı giriniz...");
        scanf("%3f",&b); c=a+b ;printf("\n");
        printf("Girilen sayıların toplamı=%0.3f dir",c);
        getch();return 0;
}
// 3-/*veri girişi 3*/
#include<stdio.h>
#include<conio.h>
char k1[15],k2[25];
int main()
{
        printf("Bir kelime giriniz =>");
        scanf("%s",k1);
        printf("Bir başka kelime giriniz =>");
        scanf("%5s",k2);printf("\n");
        printf("Alınan birinci kelime= %s\n",k1);
        printf("Alınan ikinci kelime= %s",k2);
        getch();return 0;
}
// 4-/*veri girişi 3*/
#include<stdio.h>
#include<conio.h>
char k1[15],k2[25];
int main()
{
        int a,b,c;
        printf("Birinci sayıyı giriniz...");scanf("%d",&a);
        printf("İkinci sayıyı giriniz..."); scanf("%d",&b);
        printf("\n");
        c=a+b;printf("%d+%d=%d dir.",a,b,c);
        getch();return 0;
}
// 5-/*veri girişi 3*/
#include<stdio.h>
#include<conio.h>
int main()
{
        float p;
        printf("pi sayısını=%f\n",p);
        printf("pi sayısını=%3.44",p);
        printf("pi sayısını=%e\n",p);
        printf("pi sayısını=%+0.10e\n",p);
        printf("pi sayısını=% .3g\n",p);
        printf("pi sayısını=%E\n",p);
        getch();return 0;
}
// 6-/*veri girişi 3*/
#include<stdio.h>
#include<conio.h>
void main()
{
        int i,N;
        float t=0;
        printf("Çift sayıların üst sınırı:"); scanf("%u",&N);
        i=2;
        do
        {t+=i;i+=2;}
        while(i<=N);
        printf("\nSonuç=%0.0f",t);
        getch();
}
// 7-/*veri girişi 3*/
#include<stdio.h>
#include<conio.h>
int main()
{
        int i,N;
        float t=0;
        printf("üst sınırı giriniz:"); scanf("%u",&N);
        for(i=1;i<=N;i++) t+=i;
        printf("\nSonuç=%0.0f",t);
        getch();return 0 ;
}
// 8-/*veri girişi 3*/
#include<stdio.h>
#include<conio.h>
void main()
{
        int i,N;
        float t=0;
        printf("Tek sayıların üst sınırı:"); scanf("%u",&N);
        i=1;
        while(i>=N);
        {t+=i;i+=2;}
        printf("\nSonuç=%0.0f",t);
        getch();
}
// 9-/*veri girişi]*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Bir tamsayı giriniz =>");scanf("%d",&a);
    if(a>0) printf("Pozitif");
    else if (a<0) printf("Negatif");
    else printf("Sıfır");
    getch();return 0;
}
// 10-/*veri girişi]*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Notunuzunu Giriniz(1-5) =>");scanf("%d",&a);
    switch(a){
        case 1:{printf("Çok zayıf\n");break;}
        case 2:{printf("Zayıf\n");break;}
        case 3:{printf("Orta\n");break;}
        case 4:{printf("İyi\n");break;}
        case 5:{printf("Çok iyi\n");break;}
        default:{printf("Geçersiz not\n"); break;}
    }
    
    
    getch();return 0;
}
// 11-Klavyeden girilen N sayısına kadar tek sayılar.
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n;
    printf("Giriniz");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    if(i%1==0) 
    printf("%d\n",i);
}
   return 0;
}
// 12- Klavyeden girilen N sayısına kadar çift sayılar.
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n;
    printf("Giriniz");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    if(i%2==0) 
    printf("%d\n",i);
}
   return 0;
}
// 12-Klavyeden girilen N sayısına kadar bütün sayıları toplayan kod.
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,t=0;
    printf("Giriniz");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    t=t+i;
{
    if(i%1==0) 
    printf("Girilen değere kadar sayıların toplamı:%d\n",t);
}
   return 0;
}
// 13-Klavyeden girilen N sayısın faktöriyelini hesaplayan kod.
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,t=1;
    printf("Sayı giriniz.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    t=t*i;
{
    if(i%1==0) 
    printf("Girilen değerin faktöriyeli%d\n",t);
}
   return 0;
}
// 14-Aynı anda tek çift sayıları bulduran kodu.
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,T1=0,Tt=0,Tc=0,n;
    printf("Kaça Kadar Toplam Hesaplansın:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        T1=T1+i;
    }
    printf("\n");
    printf("Aralıktaki sayıların toplamı:%d\n",T1);
        
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            Tc=Tc+i;
        }
        else{
            Tt=Tt+i;
        }
    }
    printf("Aralıktaki Tek Sayıların toplamı: %d\n",Tt);
    printf("Aralıktaki çift Sayıların toplamı: %d\n",Tc);
    getch();
   return 0;
}
 

