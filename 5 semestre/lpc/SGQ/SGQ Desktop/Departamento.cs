using System;

namespace SGQ.Model
{
    class Departamento
    {
        private readonly long id;
        private readonly string codigo;
        private readonly string descricao;

        public long Id { get { return id; } }
        public string Codigo { get { return codigo; } }
        public string Descricao { get { return descricao; } }

        public Departamento(long id, 
                            string codigo, 
                            string descricao)
        {
            this.id = id;
            this.codigo = codigo;
            this.descricao = descricao;
        }
    }
}
