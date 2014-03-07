#include "head.h"
void P_Sort (int* Mass, int n) //!< сортировка пузырьком
{
 int temp = 0; //!< временная переменная для хранения элемента массива
 bool exit = false; //!< болевая переменная для выхода из цикла, если массив отсортирован
 
 while (!exit) //!< пока массив не отсортирован
 {
  exit = true;
  for (int int_counter = 0; int_counter < (n - 1); int_counter++) // !< внутренний цикл
    //!< сортировка пузырьком по возрастанию - знак >
    //!< сортировка пузырьком по убыванию - знак <
    if (Mass[int_counter] > Mass[int_counter + 1]) // !<сравниваем два соседних элемента
    {
     //!< выполняем перестановку элементов массива
     temp = Mass[int_counter];
     Mass[int_counter] = Mass[int_counter + 1];
     Mass[int_counter + 1] = temp;
     exit = false; //!< на очередной итерации была произведена перестановка элементов
    }
 }
}
