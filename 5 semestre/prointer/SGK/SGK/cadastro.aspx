<%@ Page Language="C#" MasterPageFile="~/Site.master" AutoEventWireup="true"
    CodeBehind="cadastro.aspx.cs" Inherits="SGK.About" %>

<asp:Content ID="HeaderContent" runat="server" ContentPlaceHolderID="HeadContent">
</asp:Content>
<asp:Content ID="BodyContent" runat="server" ContentPlaceHolderID="MainContent">
  <script type="text/javascript">
    window.onload = function () {
      var postmon = new Postmon({ 
        zip: "cep",
        address: "endereco",
        neighborhood: "bairro",
        city: "cidade",
        state: "estado"
      });

      document.getElementById("cep").onblur = postmon.trigger;
    }
  </script>
  <div class="container">
  <div class="row">
    <h2>Cliente</h2>
    <hr />
    <form class="form-horizontal" role="form">
      <div class="row form-group">
        <label for="codigo" class="col-sm-2 control-label">Código:</label>
        <div class="col-sm-2">
          <input type="text" class="form-control" id="codigo" placeholder="Código">
        </div>
      </div>
      <div class="row form-group">
        <label for="Razão Social" class="col-sm-2 control-label">Razão Social:</label>
        <div class="col-sm-10">
          <input type="text" class="form-control" id="razaoSocial" placeholder="Razão Social">
        </div>
      </div>
      <div class="row form-group">
        <label for="CEP" class="col-sm-2 control-label">CEP:</label>
        <div class="col-sm-2">
          <input type="text" class="form-control" id="cep" placeholder="CEP" maxlength="8">
        </div>
      </div>
      <div class="row form-group">
        <label for="endereco" class="col-sm-2 control-label">Endereço:</label>
        <div class="col-sm-10">
          <input type="text" class="form-control" id="endereco" placeholder="Endereço">
        </div>
      </div>
      <div class="row form-group">
        <label for="bairro" class="col-sm-2 control-label">Bairro:</label>
        <div class="col-sm-10">
          <input type="text" class="form-control" id="bairro" placeholder="Bairro">
        </div>
      </div>
      <div class="row form-group">
        <label for="cidade" class="col-sm-2 control-label">Bairro:</label>
        <div class="col-sm-10">
          <input type="text" class="form-control" id="cidade" placeholder="Cidade">
        </div>
      </div>
      <div class="row form-group">
        <label for="estado" class="col-sm-2 control-label">Estado:</label>
        <div class="col-sm-2">
          <input type="text" class="form-control" id="estado" placeholder="Estado">
        </div>
      </div>
      <hr />

      <button type="submit" class="btn btn-primary btn-lg">Submit</button>
    </form>
  </div>
</div>

</asp:Content>
