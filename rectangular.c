#include<stdio.h>

void dikdortgen(int enuz,int boyuz){
	
	char karakter=0;
	int j=0;
	int i=0;
	//önce sol üst köşeyi çiz
	karakter=218;//sol kose
	printf("%c",karakter);
	
    //üst kenarı(düz yatay çizgi) çiz
	karakter=196;//ust kenar
	for(i=0;i<enuz;i++){
		
	printf("%c",karakter);
		
		}

     //sağ üst köşeyi çiz   
	karakter=191;//sag kose
	printf("%c\n",karakter);
	
    //şimdi gövdeyi çiz
	for(i=0;i<boyuz;i++){//orta kisim
	
		karakter=179;//sol dik cizgi
	    printf("%c",karakter);
		
		karakter=32;//bosluk
	for(j=0;j<enuz;j++){	
	printf("%c",karakter);}
	
		karakter=179;//sag dik cizgi
	    printf("%c\n",karakter);
    }
	//alt kısımları çiz	
    //sol alt kenar çiz
	karakter=192;//sol kenar
	printf("%c",karakter);
		
		
	karakter=196;//alt yatay kenar
	for(i=0;i<enuz;i++){	
	printf("%c",karakter);}	

    //sağ alt kenarı çiz		
	karakter=217;//sag alt kose
	printf("%c\n",karakter);	
}
int main(){
	
	int enuz=0;
	int boyuz=0;
	
	printf("en ve uzunlugunu sirasiyla giriniz: ");
	scanf("%d %d",&enuz,&boyuz);
	
	printf("\n\n");
	
	dikdortgen(enuz, boyuz);
	
	return 0;
}
