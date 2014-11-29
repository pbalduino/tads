window.onload = function() {
  var postmon = new Postmon({zip:          "cep",
                             address:      "logradouro",
                             neighborhood: "bairro",
                             city:         "cidade",
                             state:        "estado" });

  document.getElementById("cep").onblur = postmon.trigger;
};