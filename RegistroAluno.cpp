#include <iostream>
using namespace std;

struct aluno {
	
	int matricula;
	float nota;
	char turma;
	
};

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	const int TAM_MAX_VETOR = 3; int i;
    float somaNotasTurmaA = 0, somaNotasTurmaB = 0;
    int countTurmaA = 0, countTurmaB = 0;
	
	struct aluno alunos[TAM_MAX_VETOR];
	
	for (i=0; i<TAM_MAX_VETOR; i++) {
		
		cout << "\nDigite a matr�cula do " << i+1 << "o aluno: ";
	    cin >> alunos[i].matricula;
	
     	cout << "Digite a nota do " << i+1 << "o aluno: ";
	    cin >> alunos[i].nota;
	
     	cout << "Digite a turma do " << i+1 << "o aluno: ";
	    cin >> alunos[i].turma;
	    
	    if (alunos[i].turma == 'A') {
	    	
            somaNotasTurmaA += alunos[i].nota;
            countTurmaA++;
            
        } 
		
		else if (alunos[i].turma == 'B') {
			
            somaNotasTurmaB += alunos[i].nota;
            countTurmaB++;
            
        }
	}
	
	cout<< "\nAlunos cadastrados: \n";
	
	for (i=0; i<TAM_MAX_VETOR; i++) {
		
		cout << "\nMatr�cula = " << alunos[i].matricula;
	    cout << "\nNota =  " << alunos[i].nota;
	    cout << "\nTurma =  " << alunos[i].turma << "\n";
		
	}
	
	cout << "\nLista de alunos com nota maior que 7 da turma A:";
	
	for (i=0; i<TAM_MAX_VETOR; i++) {
		
		if ((alunos[i].nota>=7) && (alunos[i].turma=='A')) { 
			
			cout << "\n\nMatr�cula = " << alunos[i].matricula;
			cout << "\nNota =  " << alunos[i].nota;
			
	    }	
	}
			
    float mediaTurmaA = somaNotasTurmaA / countTurmaA;
    cout << "\n\nM�dia das notas da turma A: " << mediaTurmaA;
    	
    float mediaTurmaB = somaNotasTurmaB / countTurmaB;
    cout << "\nM�dia das notas da turma B: " << mediaTurmaB;
        	
}
