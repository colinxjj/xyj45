// /d/xingxiu/silk4.c
// Jay 3/17/96
#include <room.h>

inherit ROOM;

void create()
{ 
       set("short","��ɳĮ");
       set("long", @LONG
����һƬһ���޼ʵĴ�ɳĮ����һ��������ʧ�˷���
����Ҫ�߳����ɳĮ�������¡�
LONG
     );
//        set("outdoors", "xingxiuhai");
    
	set("exits", ([
		"east" : __FILE__,
		"west" : __DIR__"shamo2",
		"south" : __DIR__"shamo3",
		"north" : __DIR__"shamo4",
	]));             
        setup();

//        replace_program(ROOM);
}

int valid_leave(object me, string dir)
{
	if ( dir == "west")
            me->add_temp("mark/steps",1);
	if ( dir == "east")
            me->add_temp("mark/steps",-1);

	if (me->query_temp("mark/steps") == 10)
         {
     	    me->move("/d/suburb/xkx/xingxiu/btshan");
            me->delete_temp("mark/steps");
             return notify_fail("���۵ð���������߳���ɳĮ��\n");
         }  

     if (me->query_temp("mark/steps") == -10)
	    {  
	       me->move("/d/suburb/xkx/xingxiu/silk4");
           me->delete_temp("mark/steps");
             return notify_fail("���۵ð���������߳���ɳĮ��\n");
     	}

        return ::valid_leave(me,dir);
}