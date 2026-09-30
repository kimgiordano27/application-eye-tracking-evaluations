/*
FUNCTION_NAME: FUN_05d5747c
ENTRY_POINT: 05d5747c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_gaze_retrieval_or_extraction
*/


void FUN_05d5747c(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 local_404 [4];
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined1 auStack_3e0 [200];
  undefined8 local_318;
  undefined1 *puStack_310;
  undefined1 auStack_250 [304];
  undefined1 auStack_120 [200];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_3e8 = param_2;
  if ((DAT_06bc3918 & 1) == 0) {
    FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_OVRAnchor_TryGetComponent<OVRStorable>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(PTR_DAT_067cbf10);
    DAT_06bc3918 = 1;
  }
  memset(auStack_120,0,200);
  memset(auStack_250,0,0x130);
  puVar4 = Method_OVRAnchor_TryGetComponent<OVRStorable>__;
  puVar3 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  local_400 = 0;
  uStack_3f8 = 0;
  local_3f0 = 0;
  local_404[0] = 0;
  if (*param_3 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    uVar5 = FUN_05d4c208(*param_3,*(undefined8 *)
                                   Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_05d577f0(param_1,uVar5,param_1 + 0x108);
    puVar6 = (undefined4 *)FUN_05de0bb0(param_3 + 1,0);
    uVar5 = *(undefined8 *)(param_1 + 0xd8);
    uVar1 = *puVar6;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    puVar3 = PTR_DAT_067cbf10;
    FUN_05db0518(&local_318,uVar5,param_3,uVar1,0);
    memcpy(auStack_120,&local_318,200);
    puVar7 = (undefined8 *)FUN_05ddf2fc(param_3,0);
    uStack_428 = *(undefined8 *)(param_1 + 0xc0);
    local_430 = *(undefined8 *)(param_1 + 0xb8);
    uVar5 = *puVar7;
    uVar9 = puVar7[1];
    uStack_418 = *(undefined8 *)(param_1 + 0xd0);
    uStack_420 = *(undefined8 *)(param_1 + 200);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    memcpy(auStack_3e0,auStack_120,200);
    uStack_448 = uStack_428;
    local_450 = local_430;
    uStack_438 = uStack_418;
    uStack_440 = uStack_420;
    FUN_061276f4(auStack_250,uVar5,uVar9,auStack_3e0,&local_450,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0612a0dc(&local_468,&local_3e8,auStack_250,0);
    uStack_3f8 = uStack_460;
    local_400 = local_468;
    local_3f0 = local_458;
    puVar7 = (undefined8 *)FUN_05ddf250(param_3,0);
    uVar9 = *puVar7;
    uVar5 = FUN_05d4d060(param_1);
    FUN_05c5cb48(local_404,uVar9,uVar5,0);
    local_318 = 0;
    puStack_310 = local_404;
    puVar7 = (undefined8 *)FUN_05ddf250(param_3,0);
    puVar3 = Method_System_DateTimeOffset_ValidateStyles__;
    uVar5 = *puVar7;
    if (*(int *)(*(long *)Method_System_DateTimeOffset_ValidateStyles__ + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)Method_System_DateTimeOffset_ValidateStyles__);
    }
    if (DAT_06bc38b4 == '\0') {
      FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
      DAT_06bc38b4 = '\x01';
    }
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar3;
    }
    lVar8 = **(long **)(lVar8 + 0xb8);
    if (lVar8 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
      uStack_478 = uStack_3f8;
      local_480 = local_400;
      local_470 = local_3f0;
      FUN_05d57834(lVar8,*(undefined8 *)(param_1 + 0x108),&local_480);
      FUN_05c5cb50(local_404,0);
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


