<%@ Page Title="" Language="C#" MasterPageFile="~/Materiais.Master" AutoEventWireup="true" CodeBehind="consulta.aspx.cs" Inherits="SGQWeb.consulta" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
<h2>Consulta de Materiais</h2>
<hr />
<table border="0">
<tr><td>Departamento:</td><td>
  <asp:DropDownList ID="cboDepartamento" runat="server" Height="16px" 
    Width="200px">
  </asp:DropDownList>
  </td></tr>
  <tr><td>Texto:</td><td><asp:TextBox ID="txtTexto" runat="server" MaxLength="40"></asp:TextBox></td></tr>
  <tr><td>Período</td><td><asp:TextBox ID="txtDe" runat="server" MaxLength="10"></asp:TextBox> - <asp:TextBox ID="txtAte" runat="server" MaxLength="10"></asp:TextBox></td></tr>
  <tr><td colspan="2" style="text-align: center">
    <asp:Button ID="btnPesquisar" runat="server" Text="Pesquisar" />
    </td></tr>
</table>
<hr />
<asp:GridView ID="grdResultados" runat="server" AutoGenerateSelectButton="True" 
    ShowHeaderWhenEmpty="True">
</asp:GridView>
  <asp:SqlDataSource ID="SqlDataSource1" runat="server"></asp:SqlDataSource>
</asp:Content>
