using System;

namespace Loop
{
    class Loop
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Number N and x input=");
            String[] Nx = Console.ReadLine().Split(" ");
            int N = int.Parse(Nx[0]);
            int x = int.Parse(Nx[1]);
            
            N = int.Parse(Console.ReadLine());
            x = int.Parse(Console.ReadLine());
            
            
            for (int i = N; i <= x; i++) {
                Console.Write(i + ".)");
                if (i % 2 == 0) {
                  Console.Write(" " + i + " is even");
                } else {
                  Console.Write(" " + i + " is odd");
                }
                
                if (i % 3 == 0) {
                  Console.Write(", can be divide by 3");
                } else {
                  Console.Write(", can't be divide by 3");
                }
                
                if (i % 5 == 0) {
                  Console.Write(", can be divide by 5");
                } else {
                  Console.Write(", can't be divide by 5");
                }
                
                Console.Write("\n");
            }
            
            int i = x;
            do {
                Console.WriteLine(i);
                
                i--;
            } while (i > N);
        }
    }
}
