void handleCSSAll() {
    server.send(200, "text/css", 
        "html {"
        "    height: 100%;"
        "    width: 100%;"
        "    background-image: linear-gradient(-45deg, #f5bde6, #c6a0f6, #ed8796, #ee99a0, #f5a97f, #eed49f, #a6da95, #8bd5ca, #91d7e3, #7dc4e4, #8aadf4);"
        "    background-size: 4000% 4000%;"
        "    -webkit-animation: gradient-example-1 120s ease infinite;"
        "    animation: gradient-example-1 120s ease infinite;"
        "}"
        "@-webkit-keyframes gradient-example-1 {"
        "    0% { background-position: 0 0; }"
        "    50% { background-position: 100% 100%; }"
        "    100% { background-position: 0 0; }"
        "}"
        "@keyframes gradient-example-1 {"
        "    0% { background-position: 0 0; }"
        "    50% { background-position: 100% 100%; }"
        "    100% { background-position: 0 0; }"
        "}"
        ".login-box {"
        "    position: absolute;"
        "    top: 50%;"
        "    left: 50%;"
        "    width: 90vw;"
        "    padding: 3vh;"
        "    transform: translate(-50%, -50%);"
        "    background: #24273a76;"
        "    -webkit-backdrop-filter: blur(200px);"
        "    -webkit-backdrop-filter: invert(10%);"
        "    box-sizing: border-box;"
        "    box-shadow: 0 15px 25px rgba(0, 0, 0, .2);"
        "    border-radius: 1vh;"
        "}"
        "h2, h3{"
        "    padding: 0;"
        "    color: #fff;"
        "    text-align: center;"
        "}"
        "h2 { "
        "    font-size: 4vh; "
        "    font-family: 'HoeflerText-BlackItalic';"
        "}"
        "h3 {"
        "    font-size: 2.5vh;"
        "    font-style: italic;"
        "    max-height: 40vh;"
        "    color: #b7bdf8;"
        "}"
        ".login-box .user-box {"
        "    position: relative;"
        "}"
        "input {"
        "    width: 100%;"
        "    padding: 0.5vh 1vw;"
        "    font-size: 4vh;"
        "    color: #fff;"
        "    border: none;"
        "    box-shadow: 0px 0px 10px rgba(200, 200, 200, .2);"
        "    margin-bottom: 1vh;"
        "    margin-top: 2vh;"
        "    outline: none;"
        "    background: transparent;"
        "    border-radius: 20px;"
        "}"
        "label {"
        "    position: absolute;"
        "    top: 0;"
        "    left: 0;"
        "    padding: 2vh 2vw;"
        "    font-size: 4vh;"
        "    color: #fff;"
        "    pointer-events: none;"
        "    transition: .5s;"
        "    font-family: 'GillSans-Italic';"
        "}"
        ".login-box .user-box input:focus ~ label,"
        ".login-box .user-box input:valid ~ label {"
        "    top: -4vh;"
        "    left: -2vw;"
        "    color: #8AADF4;"
        "    font-size: 2.5vh;"
        "}"
        ".but {"
        "    position: relative;"
        "    display: inline-block;"
        "    color: #03e9f4;"
        "    font-size: 4vh;"
        "    height: 6vh;"
        "    width: 30vw;"
        "    margin-left:30%;"
        "    font-size: 3vh;"
        "    color: #aaddff;"
        "    padding: 4% 2%;"
        "    border-radius: 20px;"
        "    box-shadow: 0px 0px 20px rgba(200, 200, 200, .2);"
        "    font-family: 'HoeflerText-BlackItalic';"
        "}"
    );
}

void handleJSCode() {
    if (server.hasArg("cd")){ 
      server.send(200, "text/js", 
          "document.addEventListener('DOMContentLoaded', function() {"
          "   const form = document.querySelector('form');"
          "   const input = form.querySelector('input');"
          "   const submitButton = document.querySelector('.but');"
          "   submitButton.addEventListener('click', function(event) {"
          "        event.preventDefault();"
          "        const enteredCode = input.value.trim();"
          "        if (enteredCode === '"+server.arg("cd")+"') {"
          "           window.location.href = '"+server.arg("cd")+"';"
          "        }"
          "   });"
          "});"
      );
    }
}

void handleMain(String clue) {
    server.send(200, "text/html", 
        "<head>"
        "    <meta charset='utf-8'>"
        "    <link rel='stylesheet' href='http://192.168.4.1/css'>"
        "    <script src='http://192.168.4.1/js?cd=79801'></script>"
        "    <script src='http://192.168.4.1/js?cd=75502'></script>"
        "    <script src='http://192.168.4.1/js?cd=42403'></script>"
        "    <script src='http://192.168.4.1/js?cd=46704'></script>"
        "    <script src='http://192.168.4.1/js?cd=20105'></script>"
        "    <script src='http://192.168.4.1/js?cd=57206'></script>"
        "    <script src='http://192.168.4.1/js?cd=25607'></script>"
        "    <script src='http://192.168.4.1/js?cd=19208'></script>"
        "    <script src='http://192.168.4.1/js?cd=23709'></script>"
        "    <script src='http://192.168.4.1/js?cd=18610'></script>"
        "    <script src='http://192.168.4.1/js?cd=64311'></script>"
        "    <script src='http://192.168.4.1/js?cd=61712'></script>"
        "    <script src='http://192.168.4.1/js?cd=92713'></script>"
        "    <script src='http://192.168.4.1/js?cd=17514'></script>"
        "    <script src='http://192.168.4.1/js?cd=48615'></script>"
        "    <script src='http://192.168.4.1/js?cd=76716'></script>"
        "</head>"
        "<div class='login-box'>"
        "    <h2>Локация<br/>подарочков</h2>"
        "    <form action='#' method='post'>"
        "        <div class='user-box'>"
        "            <input type='number' pattern='\\d*' name='' required=''>"
        "            <label>Код</label>"
        "        </div>"
        "        <h3>"+clue+"</h3>"
        "        <input type='submit' class='but' value='Ввести'></input>"
        "    </form>"

        "</div>"
    );
}

void handleParts(String location, String clue, String codenext) {
    server.send(200, "text/html", 
        "<head>"
        "    <meta charset='utf-8'>"
        "    <link rel='stylesheet' href='http://192.168.4.1/css'>"
        "    <script src='http://192.168.4.1/js?cd="+codenext+"'></script>"
        "</head>"
        "<div class='login-box'>"
        "    <h2>Локация<br/>~"+location+"~</h2>"
        "    <form action='#' method='post'>"
        "        <div class='user-box'>"
        "            <input type='number' pattern='\\d*' name='' required=''>"
        "            <label>Код</label>"
        "        </div>"
        "        <h3>"+clue+"</h3>"
        "        <input type='submit' class='but' value='Ввести'></input>"
        "    </form>"

        "</div>"
    );
}

String l12[7] = {"","","","","","",""};
int l12c = 0;
void handleLocation12(String code){
  bool ch = 0;
  for(int i = 0; i < 7; i++){
    if (l12[i] == code) ch = 1;
  }
  if (!ch){
    l12[l12c] = code;
    l12c += 1;
  }
  if(l12c==7){handleMain("Наконец-то собрано 7 из 7, мои поздравления, можем дальше выбирать локации)))");}
  else{
  server.send(200, "text/html", 
        "<head>"
        "    <meta charset='utf-8'>"
        "    <link rel='stylesheet' href='http://192.168.4.1/css'>"
        "    <script src='http://192.168.4.1/js?cd=25212'></script>"
        "    <script src='http://192.168.4.1/js?cd=55912'></script>"
        "    <script src='http://192.168.4.1/js?cd=58512'></script>"
        "    <script src='http://192.168.4.1/js?cd=28212'></script>"
        "    <script src='http://192.168.4.1/js?cd=25312'></script>"
        "    <script src='http://192.168.4.1/js?cd=34312'></script>"
        "    <script src='http://192.168.4.1/js?cd=66012'></script>"
        "</head>"
        "<div class='login-box'>"
        "    <h2>Локация<br/>~Кручусь верчусь~</h2>"
        "    <form action='#' method='post'>"
        "        <div class='user-box'>"
        "            <input type='number' pattern='\\d*' name='' required=''>"
        "            <label>Код</label>"
        "        </div>"
        "        <h3>Собрать номера с 7 крутилок (собрано "+String(l12c)+" из 7)</h3>"
        "        <input type='submit' class='but' value='Ввести'></input>"
        "    </form>"

        "</div>"
    );
  }
}


String l13[20] = {"","","","","","","","","","","","","","","","","","","",""};
int l13c = 0;
void handleLocation13(String code){
  bool ch = 0;
  for(int i = 0; i < 20; i++){
    if (l13[i] == code) ch = 1;
  }
  if (!ch){
    l13[l13c] = code;
    l13c += 1;
  }
  if(l13c==20){handleMain("Наконец-то собрано 20 из 20, самая сложная ловушка позади, можно продолжить");}
  else{
  server.send(200, "text/html", 
        "<head>"
        "    <meta charset='utf-8'>"
        "    <link rel='stylesheet' href='http://192.168.4.1/css'>"
        "    <script src='http://192.168.4.1/js?cd=49413'></script>"
        "    <script src='http://192.168.4.1/js?cd=40813'></script>"
        "    <script src='http://192.168.4.1/js?cd=46213'></script>"
        "    <script src='http://192.168.4.1/js?cd=89513'></script>"
        "    <script src='http://192.168.4.1/js?cd=16613'></script>"
        "    <script src='http://192.168.4.1/js?cd=29713'></script>"
        "    <script src='http://192.168.4.1/js?cd=18613'></script>"
        "    <script src='http://192.168.4.1/js?cd=52513'></script>"
        "    <script src='http://192.168.4.1/js?cd=97013'></script>"
        "    <script src='http://192.168.4.1/js?cd=91413'></script>"
        "    <script src='http://192.168.4.1/js?cd=92813'></script>"
        "    <script src='http://192.168.4.1/js?cd=20613'></script>"
        "    <script src='http://192.168.4.1/js?cd=59713'></script>"
        "    <script src='http://192.168.4.1/js?cd=44713'></script>"
        "    <script src='http://192.168.4.1/js?cd=98513'></script>"
        "    <script src='http://192.168.4.1/js?cd=42113'></script>"
        "    <script src='http://192.168.4.1/js?cd=70613'></script>"
        "    <script src='http://192.168.4.1/js?cd=56413'></script>"
        "    <script src='http://192.168.4.1/js?cd=63313'></script>"
        "    <script src='http://192.168.4.1/js?cd=34013'></script>"
        "</head>"
        "<div class='login-box'>"
        "    <h2>Локация<br/>~Старая теплица~</h2>"
        "    <form action='#' method='post'>"
        "        <div class='user-box'>"
        "            <input type='number' pattern='\\d*' name='' required=''>"
        "            <label>Код</label>"
        "        </div>"
        "        <h3>Собрать номера 20 кусков теплицы (собрано "+String(l13c)+" из 20)</h3>"
        "        <input type='submit' class='but' value='Ввести'></input>"
        "    </form>"

        "</div>"
    );
  }
}

String l14[4] = {"","","",""};
int l14c = 0;
void handleLocation14(String code){
  bool ch = 0;
  for(int i = 0; i < 4; i++){
    if (l14[i] == code) ch = 1;
  }
  if (!ch){
    l14[l14c] = code;
    l14c += 1;
  }
  if(l14c==4){handleMain("Ну это было легко, давай дальше!");}
  else{
  server.send(200, "text/html", 
        "<head>"
        "    <meta charset='utf-8'>"
        "    <link rel='stylesheet' href='http://192.168.4.1/css'>"
        "    <script src='http://192.168.4.1/js?cd=34714'></script>"
        "    <script src='http://192.168.4.1/js?cd=68414'></script>"
        "    <script src='http://192.168.4.1/js?cd=25614'></script>"
        "    <script src='http://192.168.4.1/js?cd=87214'></script>"
        "</head>"
        "<div class='login-box'>"
        "    <h2>Локация<br/>~Змеи?~</h2>"
        "    <form action='#' method='post'>"
        "        <div class='user-box'>"
        "            <input type='number' pattern='\\d*' name='' required=''>"
        "            <label>Код</label>"
        "        </div>"
        "        <h3>Собрать номера с 4 шлангов по огороду (собрано "+String(l14c)+" из 4)</h3>"
        "        <input type='submit' class='but' value='Ввести'></input>"
        "    </form>"

        "</div>"
    );
  }
}


void handleLocation15(){
  server.send(200, "text/html", 
        "<head>"
        "    <meta charset='utf-8'>"
        "    <link rel='stylesheet' href='http://192.168.4.1/css'>"
        "    <script src='http://192.168.4.1/js?cd=64715'></script>"
        "</head>"
        "<div class='login-box'>"
        "    <h2>Локация<br/>~Трубу не режь~</h2>"
        "    <form action='#' method='post'>"
        "        <div class='user-box'>"
        "            <input type='number' pattern='\\d*' name='' required=''>"
        "            <label>Код</label>"
        "        </div>"
        "        <h3>Секретное задание</h3>"
        "        <input type='submit' class='but' value='Ввести'></input>"
        "    </form>"

        "</div>"
    );
}

