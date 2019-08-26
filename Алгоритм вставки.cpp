int main()
{
srand(unsigned(time(NULL)));

const int SIZE = 5;
int a[SIZE];

cout << "---------------------Before------------------>" << endl;

for (int i = 0; i < SIZE; i++) {
a[i] = rand() % 10 + 1;
}

for (int i = 0; i < SIZE; i++) {
cout << "a[" << i << "] = " << a[i]  << endl;
}

cout << "---------------------Before------------------>" << endl;

int tmp = 0; 
int i, j; 

for (i = 1; i < SIZE; i++)
{
tmp = a[i]; 

for (j = i - 1; j >= 0 && a[j] > tmp; j--) {
a[j + 1] = a[j];
}
a[j + 1] = tmp; 
}


cout << "----------------------After-------------------->" << endl;
for (int i = 0; i < SIZE; i++) {
cout << a[i] << endl;
}
cout << "----------------------After-------------------->" << endl;

system("pause");
}
