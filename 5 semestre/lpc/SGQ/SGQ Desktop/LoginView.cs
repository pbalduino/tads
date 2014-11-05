using System;
using System.Windows.Forms;
using SGQ.Model;

namespace SGQ.View
{
    public partial class LoginView : Form
    {
        public LoginView()
        {
            InitializeComponent();
        }

        private void btnEntrar_Click(object sender, EventArgs e)
        {
            Usuario usuario = autenticar(txtUsuario.Text, txtSenha.Text);

            switch (usuario.Tipo)
            {
                case TipoUsuario.Admin:
                    acessoAdmin(usuario);
                    break;
                case TipoUsuario.Usuario:
                    acessoUsuario();
                    break;
                default:
                    acessoNegado();
                    break;
            }
        }

        private void acessoNegado()
        {
            MessageBox.Show("Usuário ou senha inválidos",
                            "Acesso negado",
                            MessageBoxButtons.OK,
                            MessageBoxIcon.Hand);
        }

        public Usuario autenticar(string usuario, string senha)
        {
            if (usuario.Equals("admin") && senha.Equals("senha"))
            {
                return new Usuario(1, "Admin", "admin", "senha", TipoUsuario.Admin);
            }
            
            if (usuario.Equals("usuario") && senha.Equals("senha"))
            {
                return new Usuario(1, "Usuário", "usuario", "senha", TipoUsuario.Usuario);
            }
            
            return Usuario.INVALIDO;
        }

        internal void acessoAdmin(Usuario usuario)
        {
            Hide();
            MainView main = new MainView(usuario);
            main.Show();
        }

        internal void acessoUsuario()
        {
            MessageBox.Show("Você não tem acesso ao ambiente de publicação",
                            "Acesso negado",
                            MessageBoxButtons.OK,
                            MessageBoxIcon.Exclamation);
        }
    }
}
