/*
FUNCTION_NAME: FUN_05dab5e4
ENTRY_POINT: 05dab5e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void FUN_05dab5e4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = Method_System_DateTimeOffset_ValidateStyles__;
  if ((DAT_06bc3b26 & 1) == 0) {
    FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_06bc3b26 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bc38b4 == '\0') {
    FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
    DAT_06bc38b4 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = param_1;
    uStack_78 = param_2[1];
    local_80 = *param_2;
    uStack_68 = param_2[3];
    uStack_70 = param_2[2];
    uStack_58 = param_2[5];
    local_60 = param_2[4];
    uStack_48 = param_2[7];
    uStack_50 = param_2[6];
    uStack_b8 = param_3[1];
    local_c0 = *param_3;
    uStack_a8 = param_3[3];
    uStack_b0 = param_3[2];
    uStack_98 = param_3[5];
    local_a0 = param_3[4];
    uStack_88 = param_3[7];
    uStack_90 = param_3[6];
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dab6f8(lVar2,&local_80,&local_c0,param_4 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


