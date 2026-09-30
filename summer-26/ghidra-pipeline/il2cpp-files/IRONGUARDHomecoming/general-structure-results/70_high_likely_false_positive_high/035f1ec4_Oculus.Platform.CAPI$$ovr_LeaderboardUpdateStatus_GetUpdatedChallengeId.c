/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId
ENTRY_POINT: 035f1ec4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Oculus_Platform_CAPI__ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId
               (ulong param_1,long *param_2,long param_3,int param_4,int param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint unaff_w19;
  long unaff_x25;
  undefined1 auVar9 [16];
  undefined *puVar8;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Bindings_NativeMethodAttribute__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InputSystem_OnInputSystemEvent_ShouldTrigger__);
    *(undefined1 *)(unaff_x25 + 0x82a) = 1;
  }
  puVar2 = Method_Unity_VisualScripting_InputSystem_OnInputSystemEvent_ShouldTrigger__;
  puVar8 = Method_UnityEngine_Bindings_NativeMethodAttribute__ctor__;
  if ((param_3 == 0) || (param_6 == 0)) {
    puVar8 = Method_Unity_VisualScripting_InputSystem_OnInputSystemEvent_<Definition>b__23_1__;
    if (param_3 != 0) {
      puVar8 = 
      Method_System_Runtime_Remoting_Channels_CrossAppDomainSink_<AsyncProcessMessage>b__10_0__;
    }
    uVar5 = thunk_FUN_01efb3a4(puVar8);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OnButtonInput_ShouldTrigger__);
    FUN_034f7d10(uVar7,uVar5,uVar6,0);
  }
  else {
    if ((-1 < param_5) && (-1 < param_4)) {
      if (*(int *)(param_3 + 0x10) - param_4 < param_5) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar5 = thunk_FUN_01f117cc();
        uVar6 = thunk_FUN_01efb3a4(
                                  Method_Unity_VisualScripting_InputSystem_OnInputSystemEvent_<Definition>b__23_1__
                                  );
        puVar8 = Method_UnityEngine_Object_FindObjectOfType<Camera>__;
      }
      else {
        if (-1 < (int)unaff_w19) {
          iVar1 = *(int *)(param_6 + 0x18);
          if ((int)unaff_w19 <= iVar1) {
            iVar3 = thunk_FUN_01ed2e78(0);
            auVar9 = FUN_02721b04(param_6,*(undefined8 *)puVar2);
            lVar4 = FUN_0238dcd0(auVar9._0_8_,auVar9._8_8_,*(undefined8 *)puVar8);
                    /* WARNING: Could not recover jumptable at 0x035f1f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_2 + 600))
                      (param_2,param_3 + (long)param_4 * 2 + (long)iVar3,param_5,
                       lVar4 + (ulong)unaff_w19,iVar1 - unaff_w19,0,
                       *(undefined8 *)(*param_2 + 0x260));
            return;
          }
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar5 = thunk_FUN_01f117cc();
        uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OnKeyboardInput_ShouldTrigger__);
        puVar8 = 
        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__;
      }
      uVar7 = thunk_FUN_01efb3a4(puVar8);
      FUN_034f3578(uVar5,uVar6,uVar7,0);
      uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_62__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,uVar6);
    }
    puVar8 = Method_Unity_VisualScripting_OnMouseInput_ShouldTrigger__;
    if (-1 < param_4) {
      puVar8 = Method_UnityEngine_Object_Instantiate<GameObject>__;
    }
    uVar5 = thunk_FUN_01efb3a4(puVar8);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar7 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
    FUN_034f3578(uVar7,uVar5,uVar6,0);
  }
  uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_62__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,uVar5);
}


