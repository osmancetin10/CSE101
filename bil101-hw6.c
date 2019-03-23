     						/**********************************/
     						/*                                */
     						/*          Osman Çetin           */
     						/*           161044069            */
     						/*	       HW6-2              */
 						/*  	                          */
     						/**********************************/
#include <stdio.h>
int main(){
	/* Bu programın çalışma mantığı şu şekildedir. Bize bir menü sunar ve bu menü 3 seçeneklidir. Seçtiğimiz adıma göre gerekli işlemleri yapar.*/
	
	int tercih,i;
	i=0;
	while(i==0){/* while döngüsü kullanmamın sebebi 1. ve 2. seçeneğimden sonra menünün tekrar devam etmesini istememdir.*/
	printf("|---------------------------|\n");/*Bu ve altındak 5 satırda menümü tasarladım*/
	printf("|         MENU              |\n");
	printf("|1-Yıldızlardan elmas ciz   |\n");
	printf("|2-Ogrenci bilgisini goster |\n");
	printf("|0-Cikis                    |\n");
	printf("|---------------------------|\n");	                  
	printf("Seceneginiz:=>");		
	scanf("%d",&tercih);/*Burada kullanıcının yapmak istediği eylemi seçtik*/
		if(tercih==1){/*eğer birinci seçeneği yani elmas çizmek istiyorsa*/
				int yuksek,i,j,k,bosluk,yildiz,altbosluk,altyildiz,ust,alt;
				printf("yukseklik girin\n");/*öncelkle kullanıcıdan elmasın yüksekliğini istiyoruz*/
				scanf("%d",&yuksek);/* daha sonra girilen değeri yuksek integerne atıyoruz*/
				ust=(yuksek+1)/2;/*elmasımızı ki eşkenar üçgene bölüyoruz ve üst integeri büyük eşkenar üçgenimizin yüksekliği oluyor*/
				alt=yuksek-ust;/*alttak üçgenimizin yüksekliği */
				bosluk=ust-1;
				yildiz=1;
	
				for(i=0;i<ust;i++){/*üstteki eşkenar üçgenimizin yüksekliğini ayarlayacak döngümüz*/
					for(k=0;k<bosluk;k++){/*her satıra konulacak bosluğu belirleyecek döngümüz*/
						printf(" ");
					}
					for(j=0;j<yildiz;j++){/*her satırdaki yıldızı koyan döngümüz*/
						printf("*");
						}	
					bosluk--;/*döngümüz bir alt satıra geçtiğinde bosluk miktarını bir azaltır*/ 
					yildiz=yildiz+2;/*döngümüz bir alt satıra geçtiğinde yıldız sayısını iki artırır.*/
		
				printf("\n");/*alt satıra geçmeyi sağlayan komutumuz*/
				}
				
				altbosluk=1;
				altyildiz=(2*ust-3);
				for(i=0;i<alt;i++){/*alttaki eşkenar üçgenimizin yüksekliğini ayarlayacak döngümüz*/
	
					for(j=0;j<altbosluk;j++){/*her satıra konulacak bosluğu belirleyecek döngümüz*/
						printf(" ");
						}
	
					for(k=0;k<altyildiz;k++){/*her satırdaki yıldızı koyan döngümüz*/
						printf("*");
					}
					altbosluk++;/*her alt satıra geçerken boşluğumuzu bir artırır*/
					altyildiz=altyildiz-2;/*her alt satıra geçerken yıldızımızı iki azaltır*/
	
				printf("\n");
				}
			}
		else if(tercih==2){/*eğer kullanıcı ikinci seçeneği yani öğrenci bilgilerini görmek istiyorsa*/
			printf("Ad: <Osman>\n");/*bu ve aşağısındaki iki satırda öğrenci bilgilerini ekrana yazdırmak*/
			printf("Soyad: <Cetin>\n");			
			printf("Ogrenci No: <161044069>\n");
			}	
		else/*eğer kullanıcı programdan çıkmak istiyorsa*/
			
			i++;/* i integerini bir artırmamızın sebebi while döngüsünü tekrarlamamasını sağlamak*/
			
	}			
	return 0;
}
