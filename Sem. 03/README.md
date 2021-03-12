# ������� (���� 2). ������� �������.

## ������ �� ������ � �������


| �����:| �����:                                                                      | 
|--------|------------------------------------------------------------------------------|
|ios::in |������ ���� �� ������  (�� ������������ �� ifstream)                           |
|ios::out    |������ ���� �� ������ (�� ������������ �� ofstream)                        |
|ios::binary | ������ ���� � ������� �����                                               |
|ios::trunc  | ��� ������ ����������,  ������������ �� �� ������� ���� �������� �� ����� |
|ios::app    | ������ ������ �� ��������. ������� put ���������� � ����. �� �� ������� �������� ����� ���� �� ������      |
|ios::ate    | ������ ������ �� ��������. ������� put ���������� � ����. ������� �������� �� ���������� �����                |
### ������:
 ```c++
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream f("test.txt", ios::out | ios::app);

	if (!f.is_open())
	{
		cout << "Error while opening file!" << endl;
		return -1;
	}
	f << 33; //appends at the end of the file

	f.close();
	return 0;
}
 ```
# ������� �� ����������� �� ������ 
| ����:| ��������:                                                                      | 
|--------|------------------------------------------------------------------------------|
|bad()   | ��� ������ �� ����������. ����� �������� �� ������ � ������ �� � ���������. |
|fail() |���������� ������/������� �������� � ���������.|
| eof() | ��������� � ���� �� �����. |
|good() | ������ �������� �� ��������� �������.|
|clear()| �������� ����������� �� ������ (���� good() �� ����� ������).|

## ������������� ��� ����

 - tellg() - ����� �������� �� ������� ������ � **������ �� ������**
 - tellp() - ����� �������� �� ������� ������ � **������ �� ������**
 - seekg(offset, direction) - ��������� get-���������� �� �������� �� **������ �� ������**.
 - seekp(offset, direction) - ��������� put-���������� �� �������� �� **������ �� ������**.
 
 
 -**offset** : ����������� ��������. ������������ �� direction.
 
 -**direction** : ���� �� ����� ������� ����������:

1. ios::base::beg - �������� �� �����.
2. ios::base::cur - �������� ������� ��� �����.
3. ios::base::end - ���� �� �����.

### ������:
 ```c++
#include <iostream>
#include <fstream>
using namespace std;
size_t getFileLen(std::ifstream& ifs) //we can pass stream to functions.
{ 

	ifs.seekg(0, std::ios::end); //set the position at the end of the file
	size_t size = ifs.tellg(); //get the curren position
	ifs.seekg(0, std::ios::beg); //set the position at the beginning

	return size;
}
 ```
## ������� �������.

����������� ���������:

1. .read(char* memoryBlock, size_t size);
2. .write(char* memoryBlock, size_t size);

�������� ��������, �� ��������� ������ **char***. ��� ������ �� ������� ���������� �� ���� ���, �� ������ ����������� �� ������������� ��������� ��� ��� char* (��� ��������, �� ���������� �� ���� ��� ����� �� ���� ���)

### ������ �� ������ � ������� ����:
 ```c++
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream f("file.dat");

	int a = 155555;

	f.write((const char*)&a, sizeof(int));

	return 0;
}
 ```
 ### ������ �� ������ �� ������� ����:
 
  ```c++
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream f("file.dat");

	int a;

	f.read((char*)&a, sizeof(int));

	cout << a << endl;

	return 0;
}
 ```

 ### ������������ �� �������� ����:
 ![enter image description here](https://i.ibb.co/G3R72qG/sudurjanie.png "Binary file example")
 
��������� �� �������� � **������� ������**. ���-�������� ���� � ��������. ������������ ������������� ����� � **00025fa3**, ����� � ����� ��������������� ����� �� ������� **155555**.
 
