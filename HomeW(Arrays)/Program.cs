using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace HomeW_Arrays_
{
    class Program
    {
        static void Main(string[] args)
        {
            //3 пункт задания: Сколько раз встречается число
            int[] a = { 3, 1, 5, -14, 1, -4, 9, 1, 45, -70 };

            Console.WriteLine("Исходный массив:");
            for (int i = 0; i < a.Length; i++)
            {
                Console.Write("\t" + a[i]);
            }
            Console.WriteLine();
            int m = 0;
            int neededNum = Int32.Parse(Console.ReadLine()); 
            for (int i = 0; i < a.Length; i++)
            {
                if (a[i] == neededNum)
                {
                    m++;
                }
            }
            Console.Write("встречается " + m + " раз");
            Console.ReadKey();

            //2 пункт задания: Отсортировать в порядке возрастания
            Random rnd = new Random();
            int length = 10;
            int[] arr = new int[length];
            Console.WriteLine("Source array:");
            for (int i = 0; i < length; i++)
            {
                arr[i] = rnd.Next(-10, 10);
                Console.Write(arr[i] + " | ");
            }
            Console.WriteLine("\n\nSorted array:");
            Array.Sort(arr);
            foreach (var item in arr)
            {
                Console.Write(item + " | ");
            }
            Console.ReadKey();
        }
    }
}
