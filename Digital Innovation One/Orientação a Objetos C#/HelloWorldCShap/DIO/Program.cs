using System;
using dio;

namespace dio
{
    class Programa
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Escreva seu nome");
            string nome = Console.ReadLine();
            Pessoa p1 = new Pessoa();
            p1.nome = nome;
            p1.idade = 19;
            p1.apresentar();
        }
    }
}

