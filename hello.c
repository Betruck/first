# include <stdio.h>

void french(){
	print("Bonjour");
}

void german(){
	print("Hallo");
}

void spanish(){
	print("Hola");
}

void english(){
	print("Hello there");
}

int main{
	int num;
	printf("Choose Language: 1. French /t 2. German /t 3. Spanish /t 4. English /n");
	scanf("%d", num);
	if(num == 1){
		french();
	} else if(num == 2){
		german();
	} else if(num == 3){
		spanish();
	} else if(num == 4){
		english();
	} else {
		printf("Error!!!");
	}
	return 0;
}
