// Room: /city/milin.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
	����һƬï�ܵ������֣�һ�߽�������·���ʧ�˷���
LONG
	);

	set("exits", ([
		"east" : __FILE__,
		"west" : __DIR__"ml4",
		"south" : __DIR__"dongmen",
		"north" : __FILE__,
	]));
	setup();
	replace_program(ROOM);
}