# Projeto 2 de MC504  
## Grupo  
### Tiago Dall'Oca 206341 Heigon Soldera 217638 Piethro César 223549   
  
Esse projeto consiste em resolver algum problema clássico de aplicação multithread e utilizar alguma forma de visualização gráfica.
  
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
[Vídeo no google drive](https://drive.google.com/file/d/1jFXMSTMGs4E_B81T6ChZp7rrDxM71I5E/view?usp=sharing)