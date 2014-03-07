#include "head.h"
void Merge(char *A, int first, int last)
{

    //!< для элементов двусвязного списка с первого до последнего
    for (int i=0; i< first; i++)
    {
        //!< для элементов двусвязного списка с первого до предпоследнего
        for (int l=0; l<(last-1); l++)
        {
            //!< если курс поточного элемента больше чем у следующего
            if (A->data->getnumb()>Mass->next->data->getnumb())//!< getnumb это метод получения номера поезда
            {
                Mass = first->next->data;
                prt->next->data = prt->data;
                prt->data = tem;
            }
            Mass=prt->next; //!< переход к следующему элементу
        } //!< end of "for (int l=0; l<(last-1); l++)"
        Mass = first; //!< переходим снова на первый
    }//!< end of "for (int i=0; i<count;i++)"
}