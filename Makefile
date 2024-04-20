
CPPCOMPILER := g++ -std=c++17 -Wall -Wno-attributes
ANTLR4 := -I/usr/include/antlr4-runtime -I./generated  -L/usr/lib/x86_64-linux-gnu/libantlr4-runtime.so -lantlr4-runtime
GTEST := -lgtest -lgtest_main -pthread

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
	cp grammar/BasaltLexer.g4 generated/BasaltLexer.g4
	cp grammar/BasaltParser.g4 generated/BasaltParser.g4
	cd generated && antlr4 -Dlanguage=Cpp -visitor BasaltLexer.g4 BasaltParser.g4
	@ls generated

clean:
	@rm -rf generated
	@ls

build:
	${CPPCOMPILER} src/main.cpp src/*/*.cpp generated/*.cpp ${ANTLR4} -o basalt -I./include

test:
	${CPPCOMPILER} src/*/*.cpp tests/*/*.cpp generated/*.cpp ${ANTLR4} ${GTEST} -o test_binary -I./include
	./test_binary && rm test_binary