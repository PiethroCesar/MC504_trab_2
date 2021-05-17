# Projeto 2 de MC504  
## Grupo  
### Heigon Soldera 217638 Piethro César 223549 Tiago Dalloca  
  
Esse projeto consiste em resolver algum problema clássico de aplicação multithread e utilizar alguma forma de visualizaão gráfica.
  
O problema escolhido pelo grupo chama-se readers-writers, consiste em leitores e escritores utilizando o mesmo livro, de forma que, escritores tem acesso exclusivo e leitores podem acessar concorrentemente. Isso pode ser expandido para bancos e estruturas de dados onde não podem ser acessados durante modificações.
   
Na nossa versão temos 1 bíblia, 5 fiéis que leem a bíblia e 2 anjos escrevendo. Os anjos escrevem na bíblia quando não tiver ninguém presente na sala e os fiéis entram na sala quando não tiver nenhum anjo escrevendo, utilizamos de prints com desenhos ASCII para visualização dos cenários.

### Compilação

```console
make
```

### Execução

```console
./reader_writer
```

### Link para o vídeo
[Aqui]