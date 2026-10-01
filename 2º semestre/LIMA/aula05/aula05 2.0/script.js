const nome = document.querySelector("#nome")
const botao = document.querySelector("#botao")
const mensagem = document.querySelector("#mensagem")
const cor = document.querySelector("#cor")
const body = document.querySelector("body")

botao.addEventListener("click", function() {
    mensagem.textContent = `Bem-vindo(a), ${nome.value} ao site!`

    body.style.transition = `background ${intervalo.value}s ease`
    body.style.backgroundColor = `${cor.value}`
})