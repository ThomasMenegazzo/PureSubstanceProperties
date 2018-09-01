# PureSubstanceProperties
Cálculo de propriedades termodinâmicas de substâncias puras

Este programa utiliza a formulação IAPWS-95 para calcular propriedades termodinâmicas de certas substâncias puras.
**Substâncias disponíveis para cálculo:**
- Água
- Dióxido de Carbono
- Metano
- Etano
- Isobutano
- n-Butano
- Nitrogênio

Para utilizar, basta rodar o arquivo executável. Alternativamente, pode ser gerado um novo projeto utilizando "Dev-C++". Para adicionar novas substanciâs, basta criar uma nova herança em CHelmHoltzAgua.h, adicionar os coeficientesda equação em um novo .cpp, e incluir isto na função de geração de CSimuladorPropriedades.

Próximos passos:
- Criar Makefile genérica
- Incluir unidades na versão de console
- Adicionar GUI ao repositório
- Refacturing
