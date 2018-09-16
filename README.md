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

Para utilizar, basta baixar o repositório, abrir o console e usar `make` para compilar o programa. O executável `main` será criado na pasta bin, basta executar ele. Para adicionar novas substâncias, basta criar uma nova classe herdeira de CHelmholtz com os coeficientes da equação, e incluir isto na função construtora de CSimuladorPropriedades.

Próximos passos:
- Adicionar GUI ao repositório
- Refacturing

**Bugs**
- Entalpia/Entropia/Gibbs/U. para CO2 e isoButano estao com valores/unidades errados
