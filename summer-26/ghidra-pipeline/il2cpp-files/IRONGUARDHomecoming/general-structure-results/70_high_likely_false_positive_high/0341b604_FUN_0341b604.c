/*
FUNCTION_NAME: FUN_0341b604
ENTRY_POINT: 0341b604
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
FUN_0341b604(long *param_1,long param_2,int param_3,int param_4,long param_5,uint param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar8 [16];
  undefined *puVar7;
  
  if ((DAT_04832750 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Bindings_NativeMethodAttribute__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InputSystem_OnInputSystemEvent_ShouldTrigger__);
    DAT_04832750 = 1;
  }
  puVar7 = Method_UnityEngine_Bindings_NativeMethodAttribute__ctor__;
  if ((param_2 == 0) || (param_5 == 0)) {
    puVar7 = Method_Internal_Cryptography_OidLookup_ToOid__;
    if (param_2 != 0) {
      puVar7 = 
      Method_System_Runtime_Remoting_Channels_CrossAppDomainSink_<AsyncProcessMessage>b__10_0__;
    }
    uVar4 = thunk_FUN_01efb3a4(puVar7);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OnButtonInput_ShouldTrigger__);
    FUN_034f7d10(uVar6,uVar4,uVar5,0);
  }
  else {
    if ((-1 < param_4) && (-1 < param_3)) {
      if (*(int *)(param_2 + 0x18) - param_3 < param_4) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar4 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(Method_Internal_Cryptography_OidLookup_ToOid__);
        puVar7 = Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_SetObjectData__;
      }
      else {
        if ((-1 < (int)param_6) && (iVar2 = *(int *)(param_5 + 0x18), (int)param_6 <= iVar2)) {
          if (param_4 != 0) {
            lVar1 = 0;
            if (*(int *)(param_2 + 0x18) != 0) {
              lVar1 = param_2 + 0x20;
            }
            auVar8 = FUN_02721b04(param_5,*(undefined8 *)
                                           Method_Unity_VisualScripting_InputSystem_OnInputSystemEvent_ShouldTrigger__
                                 );
            lVar3 = FUN_0238dcd0(auVar8._0_8_,auVar8._8_8_,*(undefined8 *)puVar7);
                    /* WARNING: Could not recover jumptable at 0x0341b6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (**(code **)(*param_1 + 600))
                              (param_1,lVar1 + (long)param_3 * 2,param_4,lVar3 + (ulong)param_6,
                               iVar2 - param_6,0,*(undefined8 *)(*param_1 + 0x260));
            return uVar4;
          }
          return 0;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar4 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OnKeyboardInput_ShouldTrigger__);
        puVar7 = 
        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__;
      }
      uVar6 = thunk_FUN_01efb3a4(puVar7);
      FUN_034f3578(uVar4,uVar5,uVar6,0);
      uVar5 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_OnScreen_OnScreenControl_SendValueToControl<Vector2>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar4,uVar5);
    }
    puVar7 = Method_Unity_VisualScripting_OnMouseInput_ShouldTrigger__;
    if (-1 < param_3) {
      puVar7 = Method_UnityEngine_Object_Instantiate<GameObject>__;
    }
    uVar4 = thunk_FUN_01efb3a4(puVar7);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
    FUN_034f3578(uVar6,uVar4,uVar5,0);
  }
  uVar4 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_InputSystem_OnScreen_OnScreenControl_SendValueToControl<Vector2>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar4);
}


