![license: MIT](https://img.shields.io/badge/license-MIT-blue)
![version: pre-release](https://img.shields.io/badge/version-pre--release-red)

# unina-Basalt
Repository satellite per [Basalt](https://www.github.com/fDero/Basalt). Contiene una versione modificata di Basalt 
per utilizzare [ANTLR4](https://www.antlr.org) ed il documento di tesi di laurea triennale in informatica.

La modifica ha costretto il downgrade da C++20 a C++17 rendendo non più utilizzabile lo script di build. Si sarà dunque 
costretti a procedere per compilazione manuale. Si tenga presente che il codice generato da ANTLR4 genera dei warning e ha problemi
di compatibiltà con la maggior parte delle configurazioni di compilazione provate.