


##  �������� �������
������ ������:
 - ������ �� ���� (istream)
 - ������ �� ����� (ostream)

#####  ������ �� ������ � ����� �� ���� (cin)
 ```c++
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
}
 ```
 ����� �� ����������� ����.

#####  ������ �� ������ � ����� �� ����� (cout)
 ```c++
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 12;
	int c = a + b;

	cout << a << " + " << b << " = " << c << endl;
}
 ```
	
### ������ � ����� �� ���� �� ���� (ifstream)
������ �� ������ �� ����!
 ```c++
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream file("myFile.txt");

	if (!file.is_open())
	{
		cout << "Error!" << endl;
		return -1;
	}
	int a, b;

	file >> a >> b;

	file.close();
}
```
### ������ � ����� �� ����� ��� ���� (ifstream)
   
 ```c++
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream file("myFile.txt");

	if (!file.is_open())
	{
		cout << "Error!" << endl;
		return -1;
	}
	int a = 3;
	int b = 10;

	file << a << " " << b << " " << a + b << endl;

	file.close();
}
 ```
**������ 1**:

�������� ��������, ����� ��������� ���������� �� ���.

**������ 2**:

�������� ��������,  ����� ���� comma-separated values (**CSV**) ���� ��� �������� **��� �������� 4 ������**: ����� ���, ������� ���, �����, ���������� �����.
**�������� ����:** (students.csv).

**������� ������**:

 1. ��������� ������� �� �������� �� ���� ������������ ������ �� ����������.
2. ��������� �������, ����� ���� ��������� �� �����, �� ��������� �� **����������� �����** ���������� �� �������� ��� ������� **���������� �����**.
3.  �������� �������, ����� ������ editFirstNam�, ����� **�� ������� ���������� �����  � ���**, �� ������� ������� ��� �� �������� � ������� ���������� ����� ������� ��� � ��������� ���.
4.  ��������� ��������� **saveStudentsToFile** �� �� ������� ���������� � ����� ������ (**CSV**). �.�. ��� �������� ������� �� ���������� �� ���� �� ������� ������ ��������� ����.


�� �� ��������� ����� ���������, � ����� �� �� �������� ��������� ���� ���������:
������ (������ �� ����������� ������� � '>')

 ```
>open students.csv
>print 80000
Name = Stefan Velkov, Email: stefan@yahoo.com, FN: 80000
>edit 8000 Krum
>print 80000
Name = Krum Velkov, Email: stefan@yahoo.com, FN: 80000
>save
file students.csv successfully saved!
```