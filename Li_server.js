const http = require('http');
const fs = require('fs');

var html;
var html1;
var css;
var id;
var name;
var age;
var bestscore;
fs.readFile('Li.html','utf8',function(err,data){
    if(err){
        return console.error(err);
    }
    html=data;
});
fs.readFile('Li.css','utf8',function(err,data){
    if(err){
        return console.error(err);
    }
    css=data;
});
fs.readFile('after_Li.html','utf8', function(err, data){
    if (err) {
        return console.error(err);
    }
    html1=data;
});
function call(request,response){
    switch (request.url) {
        case "/Li.css" :
            response.writeHead(200, {"Content-Type": "text/css"});
            response.write(css);
            break;
        default :    
            response.writeHead(200, {"Content-Type": "text/html"});
            response.write(html);
    }
    response.end();
}
function load(request,response){
    set();
    response.writeHead(200, {"Content-Type": "text/html"});

    response.write('<!DOCTYPE html>');
    response.write('<html lang="kr">');
    response.write('<head>');
    response.write('<meta charset="UTF-8">');
    response.write('<title>로그인</title>');
    response.write('<link rel="stylesheet" href="Li.css">');
    response.write('<link href="https://fonts.googleapis.com/earlyaccess/notosanskr.css" rel="stylesheet">');
    response.write('</head>');
    response.write('<body>');
    response.write('<div class="login-form">');
    response.write('<form>');
    response.write('<h2>User information</h2>');
    response.write('<p>');
    response.write('<h3>user name:'+name+'</h3>');
    response.write('<h3>user age:'+age+'</h3>');
    response.write('<h3>user best score:'+bestscore+'</h3>');
    response.write('<a href="mdjg://">게임 플레이</a>');
    response.write('</form>');
    response.write('</div>');
    response.write('</body>');
    response.write('</html>');
    response.end();
}
function set(id){
    fs.readFile(id+'_name.txt','utf8', function(err, data){
        if (err) {
            return console.error(err);
        }
        name=data;
    });
    console.log('아이디'+id);
    console.log('이름'+name);
    fs.readFile(id+'_old.txt','utf8', function(err, data){
        if (err) {
            return console.error(err);
        }
        age=data;
    });
    console.log('나이'+age);
    fs.readFile(id+'_bestscore.txt','utf8', function(err, data){
        if (err) {
            return console.error(err);
        }
        bestscore=data;
    });
    console.log('최고점수'+bestscore);
}
var server=http.createServer(function(request,response){
    console.log(request.method);
    if(request.method==='POST'){
        console.log("post요청이 들어옴");
        fs.readFile('cer.txt', 'utf8', function(err, data){
            fs.readFile('infor.txt','utf8', function(err1, data1){
                if (err1) {
                    return console.error(err1);
                }
                id=data1;
                console.log(id);
                set(id);
            });
            if(err){
                return console.error(err);
            }
            else if(data=='1'){
                request.on('data',function(data){
                    console.log("로그인 성공");
                    console.log(request.url);
                    load(request,response,data);
                });
            }
            else {
                console.log("로그인 실패");
                console.log(data);
                call(request,response);
            }
        });
    }
    else{
        call(request,response);
    }
});
server.listen(8080,function(){
    console.log("서버실행");
});