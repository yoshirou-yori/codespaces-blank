#include <stdio.h>
#include <math.h>

int main(){
	FILE *model_data;
	char file_location[] = "/workspaces/codespaces-blank/cube_model.txt";
	char buffer[1024]; 

	if ((model_data = fopen(file_location, "r")) == NULL){
		printf("Error: File == null");

		return 1;
   	}

	fgets(buffer, 1024, model_data);

	scanf("%c", buffer);

	char hello[6] = "Hello!";

	printf("%s\n", buffer);
	return 0;
}
