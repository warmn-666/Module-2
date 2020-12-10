				//6. Вывести в текстовый файл анкетные данные студентов интересующей вас группы. Фамилии студентов начинаются с букв В, Г и Д.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct Fio
{
    char Name[10];
    char Surname[10];
};

struct student {
    struct Fio fio;
    int Group_Number;
    int Year_Birth;
    int TechProg_Ball;
    int Math_Ball;
    int IKT_Ball;
    int Physic_Ball;
};

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Russian");
	int i, h, n;
	char c[10];
    struct student stud[2];
    printf("Введите количество студентов: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("Введите имя и фамилию: ");
        scanf("%s%s", &stud[i].fio.Name, &stud[i].fio.Surname);
        printf("\n");
        printf("Введите номер группы: ");
        scanf("%d", &stud[i].Group_Number);
        printf("\n");
        printf("Введите год рождения: ");
        scanf("%d", &stud[i].Year_Birth);
        printf("\n");
        printf("Введите оценку по Математике: ");
        scanf("%d", &stud[i].Math_Ball);
        printf("\n");
        printf("Введите оценку по ИКТ: ");
        scanf("%d", &stud[i].IKT_Ball);
        printf("\n");
        printf("Введите оценку по Физике: ");
        scanf("%d", &stud[i].Physic_Ball);
        printf("\n");
    }
	    printf("Введите номер интересуещей вас группы: ");
	    scanf("%d", &h);
	    	
    for (i = 0; i < n; i++)
    {
        int c = stud[i].fio.Surname[0]; 
        if (((c == 'V') || (c == 'G') || (c == 'D')  && ((stud[i].Group_Number == h )))){
          FILE *file = fopen("test.txt", "w");
          fprintf(file,"%s %s %d \n",stud[i].fio.Name, stud[i].fio.Surname, stud[i].Year_Birth);
          fclose(file);	
        }    
    }
    	return 0;
}

