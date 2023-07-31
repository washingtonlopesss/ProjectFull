function submit1() {
    let valorInput1 = Number(document.querySelector("#campoResultado1").value)
    let valorInput2 = Number(document.querySelector("#campoResultado2").value)
    let moeda1 = Number(document.querySelector("#nomeMoeda1").value)
    let moeda2 = Number(document.querySelector("#nomeMoeda2").value)

    if(moeda1 == moeda2) {
        let input2 = document.querySelector("#nomeMoeda2")
        input2.innerHTML = `<option value="6">Real</option>
                            <option value="2">Euro</option>
                            <option value="3">Franco Suíço</option>
                            <option value="4">Iene</option>
                            <option value="5">Libra Esterlina</option>
                            <option value="1">Dólar Americano</option>
                            `                            
    }
    
    switch(moeda1) {
        case 1:
            if(moeda2 === 6) {
                let cotaçãoDoDolárAmericano = 5.11
                let calculoConversão = cotaçãoDoDolárAmericano * valorInput1
                console.log(calculoConversão)
                let campoDeResultadoHTML2 = document.querySelector("#campoResultado2")
                campoDeResultadoHTML2.setAttribute("value", calculoConversão.toFixed(2))
            }            
            break
        case 2:
            if(moeda2 === 6) {
                let cotaçãoDoEuro = 5.54
                let calculoConversão = cotaçãoDoEuro * valorInput1
                let campoDeResultadoHTML2 = document.querySelector("#campoResultado2")
                campoDeResultadoHTML2.setAttribute("value", calculoConversão.toFixed(2))
            }            
            break
        case 3:
            if(moeda2 === 6) {
                let cotaçãoDoFrancoSuiço = 5.52
                let calculoConversão = cotaçãoDoFrancoSuiço * valorInput1
                let campoDeResultadoHTML2 = document.querySelector("#campoResultado2")
                campoDeResultadoHTML2.setAttribute("value", calculoConversão.toFixed(2))
            }            
            break
        case 4:
            if(moeda2 === 6) {
                let cotaçãoDoIene = 0.039
                let calculoConversão = cotaçãoDoIene * valorInput1
                let campoDeResultadoHTML2 = document.querySelector("#campoResultado2")
                campoDeResultadoHTML2.setAttribute("value", calculoConversão.toFixed(4))
            }            
            break       
        case 5:
            if(moeda2 === 6) {
                let cotaçãoLibraEsterlina = 6.31
                let calculoConversão = cotaçãoLibraEsterlina * valorInput1
                let campoDeResultadoHTML2 = document.querySelector("#campoResultado2")
                campoDeResultadoHTML2.setAttribute("value", calculoConversão.toFixed(2))
            }
        case 6:
            if(moeda1 == moeda2) {
                let input2 = document.querySelector("#nomeMoeda2")
                input2.innerHTML = `<option value="1">Dólar Americano</option>
                                    <option value="2">Euro</option>
                                    <option value="3">Franco Suíço</option>
                                    <option value="4">Iene</option>
                                    <option value="5">Libra Esterlina</option>
                                    <option value="6">Real</option>
                                    `                            
            }
            break
    }  
}



