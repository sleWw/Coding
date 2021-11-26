using System;
using System.Collections.Generic;

namespace CSharp_Projects
{
    class Program
    {
        public static void ConsoleEditor()
        {
            Console.Title = "ConsoleProject";
            Console.BackgroundColor = ConsoleColor.White;
            Console.ForegroundColor = ConsoleColor.Black;
            Console.WindowHeight = 35;
            Console.WindowWidth = 150;
        }

        public static bool EndingCode()
        {
            bool returnTo;
            ConsoleKeyInfo clientAnswer;
            Console.WriteLine("Press 'Space' to End Program");            
            clientAnswer = Console.ReadKey();
            if(clientAnswer.Key != ConsoleKey.Spacebar){
            Console.WriteLine();  
            returnTo = false;
            } else returnTo = true;
            return returnTo;
        
        } 

        public static string[] CommonFactorFinder(int findCommon)
        {
            List<string> factorList = new List<string>();

            int sum = 0;
            int multiplier = 1;
            int multiplyee = 0;
            int lastMultiplier = multiplier;
            int lastMultiplyee = multiplyee;
            for(int i = 0; i < 101; i++)
            {
               sum = multiplyee * multiplier;
               if(lastMultiplier == multiplyee && lastMultiplyee == multiplier)
               {
                   goto exit;
               }
  
               if(sum == findCommon)
                {
                    string factorFound = multiplier.ToString() + " x " + multiplyee.ToString() + " = " + sum.ToString();

                    factorList.Add(factorFound);
                    
                    if(multiplier == multiplyee & sum == findCommon)
                    {
                        goto exit;
                    }
                    lastMultiplier = multiplier;
                    lastMultiplyee = multiplyee;
                    multiplier++;
                    multiplyee = 1;
                    sum = 0;
                    i = 0;
                }
               else if(sum > findCommon)
                {
                    multiplier++;
                    multiplyee = 1;
                    i = 0;
                }
               else
                {
                   multiplyee++;
                }
            }
            
            exit:
            string[] factorArray = factorList.ToArray();
            return factorArray;
        }   
       

        static void Main(string[] args)
        {
            bool returnTo;   
            //ConsoleEditor();
            //Create a function that finds all Factors in a Interger
            //Create a function that finds all Common Factors between 2 Intergers
            //Create a function that finds the Greatest Common Factor between 2 Intergers
            string[] testArray = CommonFactorFinder(88);
            Console.WriteLine("ARRAY TEST---------");
            for(int i = 0; i != testArray.Length; i++)
            {
                Console.WriteLine(testArray[i]);
            } 
            
            Console.WriteLine("Hello World \n line break 1 \n line break 2 \n line break 3 ");


            end:
            returnTo = EndingCode();
            if(!returnTo) goto end; 
        }
        
    }
}

