#include<stdio.h>
#include<stdlib.h>
 
struct Node{
	int data;
	struct Node *sonraki;
};

struct Node* ilk=NULL;

void BasaEkle(int veri){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){
		ilk=yeni;
	}
	else{
		yeni->sonraki=ilk;
		ilk=yeni;
	}
}

void SonaEkle(int veri){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){
		ilk=yeni;
	}
	else{
		struct Node* gecici=ilk;
		while(gecici->sonraki!=NULL){
			gecici->sonraki;
		}
		gecici->sonraki=yeni
	}
}

void ArayaEkle(int veri,int aranan){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){
		ilk=yeni;
	}
	else{
		struct Node* gecici=ilk;
		while(gecici!=NULL){
			if(gecici->data==aranan){
				yeni->sonraki=gecici->sonraki;
				gecici->sonraki=yeni;
				break;
			}
			gecici->sonraki=yeni
		}
	}
}

void Sil(int veri){
	
	if(ilk__NULL){
		printf("liste bos");
	}
	else{
		structNode* gecici=ilk;
		
		if(ilk->data==veri){
			ilk=ilk->sonraki;
			free(gecici);
		}
		else{
			struct Node *silinecek;
			while(gecici->sonraki!=NULL){
				if(gecici->sonraki->data=veri){
					gecici->sonraki=silinecek->sonraki;
					
					free(silinecek);
					break;
				}
				gecici=gecici->sonraki;
			}
		}
	}
}

void TumListeyiSil(){
	struct Node* gecici;
	while(ilk!_NULL){
		gecici=ilk;
		ilk=ilk->sonraki;
		free(gecici);
	}
}

struct Node* Ara(int aranan){
	
	if(ilk==NULL){
		printf("liste bos");
	}
	else{
		struct Node* gecici=ilk;
		while(gecici!=NULL){
			if(gecici->data==aranan){
				return gecici;
			}
			gecici=gecici->sonraki;
		}
	}
	return NULL;
}

main(){
	





























	
}
