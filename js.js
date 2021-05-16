// toast("hello world!");//弹出Holle world类似于alert
// launchApp("QQ");//打开手机内的app
// sleep("3000");//延迟一秒
// // back()//返回指令
// // home()//返回主界面
// click(325, 645);//
// swipe(94, 230, 100, 985, 1000);//滑动手机屏幕从(250,328)到(409,931)
var i = 0;
launchApp("快手极速版");
sleep(5000);
// id("").findOne().click();
while (i < 100) {
    log(i);
click(658, 953);
sleep(3500);
// id("child_lock_tv").findOne().click();
click(135, 1160);
sleep(1000);
setText("?");
sleep(2000);
back();
sleep(2500);
// click("634,1152");
id("finish_button").findOne().click();
sleep(2000);
back();
sleep(1000);
back();
sleep(1000);
swipe(381, 959, 376, 200,1500);
    sleep(3500);
    i = i + 1;
}