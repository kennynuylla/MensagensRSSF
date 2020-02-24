#include "MensagensRSSF.h"

void conexaoFracasso(String URL, String erro, String tentativa)
{
    Serial.print("Erro na requisição para " + URL + ": ");
    Serial.print(erro + ". Momento: ");
    Serial.println(tentativa);
}

void conexaoJsonFracasso(String erro, String tentativa)
{
    Serial.print("Erro ao interpretar resposta: ");
    Serial.print(erro + ". Momento: ");
    Serial.println(tentativa);
}

void mostrarIPMAC(IPAddress ip, String mac)
{
    Serial.println("");
    Serial.print("IP: ");
    Serial.println(ip);
    Serial.print("MAC: ");
    Serial.println(mac);
}

void pedidoNaoAutorizado()
 {
    Serial.println("Acesso negado.");
}

void sucesso() 
{
    Serial.println("Operação realizada com sucesso!");
}

void conectando()
{
    Serial.print("Conectando");
}

void esperar()
{
    Serial.print(".");
}

void fimConexao()
{
    Serial.println("Conexão perdida.");
}

void requisicaoNaoAtendida() 
{
    Serial.println("Última requisição NÃO foi atendida.");
}

void requisicaoAtendida()
{
    Serial.println("Última requisição foi atendida.");
}

void exibirMonitoramento(float temperatura, float umidade, int radiacaoUV, int fumaca, int gasToxico, int fogo)
{
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.println(" °C");

    Serial.print("Umidade: ");
    Serial.print(umidade);
    Serial.println(" %");

    Serial.print("Radiação UV: Índice ");
    Serial.println(radiacaoUV);

    Serial.print("Fumaça: ");
    Serial.println(fumaca);

    Serial.print("Gás Tóxico: ");
    Serial.println(gasToxico);

    Serial.print("Fogo: ");
    Serial.println(fogo);
    
}

void novaRequisicaoAtendida()
{
    Serial.println("Nova requisição atendida com sucesso.");
}

void RodadaDeAmostrasNaN(int rodada, int amostras)
{
    Serial.print("NaN lançado em: ");
    Serial.print(rodada);
    Serial.print("/");
    Serial.print(amostras);
    Serial.println(".");
}

void RodadaDeAmostrasSucesso(int rodada, int amostras)
{
    Serial.print("Amostra coletada com sucesso: ");
    Serial.print(rodada);
    Serial.print("/");
    Serial.print(amostras);
    Serial.println(".");  
}