typedef struct operacao operaMat;

operaMat *operacao_cria(float n1, float n2,float resultado);

void liberaOperacao_matematica(operaMat *p);

void enivarValores(operaMat *p, float n1, float n2);

void realizaOpera(operaMat *p, int opc2);

float ultima_operacao(operaMat *p);
