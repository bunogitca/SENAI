const nome =  document.querySelector("#nome")
const email = document.querySelector("#email")
const telefone = document.querySelector("#telefone")
const salvar = document.querySelector("#salvar")
const tabela = document.querySelector("#tabela")
const tabela2 = document.querySelector("#tabela2")
const professor = document.querySelector("#professor")
const materia = document.querySelector("#materia")

professor.addEventListener("change", function() {
    materia.style.display = professor.checked ? "block" : "none"
})

salvar.addEventListener("click", function() {
    if (professor.checked) {
        const linha2 = document.createElement("tr")

        const colunaNome2 = document.createElement("td")
        const colunaEmail2 = document.createElement("td")
        const colunaTelefone2 = document.createElement("td")
        const colunaMateria2 = document.createElement("td")

        colunaNome2.textContent = nome.value
        colunaEmail2.textContent = email.value
        colunaTelefone2.textContent = telefone.value
        colunaMateria2.textContent = materia.value

        linha2.append(colunaNome2)
        linha2.append(colunaEmail2)
        linha2.append(colunaTelefone2)
        linha2.append(colunaMateria2)

        tabela2.append(linha2)
    }

    else {
        const linha = document.createElement("tr")

        const colunaNome = document.createElement("td")
        const colunaEmail = document.createElement("td")
        const colunaTelefone = document.createElement("td")

        colunaNome.textContent = nome.value
        colunaEmail.textContent = email.value
        colunaTelefone.textContent = telefone.value

        linha.append(colunaNome)
        linha.append(colunaEmail)
        linha.append(colunaTelefone)

        tabela.append(linha)
    }
})