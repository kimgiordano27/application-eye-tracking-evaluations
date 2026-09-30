/*
FUNCTION_NAME: FUN_03429c20
ENTRY_POINT: 03429c20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure
*/


void FUN_03429c20(undefined8 param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar1 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OnButtonInput_ShouldTrigger__);
    uVar1 = FUN_035ac8e0(uVar1,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_System_Runtime_Remoting_Channels_CrossAppDomainSink_<AsyncProcessMessage>b__10_0__
                              );
    FUN_034f7d10(uVar2,uVar3,uVar1,0);
  }
  else {
    if (-1 < param_3) {
      FUN_03414ccc(param_2,param_3,param_1,0);
      return;
    }
    uVar1 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
    uVar1 = FUN_035ac8e0(uVar1,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(Method_UnityEngine_Object_Instantiate<Point>__);
    FUN_034f3578(uVar2,uVar3,uVar1,0);
  }
  uVar1 = thunk_FUN_01efb3a4(
                            Method_DG_Tweening_Plugins_Core_PluginsManager_GetCustomPlugin<CirclePlugin,_Vector2,_Vector2,_CircleOptions>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar1);
}


