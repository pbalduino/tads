function PostmonClient(baseURL) {
  var uniqueId = "postmon-waiter-" + Math.round(Math.random() * 0x7fff);

  var showWait = function() {
    document.getElementById(uniqueId).style.visibility = "visible";
  }

  var hideWait = function() {
    document.getElementById(uniqueId).style.visibility = "hidden";
  }

  var createWaiter = function() {
    var text = document.createTextNode("Aguarde - pesquisando CEP.");

    var attrClass = document.createAttribute("class");
    attrClass.value = "postmon-waiter";

    var attrId = document.createAttribute("id");
    attrId.value = uniqueId;

    var element = document.createElement("div");
    element.appendChild(text);
    element.setAttributeNode(attrClass);
    element.setAttributeNode(attrId);

    document.body.appendChild(element);
  }

  this.search = function(zip, callback) {
    var xhr = new XMLHttpRequest();

    xhr.onreadystatechange = function(event) {     
      if (xhr.readyState === 4 ) {
        hideWait();

        if(xhr.status === 200) {
          return callback(JSON.parse(xhr.responseText), xhr, event);
        } else {
          return callback({status: xhr.status}, xhr, event);
        };
      };
    };

    showWait();
    xhr.open("GET", baseURL + zip, true);
    xhr.send();
  }

  createWaiter();
}

function Postmon(options) {

  var LocalStorage = function(id) {

    this.insert = function(key, value) {
      var type = typeof(value);
      key = id + "." + key;

      localStorage[key] = JSON.stringify({type:  type, 
                                          value: type === "object" ?
                                                 JSON.stringify(value) :
                                                 value});
    };

    this.read = function(key) {
      key = id + "." + key;
      var value = localStorage[key];

      if(value === undefined) {
        return undefined;
      }

      var obj = JSON.parse(value);

      return (obj["type"] === "object") ?
             JSON.parse(obj["value"]) :
             obj["value"];
    };

    this.remove = function(key) {
      localStorage.removeItem(id + "." + key);
    };
  }

  var storage = new LocalStorage("postmon.cache");
  var client  = new PostmonClient("http://api.postmon.com.br/v1/cep/");
  var timer   = new PostmonDaemon(5000, storage, client);
}