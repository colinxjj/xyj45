// 
// 

inherit ROOM;
void create()
{
        set("short", "������");
        set("long", @LONG
����Ҳ��֪��ã�����ͻȻ����һ�������۵Ļ��㡣�⻨�㲻��ĵ
��������õ�壬Ҳ����÷�����Ǿ�......�⻨�����۵þ����������С�
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"sand",
  "north" : __DIR__"valley",
]));

        set("outdoors", "fengyun");
        setup();
        replace_program(ROOM);
}