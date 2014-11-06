<%@ Page Title="" Language="C#" MasterPageFile="~/Materiais.Master" AutoEventWireup="true" CodeBehind="material.aspx.cs" Inherits="SGQWeb.material" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
<h2>Detalhes do Material</h2>
<hr />
<table border="0">
<tr><td><b>Departamento: </b> </td><td>
  <asp:Label ID="lblDepartamento" runat="server" Text=""></asp:Label></td></tr>
<tr><td><b>Data: </b> </td><td>
  <asp:Label ID="lblData" runat="server" Text=""></asp:Label></td></tr>
<tr><td><b>Título: </b> </td><td>
  <asp:Label ID="lblTitulo" runat="server" Text=""></asp:Label></td></tr>
<tr><td colspan="2" style="text-align: center; font-weight: 700;">Conteúdo</td></tr>
<tr><td colspan="2">
  <asp:Label ID="lblConteudo" runat="server" Text="" Width="100%"></asp:Label></td></tr>
<tr><td colspan="2" style="text-align: center">
  <asp:Button ID="btnVoltar" runat="server" Text="Voltar" /></td></tr>
</table>
</asp:Content>
