#ifndef MENSAGENS_H
#define MENSAGEN_H

#include<Arduino.h>

void conexaoFracasso(String URL, String erro, String tentativa);
void conexaoJsonFracasso(String erro, String tentativa);
void mostrarIPMAC(IPAddress ip, String mac);
void pedidoNaoAutorizado();
void requisicaoNaoAtendida();
void requisicaoAtendida();
void conectando();
void esperar();
void sucesso();
void fimConexao();
void exibirMonitoramento(float temperatura, float umidade, int radiacaoUV, int fumaca, int gasToxico, int fogo);
void novaRequisicaoAtendida();
void RodadaDeAmostrasNaN(int rodada, int amostras);
void RodadaDeAmostrasSucesso(int rodada, int amostras);

#endif