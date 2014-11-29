using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace SGK
{
  public partial class _Default : System.Web.UI.Page
  {
    protected void btnLogin_Click(object sender, EventArgs e)
    {
      if (txtLogin.Text.Equals("usuario@email.com") && txtPassword.Text.Equals("senha"))
      {
        Response.Redirect("cadastro.aspx");
      }
      else
      {
        lblMessage.Visible = true;
        lblMessage.Text = "Usuário ou senha inválidos";
      }
    }
  }
}
