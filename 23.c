    #include <stdio.h>
     
    int main() {
        unsigned long int codigo, codigo_maior_lucro, codigo_mais_vendido;
        float preco_compra, preco_venda, lucro, total_compras = 0, total_vendas = 0;
        int numero_vendas, r = 0, s = 0, t = 0;
        float maior_lucro = 0;
        int maior_vendas = 0;
     
        while (1) {
            int status = scanf("%lu %f %f %d", &codigo, &preco_compra, &preco_venda, &numero_vendas);
            if (status != 4) {
                break;
            }
     
     
            lucro = (preco_venda - preco_compra) / preco_compra * 100;
            total_compras += preco_compra * numero_vendas;
            total_vendas += preco_venda * numero_vendas;
     
            if (lucro < 10) {
                r++;
            } else if (lucro >= 10 && lucro <= 20) {
                s++;
            } else {
                t++;
            }
     
            if (lucro > maior_lucro) {
                maior_lucro = lucro;
                codigo_maior_lucro = codigo;
            }
     
            if (numero_vendas > maior_vendas) {
                maior_vendas = numero_vendas;
                codigo_mais_vendido = codigo;
            }
        }
     
        float lucro_total = total_vendas - total_compras;
        float percentual_lucro_total = (total_vendas > 0) ? (lucro_total / total_compras) * 100 : 0;
     
     
        printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", r);
        printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", s);
        printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", t);
        printf("Codigo da mercadoria que gerou maior lucro: %lu\n", codigo_maior_lucro);
        printf("Codigo da mercadoria mais vendida: %lu\n", codigo_mais_vendido);
        printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n",
               total_compras, total_vendas, percentual_lucro_total);
     
        return 0;
    }