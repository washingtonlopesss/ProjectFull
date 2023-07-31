using System;

namespace MyApplication
{
    abstract class Shape
    {
        public abstract void CalculateArea(int x);

        public abstract void CalculateArea(int x, int y);
    }

    class Quad : Shape
    {
        public override void CalculateArea(int lado)
        {
            Console.WriteLine("Area do quadrado={0}\n", lado * lado);
        }

        public override void CalculateArea(int lado, int altura)
        {
            Console.WriteLine("Area do retangulo={0}\n", lado * altura);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Quad q = new Quad();
            q.CalculateArea(5);
            q.CalculateArea(3, 7);

        }
    }
}