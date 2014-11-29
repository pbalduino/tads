window.onload = function() {
  var postmon = new Postmon({zip:          "cep",
                             address:      "logradouro",
                             neighborhood: "bairro",
                             city:         "cidade",
                             state:        "estado" });

  var handler = new PostmonEventHandler();
};