# Dominando Funções em Javascript by DIO
## Aula 1 - Tipos de Funções

1. Entrutura inicial de uma função
    
    Variaveis criadas dentro da função só pode ser utilizadas dentro delas.

        function nome(parametros) {
            // Instruções
        }

    Quando invocamos o "return", a função para ser executada.

        function nome(parametros) {
            // Instruções
            return // Valor de retorno
        }

2. Função Anônima

    Uma variável pode armazernar uma função.

        const soma = function (a, b) {
            return a + b
        }

        soma(1, 2) // 3
        soma(5, 4) // 9

3. Função Autoinvocável

    IIFE (Immediately Invoked Function Expression)


        {
            function() {
                let name = "Digital Innovation One"
                return name
            }
        }()
    
        // Digital Innovation One

    Uma função anônima entre parênteses, seguida por outro par de parênteses, que representa sua chamada.
    

        {
            function(a, b) {
                return a + b
            }
        }(1, 2)
        // 3

    Também pode ser utilizada com parâmetros ou armazenada em uma variável.

        const soma 3 = (
            function() {
                return a + b
            }
        )(1, 2)

        console.log(soma3) // 3

4. Callbacks

    Uma função pasada como argumento para outra função.

        const calc = function( operacao, num1, num2) {
            return operacao( num1, num2)
        }
        const soma = function( numl, num2) {
            return numl + num2
        }
        const sub = function( numl, num2) {
            return num1 - num2
        }
        const resultSoma = calc( soma, 1, 2)
        const resultSub = calc(sub, 1, 2)

        console. log( resultSub) // -1
        console. log(resultSoma) // 3

    Utilizando Callbacks você tem maior controle da ordem da chamadas.

## Parâmetros

1. Valores Padrão
