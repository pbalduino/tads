using System;
using System.Windows.Forms;
using SGQ.Controller;
using SGQ.Model;

namespace SGQ.View
{
    public partial class LoginView : Form
    {
        private LoginController controller;

        public LoginView(LoginController controller)
        {
            InitializeComponent();
            this.controller = controller;
        }

        private void btnEntrar_Click(object sender, EventArgs e)
        {
            Usuario usuario = controller.autenticar(txtUsuario.Text, txtSenha.Text);

            switch (usuario.Tipo)
            {
                case TipoUsuario.Admin:
                    controller.acessoAdmin();
                    break;
                case TipoUsuario.Usuario:
                    controller.acessoUsuario();
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
    }
}
