/*
FUNCTION_NAME: FUN_05d8fb8c
ENTRY_POINT: 05d8fb8c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d8fb8c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                 undefined8 param_9,uint param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar7;
  undefined4 uVar8;
  
  puVar1 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if ((DAT_06bc3a71 & 1) == 0) {
    FUN_02f08768(Method_System_IO_Path_InsecureGetFullPath__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_OVRTask_SetResult<bool>__);
    FUN_02f08768(Method_UnityEngine_GameObject_AddComponent<PanelInputModule>__);
    FUN_02f08768(Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__);
    DAT_06bc3a71 = 1;
  }
  puVar2 = Method_System_IO_Path_InsecureGetFullPath__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar1 = Method_OVRTask_SetResult<bool>__;
  uVar8 = FUN_05db08b4(param_6,param_7,param_8,0);
  uVar6 = extraout_x1;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    uVar6 = extraout_x1_00;
  }
  FUN_05d8f8a8(param_5,uVar6,param_7,param_8,param_10 & 1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bc3a80 == '\0') {
    FUN_02f08768(Method_OVRTask_SetResult<bool>__);
    DAT_06bc3a80 = '\x01';
  }
  puVar2 = Method_UnityEngine_GameObject_AddComponent<PanelInputModule>__;
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  uVar3 = FUN_060ba26c(*(undefined8 *)puVar2,0);
  puVar1 = Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__;
  if (lVar5 != 0) {
    thunk_FUN_060b92f4(uVar8,param_2,param_3,param_4,lVar5,uVar3,0);
    uVar8 = FUN_060ba26c(*(undefined8 *)puVar1,0);
    uVar6 = FUN_05c9cd38(param_6,0);
    thunk_FUN_060b9538(lVar5,uVar8,uVar6,0);
    if ((param_8 != 0) && (lVar7 = *(long *)(param_8 + 0x1a0), lVar7 != 0)) {
      uVar8 = *(undefined4 *)(lVar7 + 0x740);
      uVar4 = FUN_05d6d8a4(param_8,param_7,0,0);
      FUN_05c3a620(uVar8,lVar7,param_5,param_9,lVar5,1,uVar4 & 1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


