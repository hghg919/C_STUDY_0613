/* 
   �ۼ���   : ������
*  �ۼ���   : 2024-6-19

*  ù��° �н���ǥ : �ڵ�� 2���� 10���� 16���� �ۼ��ؼ� �����ͷ� �Ѱ��ֱ�
*/

/*
* 2����, 8����, 16������ ǥ���ϴ� ��
* 2���� : "0b"2������ ǥ�� : 0b(+)1010; => 10(2������ 10�� ǥ��)
* 8���� : "0" 17 8������ ǥ��
* 10���� : 10���� ǥ��. 0. 10�������� ǥ���� ��.
* 16���� : "0x"A 
* 
* pirntf�� 8���� ǥ�� %o, 16���� ǥ�� %x
* 
* float �Ǽ�. �Ҽ���
* 
* �Ҽ��� ǥ���ϴ� ���
* ù��° ���. ��Ʈ�� n : m ���� ������ ��, n��ŭ ������ ����ϰ�, m��ŭ �Ҽ� �κ����� �������
* ������ : �Ҽ��� �ڼ��� ǥ���ϰ��� �ҷ���, ������ ǥ���� ������ �ʹ� ��������.
* �Ҽ��� ����ǥ�� ������� ������� ����, 2e-1(2�� -1��), 2e-2, 2e-3 �ڸ����� 0 �Ǵ� 1 �״��ؼ� ǥ���ϴ� ��� ����
* ���� �Ҽ��� ���(fixed point) : ������ ǥ���ϴ� ��Ʈ ���� �Ҽ��� ǥ���ϴ� ��Ʈ ���� �������Ѽ� ǥ���ϴ� ���.
* �ε� �Ҽ��� ���(float point) : �Ҽ��� ǥ���ϴ� �������, ���� �κа� �Ҽ� �κ��� ������ ���� �Ҽ����� ����ϴ� ��ġ�� �����ϴ� ���.
*/

// 8.625�� �Ǽ��� ǥ���غ���. 0b100.101
// 6.6225555555555555;

// ��Ʈ ���� ���

// ��Ʈ ��ȣ : &, |, ^, ~
// ��Ʈ �̵�(shift) ��ȣ : >>, <<

// a & b : AND ����
//         1 & 0 = 0;
//         0 & 1 = 0;
//         0 & 0 = 0;
//         1 & 1 = 1;

// A | B : OR ����
//         1 | 0 = 1;
//         0 | 1 = 1;
//         0 | 0 = 0;
//         1 | 1 = 1;

// a ^ b : XOR ����
//         0b1000
//         0b1100
//         0b0100

// a ~ ���� : 2�� ���� 0b0001 -> 1110
// int num;
// num = ~num; // ��Ʈ ������Ų��.

// ��Ʈ ���� �̵� ������
// 8<<2;
//      char 0b00000100; << 2    8<<2(2e2) = 4 -> 32
//           0b00010000;
// 32>>3;    0b00010000; >> 3    32>>3 -> 2
//           0b00000010; 

#include "lectures.h"

void lectures8()
{
	// ���� �̸� ���� a_num ������ ��, ���� 15�� �־ ���
	int a_num = 15;
	printf("a_num�� �� : %d\n\n", a_num);

	a_num = 017;
	printf("a_num�� 8���� ǥ�� ���� 10������ ��� : %o\n", a_num);

	a_num = 0xF;
	printf("a_num�� 16���� ǥ�� ���� 10������ ��� : %x\n", a_num);

	a_num = 0b1111;
	printf("a_num�� 2���� ǥ�� ���� 10������ ��� : %d\n\n", a_num);

	//���� �޼��Ͻ� ���� �����غ�����.
	//%d ��� %o, %x ����غ���

	//����1. -255 (������ ǥ���غ���)

	int b_num = -255; // 255�� 2�� ������ ��
	                  // 255�� 2�������� ǥ�� : 0b 00000000 00000000 00000000 11111111
	                  // 255�� ǥ���� ���� : 0b 11111111 11111111 11111111 00000001
	b_num = 0b11111111111111111111111100000001;

	printf("b_num �� : %d\n\n", b_num);

	float a_float = 0.25;
	printf("a_float�� ��� %f\n\n", a_float);

	// 0.1 + 0.2�� 0.3�� ������ ���� �����ڷ� ǥ���� �غ�����.
	// true�� 1�� ��, false�� 0�� ����մϴ�.
	// int bool; �������� 0.1 + 0.2 0.3�� ������

	printf("�ε� �Ҽ����� ����\n");
	int bool = (0.1 + 0.2) == 0.3; // 0.1 + 0.2���� 0.3�� �ƴϴ�.
	printf("���̸� 1 �����̸� 0�� ����մϴ�. 0.1 + 0.2 = 0.3? %d \n\n", bool);

	float c_num = 0.0;

	for(int number = 0; number < 30; number++) //�ݺ���?
	c_num += 0.1;

	printf("c_num 0.1�� 30�� ���� ���� �����ΰ���? %f \n\n", c_num);

	printf("��Ʈ ���� ����\n");

	// �� ���� ���� ������ 2���� ǥ���� ���� �ִ�. d�� e�� ��Ʈ ���� ����� ��ȣ�� ������� �ʰ� ����غ�����. 
	int d = 0b00001111;
	int e = 0b00010010;
	int my_int = 0b00000010;
	int result = d & e;
	printf("���� ����� �� %d ������ %d\n", my_int, result);

	d = 0b00001111;
	e = 0b00010010;
	my_int = 0b00011111;
	result = d | e;
	printf("���� ����� �� %d ������ %d\n", my_int, result);

	d = 0b00001111;
	e = 0b00010010;
	my_int = 0b00011101;
	result = d ^ e;
	printf("���� ����� �� %d ������ %d\n\n", my_int, result);

	char overflowedvalue = 0b01000000;
	//                     0b01000000; << 1 => 0b10000000; -128
	// 2�� ���� ���� + 1;   0b01111111; => 0b10000000; 128
	// char 1����Ʈ ũ��.. ǥ���� �� �ִ� ���� ����?
	// 1����Ʈ ����.. ǥ���� �� �ִ� ���� ����, ��� ����
	// ���� ���� ���� : 0b[0][000][0000] ~ 0b[0][111][1111] : 0, 1 ~ 127
	// ���� ���� ���� : 0b[1][000][0000] ~ 0b[1][111][1111] : -128 ~ -1
	// -128 ~ 127 (-128 ~ 127) 256(2e8) 

	// 0b01000000; << 2;
	// overflowedvalue = 0b100000000; => 00000000 = 0?
	//                   0b000000100; >> 8 => 0

	overflowedvalue << 2; // � ���� ���ñ��? �� �׷� ���� ���ñ��? 256
	//printf ����غ���
	printf("0b01000000 << 2 �� �� : %d\n", overflowedvalue);

	overflowedvalue = 0b00000100;
	overflowedvalue >> 5; // � ���� ���ñ��? �� �׷� ���� ���ñ��? 0
	//printf ����غ���
	printf("0b00000100 >> 5 �� �� : %d\n\n", overflowedvalue);

	//10���� �ϳ� �Է� �޾Ƽ�, �ش���� 2�� ���� ���� ����ϴ� �ڵ带 �ۼ��غ�����. (~)������ ����ؼ�.
	int twocomplement;
	scanf_s("%d", &twocomplement);
	twocomplement = ~twocomplement + 1;

	printf("2�� ������ ���� ��� : %d\n", twocomplement);

	//����Ʈ ����
	//10���� �ϳ� �Է� �޾Ƽ�, �ش� ���� 8�� ������ 32�� ������ �ڵ带 x,/ ���� �ۼ��غ�����.
	//8�� 32�� �ݵ�� �ڵ忡 ������, ��Ʈ ������(<<, >>) ����� ��.
	char shiftnum = 64; //4
	//0b01000000;
	//scanf_s("%d", &shiftnum);
	//shiftnum <<= 3;
	//shiftnum = shiftnum <<3 >>5; //8�� ���� �� 32�� ������.
	shiftnum = shiftnum << 3;
	shiftnum = shiftnum >> 5;
	printf("8�� ���� �� 32�� ���� �� : %d", shiftnum);
}