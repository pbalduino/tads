using System;

namespace SGQWeb
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void btnEntrar_Click(object sender, EventArgs e)
        {
          if ((txtUsuario.Text.Equals("usuario") || txtUsuario.Text.Equals("senha"))
              && txtSenha.Text.Equals("senha"))
          {
            Response.Redirect("consulta.aspx");
          }
          else
          {
            lblMensagem.Text = "Usuário ou senha inválidos";
            lblMensagem.Visible = true;
          }
        }
    }
}
