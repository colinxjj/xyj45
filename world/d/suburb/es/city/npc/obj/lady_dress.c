// lady_dress.c

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("���޳���", ({ "lady dress", "dress" }) );
	set_weight(1200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "����һ����Ǯ�˼ҵ�С�㴩��������ֹ��൱ϸ�¡�\n");
		set("unit", "��");
		set("value", 20000);
		set("material", "cloth");
		set("armor_prop/armor", 1);
		set("armor_prop/personality", 6);
		set("female_only", 1);
	}
	setup();
}
