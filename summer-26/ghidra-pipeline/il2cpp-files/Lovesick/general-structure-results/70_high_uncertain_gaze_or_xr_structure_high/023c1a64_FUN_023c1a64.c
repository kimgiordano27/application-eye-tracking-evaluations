/*
FUNCTION_NAME: FUN_023c1a64
ENTRY_POINT: 023c1a64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void FUN_023c1a64(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_34;
  
  puVar3 = StringLiteral_3263;
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  puVar1 = System_Func<STMAutoDelayData,_string>_TypeInfo;
  if ((DAT_03782027 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(System_Func<STMAutoDelayData,_string>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3035);
    thunk_FUN_00d48444(Method_System_TimeZoneInfo_TransitionTime_ValidateTransitionTime__);
    thunk_FUN_00d48444(StringLiteral_3263);
    DAT_03782027 = 1;
  }
  local_34 = 0x40;
  uVar4 = FUN_0178e9b8(&local_34,0);
  uVar4 = FUN_01600424(*(undefined8 *)puVar3,uVar4,*(undefined8 *)puVar1,0);
  uVar6 = *param_1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar6 = FUN_0170170c(uVar6,2,0);
  lVar5 = FUN_015f6780(uVar4,uVar6,0);
  puVar3 = StringLiteral_3035;
  puVar2 = Method_System_TimeZoneInfo_TransitionTime_ValidateTransitionTime__;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  if (lVar5 != 0) {
    uVar4 = FUN_01601ee8(lVar5,0x20,0x30,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    lVar5 = FUN_02020414(uVar4,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0);
    if (lVar5 != 0) {
      FUN_01604648(lVar5,0x2e,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


