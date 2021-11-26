using System;
using System.Collections.Generic;
using System.Linq;
namespace Kata
{
    class Program
    {
        public static void ConsoleEditor()
        {
            Console.Title = "ConsoleProject";
            Console.BackgroundColor = ConsoleCgit config core.protectNTFS falseolor.White;
            Console.ForegroundColor = ConsoleColor.Black;
            Console.WindowHeight = 35;
            Console.WindowWidth = 150;
        }

        //Create A Method that prints a Grid of Any size Using Arrays
        public static void GridCreator()
        {
            Console.WriteLine("Hello");
        }
        
        public static float SumCreator(List<float> list)
        {
            float addedNumbers = 0;
            float mean = 0;
            int i = 0;

            foreach (var item in list)
            {
                Console.WriteLine(item);
                addedNumbers = addedNumbers + list[i];
                i++;                
            }

            mean = addedNumbers / list.Count;
            
            Console.WriteLine("List Capacity " + i);
            Console.WriteLine(addedNumbers);
            Console.WriteLine(mean);
            return mean;
        }


        static void Main(string[] args)
        {
            ConsoleEditor();

            GridCreator();  


            int tempCheck = 35;
            if(tempCheck >= 25)
            {
                if(tempCheck <= 50){
                    
                }
            }


            /*List<float> myList = new List<float>(); //Creating List
            Random randomNumber = new Random(); //Creating Random Number Generator

            for(int i = 1; i < 101; i++) //Adding random numbers to list
            {
                myList.Add(randomNumber.Next(1,100));
            }
            
            myList.Sort(); //Sorting list to make it look pretty
            SumCreator(myList); //Getting Sum of list
            */

            Console.ReadKey();
        }
    }
}
