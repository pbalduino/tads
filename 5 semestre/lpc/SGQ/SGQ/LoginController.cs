using System;
using SGQ.Model;

namespace SGQ.Controller
{
    public class LoginController
    {
        public Usuario autenticar(string usuario, string senha)
        {
            if (usuario.Equals("usuario") && senha.Equals("senha"))
            {
                return new Usuario(1, "Usuário", "usuario", "senha", TipoUsuario.Usuario);
            }
            return Usuario.INVALIDO;
        }

        internal void acessoAdmin()
        {
            throw new NotImplementedException();
        }

        internal void acessoUsuario()
        {
            throw new NotImplementedException();
        }
    }
}
