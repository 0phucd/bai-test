using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace project
{
    class Program
    {
        static int[] arr;
        static int count;
       
        static void Main(string[] args)

        {
            Nhap_N();
            Nhap_Arr();
            Gia_Tri_Max(ref arr);
            Gia_Tri_Min(ref arr);
            Gia_Tri_TB(ref arr);
        }
        public static void Nhap_Arr()

        {
            arr = new int[count];
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = int.Parse(Console.ReadLine());

            }
            for (int i = 0; i < arr.Length; i++)
            {

                Console.Write(arr[i] + " ");
            }



        }



        public static void Nhap_N()

        {
            count = int.Parse(Console.ReadLine());
            
           
            
        }

        public static void Gia_Tri_Max(ref int[] arr)

        {
            int Max = 0;
            for (int i = 0; i < arr.Length; i++)
            {
                if (Max < arr[i])
                {
                    Max= arr[i];
                };

            }

                Console.WriteLine();
                Console.Write(Max);
            



        }
        public static void Gia_Tri_Min(ref int[] arr)

        {
            int Min = 99999999;
            for (int i = 0; i < arr.Length; i++)
            {
                if (Min > arr[i])
                {
                    Min = arr[i];
                };

            }

            Console.WriteLine();
            Console.Write(Min);




        }
        public static void Gia_Tri_TB(ref int[] arr)

        {
            int TB=0;
            for (int i = 0; i < arr.Length; i++)
            {
                
                
                    TB+=arr[i];
                

            }
            TB=TB/arr.Length;

            Console.WriteLine();
            Console.Write(TB);




        }
    }
}