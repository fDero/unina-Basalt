
dependencies:
	sudo apt-get update
	sudo apt-get upgrade
	sudo apt-get install -y antlr4 libantlr4-runtime-dev

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
