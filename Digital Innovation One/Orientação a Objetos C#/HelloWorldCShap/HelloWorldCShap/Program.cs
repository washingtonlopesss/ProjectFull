class Programa
{
    static void Main(string[] args)
    {
        Console.WriteLine("Digite seu nome:");
        string nome = Console.ReadLine();
        Console.WriteLine("Digite o salario total bruto:");
        double valorSalario = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("{0} DIGITE SEUS DESCONTOS", nome);
        Console.WriteLine("Digite o valor do seu Vale Transporte");
        double vt = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Digite o valor do Plano de Saude");
        double planoSaude = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Digite o valor do Plano Odontológico");
        double planoOdontologico = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Digite o valor do seu Vale Refeição");
        double vr = Convert.ToDouble(Console.ReadLine());
        valorSalario = valorSalario - (vt + planoSaude + planoOdontologico + vr);
        double descontoINSS;
        if (valorSalario <= 1302.00)
        {
            descontoINSS = (0.075 * valorSalario);
            Console.Write("Seu salario com desconto é R$ ");
            Console.WriteLine(valorSalario - descontoINSS);
        }
        else if (valorSalario >= 1302.01 && valorSalario <= 2571.29)
        {
            descontoINSS = (1302 * 0.075 + ((valorSalario - 1302) * 0.09));
            Console.Write("Seu salario com desconto é R$ ");
            Console.WriteLine(valorSalario - descontoINSS);
        }
        else if (valorSalario >= 2571.30 && valorSalario <= 3856.94)
        {
            descontoINSS = ((valorSalario - 2571.29) * 0.12) + ((2571.29 - 1302) * 0.09) + (1302 * 0.075);
            Console.Write("Seu salario com desconto é R$ ");
            Console.WriteLine(valorSalario - descontoINSS);
        }
        else if (valorSalario >= 3856.95 && valorSalario <= 7507.49)
        {
            descontoINSS = ((valorSalario - 3856.95) * 0.14) + ((3856.94 - 2571.29) * 0.12) + ((2571.29 - 1302) * 0.09) + (1302 * 0.075);
            Console.Write("Seu salario com desconto é R$ ");
            Console.WriteLine(valorSalario - descontoINSS);
        }
        else if (valorSalario >= 3856.95)
        {
            descontoINSS = ((7507.49 - 3856.95) * 0.14) + ((3856.94 - 2571.29) * 0.12) + ((2571.29 - 1302) * 0.09) + (1302 * 0.075);
            Console.Write("Seu salario com desconto é R$ ");
            Console.WriteLine(valorSalario - descontoINSS);
        }
    }
}