using System;

namespace SGQ.Model
{
    public class Usuario
    {
        public readonly static Usuario INVALIDO = new Usuario(-1, "Inválido", "", "", TipoUsuario.Invalido);

        public static Usuario UsuarioAtual = INVALIDO;

        private readonly long id;
        private readonly string nome;
        private readonly string login;
        private readonly string senha;
        private readonly TipoUsuario tipo;

        public long Id { get { return id; } }
        public string Nome { get { return nome; } }
        public string Login { get { return login; } }
        public string Senha { get { return senha; } }
        public TipoUsuario Tipo { get { return tipo; } }

        public Usuario(long id, 
                       string nome, 
                       string login,
                       string senha,
                       TipoUsuario tipo)
        {
            this.id = id;
            this.nome = nome;
            this.login = login;
            this.senha = senha;
            this.tipo = tipo;
        }
    }
}