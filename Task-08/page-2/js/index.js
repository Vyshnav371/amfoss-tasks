var x=0;
function button1()
{
    localStorage.setItem("key", "Didnt specify what to save so this is it i guess.........");
}
function button2()
{
    var today=new Date();
    var time=today.getHours()+":"+ today.getMinutes()+":" + today.getSeconds()
    alert(time)
}
function button3()
{
    if(x==0)
    {
        document.body.style.backgroundColor = "red";
        x=1
    }
    else if(x==1)
    {
        document.body.style.backgroundColor = "green"
        x=2
    }
    else
    {
        document.body.style.backgroundColor = "blue"
        x=0
    }
    document.body.style.backgroundImage = "url('background.jpeg')";

}
function button4()
{
    window.location.reload()
}
function button5()
{
    window.open("https://www.google.com")
}
function button6()
{
    for(let i=0;i<50;i++)
    {
    console.log('I did it');
    }
}