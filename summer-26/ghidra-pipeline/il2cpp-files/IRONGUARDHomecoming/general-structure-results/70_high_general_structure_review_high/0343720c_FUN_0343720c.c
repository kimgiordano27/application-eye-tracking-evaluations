/*
FUNCTION_NAME: FUN_0343720c
ENTRY_POINT: 0343720c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void FUN_0343720c(long param_1,long param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(Method_OVRPassthroughColorLut_RefreshIfInitialized__);
    FUN_034efd20(uVar3,uVar4,0);
    goto LAB_03437338;
  }
  if (param_3 < 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar3 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(Method_OVRPassthroughLayer_SetColorMap__);
    uVar1 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
    FUN_034f3578(uVar3,uVar4,uVar1,0);
    goto LAB_03437338;
  }
  if (param_4 < 0) {
LAB_03437248:
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    puVar2 = Method_UnityEngine_Rendering_ProfilingSampler_Get<URPProfileId>__;
  }
  else {
    if (*(int *)(param_2 + 0x18) < param_4) goto LAB_03437248;
    if (param_3 <= *(int *)(param_2 + 0x18) - param_4) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        return;
      }
      thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
      uVar3 = thunk_FUN_01f117cc();
      FUN_03579608(uVar3,0,0);
      goto LAB_03437338;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    puVar2 = 
    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__;
  }
  uVar4 = thunk_FUN_01efb3a4(puVar2);
  FUN_034f6754(uVar3,uVar4,0);
LAB_03437338:
  uVar4 = thunk_FUN_01efb3a4(Method_Shapes_Quad_GetQuadColor__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar4);
}


