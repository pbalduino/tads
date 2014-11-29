<%@ Page Title="Home Page" Language="C#" MasterPageFile="~/Site.master" AutoEventWireup="true"
    CodeBehind="login.aspx.cs" Inherits="SGK._Default" %>

<asp:Content ID="HeaderContent" runat="server" ContentPlaceHolderID="HeadContent">
</asp:Content>
<asp:Content ID="BodyContent" runat="server" ContentPlaceHolderID="MainContent">
  <div class="container">
  <div class="row">
    <div class="col-md-4 col-md-offset-4">
      <form class="form-signin" role="form">
        <h2 class="form-signin-heading">Entrar no sistema</h2>
        <label for="txtLogin" class="sr-only ">Usuário</label>
        <asp:TextBox ID="txtLogin" runat="server" type="email" class="form-control" placeholder="Email do usuário" required autofocus></asp:TextBox>
        <label for="txtPassword" class="sr-only">Senha</label>
        <asp:TextBox runat="server" type="password" id="txtPassword" class="form-control" placeholder="Senha" required></asp:TextBox>
        <asp:Button
          ID="btnLogin" runat="server" Text="Entrar" type="submit" 
          class="btn btn-lg btn-primary btn-block" onclick="btnLogin_Click"/>
      </form>
    </div>
  </div>
  <div class="row text-danger text-center text">
    <asp:Label ID="lblMessage" runat="server" Visible="False"></asp:Label>
  </div>
</div>
</asp:Content>
