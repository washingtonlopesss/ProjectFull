using System;

namespace dio
{
    class Pessoa
    {
        public string nome { get; set; }
        public int idade { get; set; }
        public void apresentar()
        {
            Console.WriteLine($"Olá meu nome é {nome} e eu tenho {idade}");
        }
    }
}