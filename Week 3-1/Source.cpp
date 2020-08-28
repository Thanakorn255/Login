#include<stdio.h>
int main()
{
	char Name;
	int Password;
	int b = 5;
	printf("Name is : ");
	scanf_s("%c",&Name);
	printf("Password is : ");
	scanf_s("%d", &Password);
	if (Name == 'K')
	{
		if (Password = 12345678)
		{
			for (int a = 0;a < b;a++)
			{
				if (a == 1) 
				{
					printf("-----Hello KMITL-----\n");
				}
				else if (a==4)
				{
					printf("-----Welcome-----");
				}
			}
		}
	}
	else
	{
		printf("Login Fail");
	}
}