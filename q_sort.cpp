#include "head.h"
void Merge(char *A, int first, int last)
{

    //!< ��� ��������� ����������� ������ � ������� �� ����������
    for (int i=0; i< first; i++)
    {
        //!< ��� ��������� ����������� ������ � ������� �� ��������������
        for (int l=0; l<(last-1); l++)
        {
            //!< ���� ���� ��������� �������� ������ ��� � ����������
            if (A->data->getnumb()>Mass->next->data->getnumb())//!< getnumb ��� ����� ��������� ������ ������
            {
                Mass = first->next->data;
                prt->next->data = prt->data;
                prt->data = tem;
            }
            Mass=prt->next; //!< ������� � ���������� ��������
        } //!< end of "for (int l=0; l<(last-1); l++)"
        Mass = first; //!< ��������� ����� �� ������
    }//!< end of "for (int i=0; i<count;i++)"
}