// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// by snowcat 11/6/1997
inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG

������վ��������Ļ�����ˮ���

LONG);
  set("exits", ([ 
    "east" : __DIR__"gongmen",
  ]));
  set("outdoors", __DIR__"");
  setup();
}