# sistemas-embarcados - Driver Linux

## Resumo

*Este um é exeplo de driver linux feito em C, o arquivo makefile compila o arquivo driver.c. O driver possui uma função init e uma função exit, as função fazem um print diretamente no kernel do linux utilizando a função printk. Porém, a funcção init faz um print enquanto o driver está sendo utilizado, e a função exit quando o driver é removido.*

### Passo a passo

- #####  Clonando o repositório
***git clone https://github.com/jonatasfernandessilva7/driverLinux.git***
- #### Compilando o driver
  Depois de clonar abra um terminal dentro da pasta do projeto e execute o comando : ***make***
- ### Depois de compilar
  Após o driver estar compildo basta rodar, para isso execute os comandos abaixo:

  - *sudo su*, para entrar em modo administrador
  - *insmod driver.ko*, para instalar o driver na sua máquina
  - *lsmod | head -10*, para vizualizar o driver
  - *dmesg | tail*, para vizualizar a mensagem do driver

*Para remover o driver execute: rm -r driver*
  
### Autor

Jonatas Fernandes
