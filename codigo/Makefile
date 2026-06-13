#tipo abstrato de dados
tads:
	@echo "criando arquivo.o"
	@echo ""
	gcc -c ./src/src.c -I ./include/ -o ./obj/obj.o
	@echo ""

#executaveis
exec:
	@echo "criando executável"
	@echo ""
	gcc ./apps/main.c ./obj/obj.o -I ./include/ -o ./bin/app
	@echo ""

#executar o programa
run:
	@echo "executando programa"
	@echo ""
	./bin/app
	@echo ""

debug:
	@echo "compilando a aplicação e gerando o executável com opção de depuração completa"
	gcc -g ./apps/app.c ./src/src.c -I ./include/ -o ./src/debug/app_completo
	@echo ""
#limpar todos os arquivos gerados
clean:
	@echo "limpando arquivos executáveis e objetos"
	@echo ""
	rm -f ./bin/app ./obj/obj.o ./src/debug/app_completo
	@echo ""

#comando geral
all: clean tads exec run
	@echo "Fim da execução"
	@echo ""
