// Room: /d/shaolin/cjlou1.c
// Date: YZC 96/01/19

inherit ROOM;




void create()
{
	set("short", "�ؾ����¥");
	set("long", @LONG
ǧ������������ִ��ԭ����֮ţ�����Դ�Ħ�������£�����
�˲ı����������в��ٸ�ɮ�������棬�㼯�����ճ���������
��������ʮ�����ա����־����������ڴˡ���¥���濪����ȷ��
ͨ�硣�м����������Ŵ���ܡ���������а������Թ��Ķ�����
λ��ɮ��ִ���������ڱ�Ŀ��˼��
LONG
	);

	set("exits", ([
		"down" : __DIR__"cjlou",
	]));

	set("objects",([
		CLASS_D("shaolin") + "/hui-zhen" : 1,
		"/d/suburb/xkx/shaolin/obj/wuji1" : 1,
		"/d/suburb/xkx/shaolin/obj/wuji2" : 1,
		"/d/suburb/xkx/shaolin/obj/wuji3" : 1,
	]));
	setup();
}

int valid_leave(object me, string dir)
{
	object ob;

	if ( present("huizhen zunzhe", environment(me)) )
	if ( present("shaolin wuji", me)
	||   objectp(ob = present("corpse", me)) && present("shaolin wuji", ob) )
	{
		if (dir == "down" )
		{
			return notify_fail("����˵��: �书�ؼ�ֻ���ڲؾ�������ϰ������Я����� !\n");
		}
	}
	return ::valid_leave(me, dir);
}