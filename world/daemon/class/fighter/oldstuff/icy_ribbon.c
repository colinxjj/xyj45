// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// icy_band.c

#include <ansi.h>
#include <armor.h>

inherit HEAD;

void create()
{
   set_name( HIC "��ѩ���ƽ�" NOR, ({ "icy ribbon", "ribbon" }) );
   set_weight(200);
   if( clonep() )
     set_default_object(__FILE__);
   else {
     set("unit", "��");
     set("value", 4000);
     set("material", "cloth");
     set("armor_prop/armor", 1);
     set("armor_prop/dodge", 5);
   }
   setup();
}