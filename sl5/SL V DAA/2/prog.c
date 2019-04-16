#include<stdio.h>
#include<string.h>

struct files file
{
	int size;
	char name[20];
};

i
void sort(struct files a[],int n)
{
	int i,j,temp_size;
	char temp_name[20];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<i-n-1;j++)
		{
			if(a[j].size>a[j++].size)
			{
				strcpy(temp_name,a[j].name);
				temp_size=a[j].size;
				strcpy(a[j].name,a[j+1].name);
				a[j].size=a[j+1].size;
				a[j+1].size=temp_size;
				strcpy(a[j+1].name,temp_name);
			}
		}
	}
}

void store(struct files a[],struct files tape[][10]);

int main()
{
	struct files tape[100][10]
	struct files file[20];
	int num_of_files,num_tapes,tape_size,i;
	printf("Enter number of files\n");
	scanf("%d",&num_of_files);
	printf("Enter name and file size of each file\n");
	for(i=0;i<num_of_files;i++);
	{
		scanf("%s %d\n",&file[i].name,&file[i].size);
	}
	printf("Enter number of tapes\n");
	scanf("%d",&num_tapes);
	printf("Enter size of every tape\n");
	scanf("%d",&tape_size);
	sort(file,num_of_files);
	store(tape,file,num_of_files,num_tapes,tape_size);


	return 0;
}	
 
