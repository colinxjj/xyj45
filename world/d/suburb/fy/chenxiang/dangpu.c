// 
// 

inherit ROOM;
void create()
{
        set("short", "���ҵ���");
        set("long", @LONG
�˼䵱�̺�С����ȴ��һ��ܴ�Ĵ����ҡ����̵����ܶ����˶���������
ǽ��Ҳ������ֻҪ���ܹ������Ķ�����ÿ�������϶���һ�ŵ�Ʊ�����жѻ���
�����������˻ҳ�����Ȼ�Ǻܶ��˽������䵱�ڴˣ�ȴ��Ҳû�л���ȡ��
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"cxe3",
]));
        set("objects", ([
        __DIR__"npc/pawnowner": 1,
                        ]) );
        setup();
        replace_program(ROOM);
}