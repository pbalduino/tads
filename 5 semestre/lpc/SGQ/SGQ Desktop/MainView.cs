using System.Windows.Forms;
using SGQ.Model;

namespace SGQ.View
{
    public partial class MainView : Form
    {
        private Usuario usuario;

        public MainView(Model.Usuario usuario)
        {
            this.usuario = usuario;
            InitializeComponent();

            mnuDepartamento.Enabled = usuario.Tipo.Equals(TipoUsuario.Admin);
            mnuMaterial.Enabled = usuario.Tipo.Equals(TipoUsuario.Admin);
            mnuUsuario.Enabled = usuario.Tipo.Equals(TipoUsuario.Admin);
        }

        private void MainView_FormClosed(object sender, FormClosedEventArgs e)
        {
            Application.Exit();
        }

        private void usuáriosToolStripMenuItem_Click(object sender, System.EventArgs e)
        {
            var usuarioView = new UsuarioView();
            usuarioView.MdiParent = this;
            usuarioView.Show();
        }

        private void mnuDepartamento_Click(object sender, System.EventArgs e)
        {
            var departamentoView = new DepartamentoView();
            departamentoView.MdiParent = this;
            departamentoView.Show();
        }

        private void mnuMaterial_Click(object sender, System.EventArgs e)
        {
            var materialView = new MaterialView();
            materialView.MdiParent = this;
            materialView.Show();
        }

        private void mnuSair_Click(object sender, System.EventArgs e)
        {
            Close();
        }
    }
}