
dependencies:
	sudo apt-get update
	sudo apt-get upgrade
	sudo apt-get install -y antlr4 libantlr4-runtime-dev
	sudo apt-get install wget
	wget https://apt.llvm.org/llvm.sh
	chmod +x llvm.sh
	sudo ./llvm.sh 18 all
	@rm llvm.sh
	@rm llvm.sh.1

parser:
	@mkdir -p generated
	cp grammar/BasaltVocabulary.g4 generated/BasaltVocabulary.g4
	cp grammar/BasaltGrammar.g4 generated/BasaltGrammar.g4
	cd generated && antlr4 -Dlanguage=Cpp BasaltVocabulary.g4
	cd generated && antlr4 -Dlanguage=Cpp -visitor BasaltGrammar.g4
	@ls generated

clean:
	@rm -rf generated
	@ls
