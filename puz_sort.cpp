#include "head.h"
void P_Sort (int* Mass, int n) //!< ���������� ���������
{
 int temp = 0; //!< ��������� ���������� ��� �������� �������� �������
 bool exit = false; //!< ������� ���������� ��� ������ �� �����, ���� ������ ������������
 
 while (!exit) //!< ���� ������ �� ������������
 {
  exit = true;
  for (int int_counter = 0; int_counter < (n - 1); int_counter++) // !< ���������� ����
    //!< ���������� ��������� �� ����������� - ���� >
    //!< ���������� ��������� �� �������� - ���� <
    if (Mass[int_counter] > Mass[int_counter + 1]) // !<���������� ��� �������� ��������
    {
     //!< ��������� ������������ ��������� �������
     temp = Mass[int_counter];
     Mass[int_counter] = Mass[int_counter + 1];
     Mass[int_counter + 1] = temp;
     exit = false; //!< �� ��������� �������� ���� ����������� ������������ ���������
    }
 }
}
