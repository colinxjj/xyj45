// 
// 

inherit ITEM;
void create()
{
	set_name("����", ({ "����","shenji", "������" }));
	set_weight(600);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long",
			"һ����������������������������һЩ�֡�\n");
		set("value", 70);
		set("material", "wood");
		set("no_shown",1);
		set("no_get",1);
		set("no_drop",1);
		set("skill", ([
			"name": 		"incarnation",	
			"exp_required":	0,		
			"sen_cost":		30,	
			"difficulty":	20,	
			"max_skill":	90		
		]) );
	}
}