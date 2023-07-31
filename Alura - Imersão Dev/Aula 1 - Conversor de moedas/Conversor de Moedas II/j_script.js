function converter() {
    let valorDigitado = Number(document.querySelector("#campoDeEntrada").value)
    let moedaEscolhida = Number(document.querySelector("#nomeDaMoeda").value)
    let campoDeResultado = document.querySelector("#resultado")
    switch(moedaEscolhida) {
        case 1:
            let cotaçãoEmDólarAmericano = 5.11
            let calculoConversão1 = cotaçãoEmDólarAmericano * valorDigitado
            campoDeResultado.innerHTML = `O valor em Real é R$ ${calculoConversão1}`
            break
        case 2:
            let cotaçãoEmEuro = 5.55
            let calculoConversão2 = cotaçãoEmEuro * valorDigitado
            campoDeResultado.innerHTML = `O valor em Real é R$ ${calculoConversão2}`
            break
        case 3:
            let cotaçãoEmFrancoSuiço = 5.52
            let calculoConversão3 = cotaçãoEmFrancoSuiço * valorDigitado
            campoDeResultado.innerHTML = `O valor em Real é R$ ${calculoConversão3}`
            break
        case 4:
            let cotaçãoEmIeneJaponês = 0.039
            let calculoConversão4 = cotaçãoEmIeneJaponês * valorDigitado
            campoDeResultado.innerHTML = `O valor em Real é R$ ${calculoConversão4}`
            break
        case 5:
            let cotaçãoEmLibraEsterlina = 6.31
            let calculoConversão5 = cotaçãoEmLibraEsterlina * valorDigitado
            campoDeResultado.innerHTML = `O valor em Real é R$ ${calculoConversão5}`
            break
        case 6:
            let coroaNorueguesa = 0.51
            let calculoConversão6 = coroaNorueguesa * valorDigitado
            campoDeResultado.innerHTML = `O valor em Real é R$ ${calculoConversão6}`
            break
        default:
            alert("[Warning! Verifique as informações e tente novamente!]")
    }
}