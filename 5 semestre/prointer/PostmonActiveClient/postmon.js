var PostmonDaemon = function(interval, storage, uiManager) {

};

function Postmon(options) {
  var PostmonEmptyUI = function() {
    this.showWait = function() {};
    this.hideWait = function() {};
  }

  var PostmonRichUI = function() {
    var uniqueId = "postmon-waiter-" + Math.round(Math.random() * 0x7fff);

    this.showWait = function() {
      document.getElementById(uniqueId).style.visibility = "visible";
    };

    this.hideWait = function() {
      document.getElementById(uniqueId).style.visibility = "hidden";
    };

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
    };

    createWaiter();
  }

  var PostmonClient = function(baseURL, uiManager) {
    this.search = function(zip, callback) {
      var xhr = new XMLHttpRequest();

      xhr.onreadystatechange = function(event) {     
        if (xhr.readyState === 4 ) {
          uiManager.hideWait();

          if(xhr.status === 200) {
            return callback(JSON.parse(xhr.responseText), xhr, event);
          } else {
            return callback({status: xhr.status}, xhr, event);
          };
        };
      };

      uiManager.showWait();
      xhr.open("GET", baseURL + zip, true);
      xhr.send();
    }
  }

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

      if(value !== undefined) {
        var obj = JSON.parse(value);

        return (obj["type"] === "object") ?
               JSON.parse(obj["value"]) :
               obj["value"];
      };
    };

    this.remove = function(key) {
      localStorage.removeItem(id + "." + key);
    };
  }

  var loadDefaults = function(userOptions) {
    var options = userOptions || {};

    options["interval"]     = options["interval"] || 5000;
    options["api-url"]      = options["api-url"]  || "http://api.postmon.com.br/v1/cep/";
    options["storage"]      = options["storage"]  || "postmon.cache";

    return options;
  }

  var populateFields = function(data) {
    if(options["address"])
      document.getElementById(options["address"]).value = data["endereco"] || data["logradouro"];

    if(options["neighborhood"])
      document.getElementById(options["neighborhood"]).value = data["bairro"];

    if(options["city"])
      document.getElementById(options["city"]).value = data["cidade"];

    if(options["state"])
      document.getElementById(options["state"]).value = data["estado"];
  }

  this.trigger = function(e) {
    var zipCode = zipField.value;

    var addressData = storage.read(zipCode);

    if(!addressData) {
      client.search(zipCode, function(data) {
        addressData = data;
        storage.insert(zipCode, addressData);

        populateFields(addressData);
      });
    } else {
      populateFields(addressData);
    }
  }

  var options = loadDefaults(options);

  var zipField = document.getElementById(options["zip"]);

  var storage = new LocalStorage(options["storage"]);
  var client  = new PostmonClient(options["api-url"], new PostmonRichUI());
  var daemon  = new PostmonDaemon(options["interval"], storage, client);
}