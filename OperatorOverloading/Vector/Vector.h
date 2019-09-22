#include <iostream>
class Vector
{
private:
	int* coordinates;
	int length;
	void CopyFrom(const Vector& other);
	void Free();
public:
	Vector();
	Vector(int len);

	Vector(const Vector& other);
	Vector& operator=(const Vector& other);
	~Vector();

	int GetLen() const;

	Vector& operator+=(const Vector& other);
	Vector& operator-=(const Vector& other);
	Vector& operator*=(int);

	friend std::ostream& operator<<(std::ostream&, const Vector& v);
	friend std::istream& operator>>(std::istream&, Vector& v);

	int GetAtIndex(int index) const;
	int& operator[](int index); // �������� �� �����������(���� � ��������)  vector a; a[4] -����� ��������� �������� �� �������
	void print();
};

Vector operator+(const Vector& lhs, const Vector& rhs);// �������� �� ��� �������
Vector operator-(const Vector& lhs, const Vector& rhs);// �������� �� ��� �������

int operator%(const Vector& lhs, const Vector& rhs); // �������� ������������ �� ��� �������

bool operator||(const Vector& lhs, const Vector& rhs); //��������� ���� ��� ������� �� ���������
bool operator|=(const Vector& lhs, const Vector& rhs); // ���� ��� ������� �� ���������������