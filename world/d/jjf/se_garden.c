// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// Room: /d/jjf/se_garden.c

inherit ROOM;

void create()
{
   set("short", "��԰");
   set("long", @LONG
һ��С��԰����Ȼ�Ȳ��ϸ�����Ժ�������ǧ�죬��Ҳ���õ�
���¿��ˡ��ظ�����Ȼ��������֮ʿ���������һ�ʢ�������ճ���
��ɻ����������ջ����ޣ���������һƬ��ѩ����
LONG
   );
   set("exits", ([ /* sizeof() == 4 */
  "southeast" : __DIR__"son_cabinet",
  "north" : __DIR__"ne_garden",
  "west" : __DIR__"sw_garden",
  "northwest" : __DIR__"nw_garden",
]));
   set("no_clean_up", 0);

   setup();
   replace_program(ROOM);
}