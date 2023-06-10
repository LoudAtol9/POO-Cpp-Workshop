#include "../source/modelos/SocioNormal.hpp"
#include "../source/modelos/SocioVIP.hpp"
#include "../source/modelos/SocioPlus.hpp"

int main()
{
    Pessoa p1;
    p1.setNome("Andre");
    p1.setCpf("58726335727");

    Pessoa p2;
    p2.setNome("Mauri");
    p2.setCpf("12629893375");

    Pessoa p3;
    p3.setNome("Lucas");
    p3.setCpf("24091742726");

    Pessoa p4;
    p4.setNome("Thiago");
    p4.setCpf("89540487730");

    Pessoa p5;
    p5.setNome("Orlando");
    p5.setCpf("38411656306");

    /*
     * Verifique que todos os tamanhos são iguais
     * Essencial para o funcionamento da lista;
     */
    sizeof(SocioPlus);
    sizeof(SocioNormal);
    sizeof(SocioVIP);
    sizeof(SocioTorcedor);

    /*
     * Lista de Socios do Clube (?)
     */
    MyLinkedList listaSocios(sizeof(SocioTorcedor));

    SocioNormal s1("Gabriel", "41610888685");

    SocioVIP s2("Gabriel", "53641462193");

    SocioPlus s3("Frank", "78461394100");

    listaSocios.insere(&s1);
    listaSocios.insere(&s2);
    listaSocios.insere(&s3);

    SocioPlus* s4;

    /*
     * Vemos aqui a capacidade de busca
     * Temos uma cópia do elemento e não o próprio
     * Provo abaixo
     */
    s4 = (SocioPlus*) listaSocios.busca(2);
    std::cout << s4->toString() << std::endl; 

    s3.setPessoaIndicada(p1);
    s4->setPessoaIndicada(p2);


    /*
     * Vemos que as pessoas foram adicionadas no
     * mesmo socio, porem não no mesmo endereco de memória
     * Observe os resultados distintos
     */
    std::cout << (s4->getPessoaIndicada(0)).toString() << std::endl;
    std::cout << (s3.getPessoaIndicada(0)).toString() << std::endl; 
    

    /*
     * O Objetivo do MyLinkedList eh ser seguro, não sofrendo alteracoes
     * do resto do programa, apenas sendo alterado com chamadas.
     * O usuário pode burlar essa blindagem passando um void** ptr
     * O endereço de memória será blindado, porém o que ele aponta não.
     */


    /*
     * Podemos pegar um socio de uma categoria e allocar em outra
     * Caso esse socio esteja allocado com new ele será deletado
     * Caso contrário, não tem o que fazer, terá de ser apagado manualmente 
     * pelo usuário (programador)
     */
    SocioVIP s5(&s1);

    /*
     * Como Socio Normal não possui pessoas para indicar
     * Geramos um erro na busca, porém o programa trata o erro
     * e não teremos problema na transformação
     */

}