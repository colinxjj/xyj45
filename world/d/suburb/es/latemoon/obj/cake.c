inherit ITEM;
inherit F_FOOD;

void create()
{
     set_name("ѩ����", ({ "cake" }));
    set_weight(1000);
    if( clonep() )
            set_default_object(__FILE__);
    else {
          set("long", "����һ�龫�¿ɿڵ�С���ģ���ѩ����������\n");
          set("unit", "��");
          set("value", 50);
          set("food_remaining", 5);
          set("food_supply", 80);
     }
}

