window.onload = function() {

  new PostmonClient("http://api.postmon.com.br/v1/cep/", new PostmonRichUI())
    .search("03979000", function(data) {
      console.log(data);
    });

  new PostmonClient("http://api.postmon.com.br/v1/cep/", new PostmonEmptyUI())
    .search("99999999", function(data) {
      console.log(data);
    });

};