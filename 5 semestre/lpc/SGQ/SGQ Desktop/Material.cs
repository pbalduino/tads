using System;

namespace SGQ.Model
{
    class Material
    {
        private readonly long id;
        private readonly string codigo;
        private readonly Departamento departamento;
        private readonly DateTime data;
        private readonly string titulo;
        private readonly string conteudo;
        private readonly Usuario usuario;

        public long Id { get { return id; } }
        public string Codigo { get { return codigo; } }
        public Departamento Departamento { get { return departamento; } }
        public DateTime Data { get { return data; } }
        public string Titulo { get { return titulo; } }
        public string Conteudo { get { return conteudo; } }
        public Usuario Usuario { get { return usuario; } }

        public Material(long id, 
                        string codigo, 
                        Departamento departamento, 
                        DateTime data, 
                        string titulo, 
                        string conteudo, 
                        Usuario usuario)
        {
            this.id = id;
            this.codigo = codigo;
            this.departamento = departamento;
            this.data = data;
            this.titulo = titulo;
            this.conteudo = conteudo;
            this.usuario = usuario;
        }
    }
}
