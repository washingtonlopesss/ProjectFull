function submit2() {    
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
    let valorInput1 = Number(document.querySelector("#campoResultado1").value)
    let valorInput2 = Number(document.querySelector("#campoResultado2").value)
    console.log(valorInput2)
    switch(moeda1) {
        case 1:
            if(moeda1 === 1) {
                let cotaçãoDoReal = 0.20
                let calculoConversão = cotaçãoDoReal * valorInput2
                let campoDeResultadoHTML1 = document.querySelector("#campoResultado1")
                campoDeResultadoHTML1.setAttribute("value", calculoConversão.toFixed(2))
            }            
            break
        case 2:
            let cotaçãoDoEuro = 1.08
            let calculoConversão = cotaçãoDoEuro * valorInput2
            console.log(calculoConversão)
            let campoDeResultadoHTML1 = document.querySelector("#campoResultado1")
            campoDeResultadoHTML1.setAttribute("value", calculoConversão.toFixed(2))   
            break
        case 3:
            if(moeda1 == 1) {
                let cotaçãoDoFrancoSuiço = 1
                let calculoConversão = cotaçãoDoFrancoSuiço * valorInput2
                let campoDeResultadoHTML1 = document.querySelector("#campoResultado1")
                campoDeResultadoHTML1.setAttribute("value", calculoConversão.toFixed(2))
            }            
            break
        case 4:
            if(moeda1 === 1) {
                let cotaçãoDoIene = 0.039
                let calculoConversão = cotaçãoDoIene * valorInput2
                let campoDeResultadoHTML1 = document.querySelector("#campoResultado1")
                campoDeResultadoHTML1.setAttribute("value", calculoConversão.toFixed(4))
            }            
            break       
        case 5:
            if(moeda1 === 1) {
                let cotaçãoLibraEsterlina = 6.31
                let calculoConversão = cotaçãoLibraEsterlina * valorInput2
                let campoDeResultadoHTML1 = document.querySelector("#campoResultado1")
                campoDeResultadoHTML1.setAttribute("value", calculoConversão.toFixed(2))
            }
        case 6:
            if(moeda1 == moeda2) {
                let input1 = document.querySelector("#nomeMoeda1")
                input1.innerHTML = `<option value="1">Dólar Americano</option>
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
