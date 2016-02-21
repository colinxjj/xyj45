// 
// 

inherit NPC;
inherit F_VENDOR;
void create()
{
	set_name("�����", ({ "fishseller" }) );
	set("gender", "����" );
	set("age", 35);
	set("combat_exp", 5);
	set("attitude", "friendly");
	set("per",1);
	set("vendor_goods", ([
		__DIR__"obj/freshfish" : 10,
	]) );
        set("chat_chance", 20);
        set("chat_msg", ({
                "����ĸ���ߺ�ȵ���ʮ��һ��ඣ���������������㣮����\n",
                "�����˵��������һ�����������\n",
                "�����˵��������һ�����������\n",
                "����ĵ�ͷ��˼������\n",
        }) );

	setup();
	carry_object("/obj/cloth")->wear();
}

void init()
{	
	object ob;

	::init();
	add_action("do_vendor_list", "list");
}