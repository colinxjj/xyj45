// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// shugan.c

#include <weapon.h>

inherit STAFF;

void create()
{
   set_name("����", ({ "shugan", "staff" }) );
   set_weight(1000);
   if( clonep() )
     set_default_object(__FILE__);
   else {
     set("unit", "��");
     set("material", "wood");
     set("long", "����һ���ֳ�����֦��\n");
     set("weapon_prop/courage", -4);
   }
   init_staff(5);
   setup();
}