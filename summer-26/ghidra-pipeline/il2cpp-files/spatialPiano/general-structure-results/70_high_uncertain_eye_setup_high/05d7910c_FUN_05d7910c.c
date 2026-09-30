/*
FUNCTION_NAME: FUN_05d7910c
ENTRY_POINT: 05d7910c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d7910c(long param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_06bc3a14 & 1) == 0) {
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__);
    FUN_02f08768(Method_OVRTask_SetResult<bool>__);
    DAT_06bc3a14 = 1;
  }
  if (*(char *)(param_1 + 0xd0) == '\0') {
    if (*param_3 == 0) {
LAB_05d79330:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = FUN_05d4c208(*param_3,*(undefined8 *)
                                   Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__ +
                0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)
                          Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__);
    }
    lVar4 = FUN_05d5a440(lVar3,0);
    if (lVar4 != 0) {
      if (lVar3 == 0) goto LAB_05d79330;
      uVar5 = thunk_FUN_05d43a98(lVar4,*(undefined1 *)(lVar3 + 0x1e0),0);
      if ((uVar5 & 1) != 0) {
        puVar6 = (undefined8 *)FUN_05d43a80(lVar4,0);
        uVar7 = *puVar6;
        puVar6 = (undefined8 *)FUN_05d43a88(lVar4,0);
        FUN_05d5a774(param_1,uVar7,*puVar6,0);
        return;
      }
    }
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dae168(&local_58,param_3,0);
    uStack_a8 = uStack_50;
    local_b0 = local_58;
    uStack_98 = uStack_40;
    uStack_a0 = local_48;
    local_90 = local_38;
    FUN_05c9caa8(&local_b0,0);
    FUN_05d5a924(param_1,**(undefined8 **)
                           (*(long *)Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__ + 0xb8
                           ),0);
  }
  else {
    FUN_05d5a774(param_1,*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),0);
    FUN_05d5aa50(0,0,0,0,param_1,1,0);
    puVar2 = Method_OVRTask_SetResult<bool>__;
    if (param_2 != 0) {
      lVar3 = *(long *)Method_OVRTask_SetResult<bool>__;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar3 = *(long *)puVar2;
      }
      uVar1 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xdc);
      FUN_05c9ac9c(&local_58,*(undefined8 *)(param_1 + 0xc0),0);
      uStack_78 = uStack_50;
      local_80 = local_58;
      uStack_68 = uStack_40;
      uStack_70 = local_48;
      local_60 = local_38;
      FUN_0611f628(param_2,uVar1,&local_80,0);
    }
  }
  return;
}


