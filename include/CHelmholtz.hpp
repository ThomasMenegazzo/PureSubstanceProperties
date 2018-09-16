#pragma once
////////////////////////////////////////////////////////////////////////
/// @author Thomas Augusto Menegazzo
/// @class CHelmholtz
/// @file CHelmholtz.h
/// @brief Classe com os metodos de calculo da energia de Helmholtz e suas derivadas.
////////////////////////////////////////////////////////////////////////

class CHelmholtz
{
	protected:
		///Matriz de coeficientes para a parte polinomial.
		double** coeficientesPolinomio;
		
		///Matriz de coeficientes para a parte exponencial.
		double** coeficientesExponenciais;
		
		///Matriz de coeficientes para a parte de curva Gaussiana.
		double** coeficientesGaussianos;
		
		///Matriz de coeficientes para a parte n�o-anal�tica.
		double** coeficientesNaoAnaliticos;
		
		///Vetor de coeficientes do inicio da parte ideal.
		double* coeficientesIdeais1;
		
		///Matriz de coeficientes do fim da parte ideal.
		double** coeficientesIdeais2;
		
		///Matriz com o numero de somatorios de cada parte da equacao.
		int numeroCoeficientes[5]; 
		
		///Func�o para alocacao de matrizes din�micas.
		///@param nx N�mero de linhas da matriz.
		///@param ny N�mero de colunas da matriz.
		static double** Aloca(int nx, int ny);
		
		///Fun��o para desaloca��o.
		///@param pm Ponteiro para matriz a ser desalocada.
		///@param nx N�mero de linhas da matriz.
		static void Desaloca(double**& pm, int nx);	
	public:
		
        ///Temperatura cr�tica da substancia escolhida.
		double tCritica;
		
        ///Densidade cr�tica da substancia escolhida.
		double dCritica;
		
        ///Constante espec�fica dos gases.
		double rEspecifico;
        
		///Densidade reduzida.
        double delta;
		
		///Temperatura reduzida.
		double tau;
		
		///Valor da parte ideal da equa��o.
		double fIdeal;
		
		///Valor da primeira derivada com rela��o � temperatura da parte ideal.
		double fIdeal_t;
		
		///Valor da segunda derivada com rela��o � temperatura da parte ideal.
		double fIdeal_tt;
		
		///Valor da terceira derivada com rela��o � temperatura da parte ideal.
		double fIdeal_ttt;
		
		///Valor da parte residual da equacao.
		double fResidual;
		
		///Valor da primeira derivada com rela��o � temperatura da parte residual.
		double fResidual_t;
		
		///Valor da primeira derivada com rela��o � densidade da parte residual.
		double fResidual_d;
		
		///Valor da segunda derivada com rela��o � densidade da parte residual.
		double fResidual_dd;
		
		///Valor da segunda derivada mista.
		double fResidual_dt;
		
		///Valor da segunda derivada com rela��o � temperatura da parte residual.
		double fResidual_tt;
		
		///Valor da terceira derivada com rela��o � densidade da parte residual.
		double fResidual_ddd;
		
		///Valor da derivada com rela��o � temperatura de fResidual_dd.
		double fResidual_ddt;
		
		///Valor da derivada com rela��o � temperatura de fResidual_dt.
		double fResidual_dtt;
		
		///Valor da terceira derivada com rela��o � temperatura da parte residual.
		double fResidual_ttt;
	public:
		
		///Metodo para c�lculo de fIdeal.
		void FI();
		
		///Metodo para c�lculo de fIdeal_t.
		void FI_t();
		
		///Metodo para c�lculo de fIdeal_tt.
		void FI_tt();
		
		///Metodo para c�lculo de fIdeal_ttt.
		void FI_ttt();
		
		///Metodo para c�lculo de fResidual.
		void FR();
		
		///Metodo para c�lculo de fResidual_d.		
		void FR_d();
		
		///Metodo para c�lculo de fResidual_t.
		void FR_t();
		
		///Metodo para c�lculo de fResidual_dd.
		void FR_dd();
		
		///Metodo para c�lculo de fResidual_dt.
		void FR_dt();
		
		///Metodo para c�lculo de fResidual_tt.
		void FR_tt();
		
		///Metodo para c�lculo de fResidual_ddd.
		void FR_ddd();
		
		///Metodo para c�lculo de fResidual_ddt.
		void FR_ddt();
		
		///Metodo para c�lculo de fResidual_dtt.
		void FR_dtt();
		
		///Metodo para c�lculo de fResidual_ttt.
		void FR_ttt();
};
