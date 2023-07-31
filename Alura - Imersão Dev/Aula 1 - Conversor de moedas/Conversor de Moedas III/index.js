let valorDeEntrada1 = Number(document.querySelector("#campoResultado1").value)
let valorDeEntrada2 = Number(document.querySelector("#campoResultado2").value)

function submit1() {
    let nomeMoeda1 = Number(document.querySelector("#nomeMoeda1").value)
    let nomeMoeda2 = Number(document.querySelector("#nomeMoeda2").value)
    
    if(nomeMoeda1 === nomeMoeda2) {
        nomeMoeda2 += 1
        if(nomeMoeda2 === 6 && nomeMoeda2 === 6) {
            nomeMoeda2 -= 3
            var alterarNomeDaMoeda = document.querySelector("#nomeMoeda1")
            switch(nomeMoeda2) {
                case 1:
                    alterarNomeDaMoeda.innerHTML = `<option value="1">Dólar Americano</option>`
                case 2:
                    alterarNomeDaMoeda.innerHTML = `<option value="2">Euro</option>`
                case 3:
                    alterarNomeDaMoeda.innerHTML = `<option value="3">Franco Suíço</option>` 
                case 4:
                    alterarNomeDaMoeda.innerHTML = `<option value="4">Iene</option>`
                case 5:
                    alterarNomeDaMoeda.innerHTML = `<option value="5">Libra Esterlina</option>`
                case 1:
                    alterarNomeDaMoeda.innerHTML = `<option value="6">Real</option>`              

            }
        }
    }
    var alterarNomeDaMoeda = document.querySelector("#nomeMoeda1")
    alterarNomeDaMoeda.innerHTML = `<option value="6">Real</option>
                                    <option value="2">Euro</option>
                                    <option value="3">Franco Suíço</option>
                                    <option value="4">Iene</option>
                                    <option value="5">Libra Esterlina</option>
                                    <option value="1">Dólar Americano</option>
                                    `
    



}