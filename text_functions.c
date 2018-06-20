#include <stdio.h>//used to print

void reverse(char*, int);
int compare(char*, char*);
void allUpper(char*);
void allLower(char*);

void main(int argc,char** argv){
	//printf("%s \n",argv[1]);
	if(compare(argv[1],"reverse") == 0 && argc == 3){
	//printf("in if %d\n",charLen(argv[2]));
		reverse(argv[2], charLen(argv[2]));
	}
	if(compare(argv[1],"length") == 0 && argc == 3){
		printf("-- %d --\n",charLen(argv[2]));
	}
	if(compare(argv[1],"allUpper") == 0 && argc ==33){
		allUpper(argv[2]);
	}	
	if(compare(argv[1],"allLower") == 0 && argc == 3){
		allLower(argv[2]);
	}
}
/////////////////////////////
// parameters: array of characters. This being the word that is reversed. integer which reflects length of word.
// result: prints the reversed word.
///////////////////////////
void reverse( char* x, int length){
	//printf("in reverse\n");
	char new[length];
	int i = 0;
	int stop = length;
	length--;
	for(i; i < stop; i++){
		//printf("in for loop %c\n",x[length]);
		new[i] = x[length];
		length=length-1;
	}
	printf("-- %s --\n",new);
}
int charLen(char* x){
	int length=0;
	while(1){
		if(x[length] == '\0'){
			return length;
		}
		else{
			length++;
		}
	}
}
int compare(char* x, char* y){//returns 1 if false, 0 if true
	int lenx = charLen(x);
	int leny = charLen(y);
	int i = 0;
	if(lenx != leny){return 1;}
	for(i; i < lenx; i++){
		if(x[i] != y[i]){return 1;}	
	}
	return 0;
}
void allUpper(char* x){
	int length = charLen(x);
	int i = 0;
	for(i;i < length;i++){
		if(x[i]>96 && x[i]<123){
			x[i]=x[i]-32;
		}
	}
	printf("-- %s --\n",x);

}
void allLower(char* x){
        int length = charLen(x);
        int i = 0;
        for(i;i < length;i++){
                if(x[i]>64 && x[i]<91){
                        x[i]=x[i]+32;
                }
        }
        printf("-- %s --\n",x);

}

