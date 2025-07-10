# Desafio Xadrez - Nível Mestre

Este repositório contém uma solução em C para o **Desafio Xadrez** (Nível Mestre).

## Arquivos

- **desafio_xadrez.c**: Código-fonte em C que implementa:
  - Movimentação recursiva do **Bispo** (diagonal para cima/direita).
  - Movimentação recursiva da **Torre** (horizontal para a direita).
  - Movimentação recursiva da **Rainha** (horizontal para a esquerda).
  - Movimentação do **Cavalo** em L (dois passos para cima + um para a direita), usando loops com múltiplas variáveis, `continue` e `break`.

## Como compilar e executar

```bash
gcc -o xadrez desafio_xadrez.c
./xadre
```

Isso irá gerar a saída com a sequência de movimentos de cada peça.

## Uso com Git

1. Inicie um repositório Git:
   ```bash
   git init
   ```
2. Adicione os arquivos:
   ```bash
   git add desafio_xadrez.c README.md
   ```
3. Faça o commit inicial:
   ```bash
   git commit -m "Solução Desafio Xadrez - Nível Mestre"
   ```
4. Conecte a um repositório remoto (opcional):
   ```bash
   git remote add origin <URL_DO_REPOSITÓRIO>
   git push -u origin main
   ```

## Autor

- Adriel Cardoso Araújo
