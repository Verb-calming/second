// toast("hello world!");//����Holle world������alert
// launchApp("QQ");//���ֻ��ڵ�app
// sleep("3000");//�ӳ�һ��
// // back()//����ָ��
// // home()//����������
// click(325, 645);//
// swipe(94, 230, 100, 985, 1000);//�����ֻ���Ļ��(250,328)��(409,931)
var i = 0;
launchApp("���ּ��ٰ�");
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