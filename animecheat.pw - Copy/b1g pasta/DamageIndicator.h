#pragma once
#include "..\recode scatecheat3\includes.hpp"
/* definitions */
#define create_event_listener(class_name)\
class class_name : public IGameEventListener2\
{\
public:\
	~class_name() { g_pEventManager->RemoveListener(this); }\
\
	virtual void FireGameEvent(IGameEvent* p_event);\
};\

/* molotov */
class molotov_info
{
public:
	molotov_info(Vector positions, bool enableds, int entityids)
	{
		this->position = positions;
		this->enabled = enableds;
		this->entityid = entityids;
	}

	Vector position;
	bool   enabled;
	int    entityid;
};

/* functions */
class GrenadeRange
{
public:
	void listener();
	void draw();
	void TraceCircle(Vector position);
	void molotov();

	/* molotov */
	create_event_listener(inferno_startburn_event);
	create_event_listener(inferno_expire_event);
	create_event_listener(round_end_event);
};

/* extern grenade range */
extern GrenadeRange g_grenaderange;
