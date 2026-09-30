/*
FUNCTION_NAME: FUN_023c0f94
ENTRY_POINT: 023c0f94
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


void FUN_023c0f94(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_34;
  
  puVar4 = StringLiteral_3263;
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  puVar2 = System_Func<STMAutoDelayData,_string>_TypeInfo;
  if ((DAT_0378201a & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(System_Func<STMAutoDelayData,_string>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3035);
    thunk_FUN_00d48444(Method_System_TimeZoneInfo_TransitionTime_ValidateTransitionTime__);
    thunk_FUN_00d48444(StringLiteral_3263);
    DAT_0378201a = 1;
  }
  local_34 = 0x10;
  uVar5 = FUN_0178e9b8(&local_34,0);
  uVar5 = FUN_01600424(*(undefined8 *)puVar4,uVar5,*(undefined8 *)puVar2,0);
  uVar1 = *param_1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  uVar6 = FUN_01701688(uVar1,2,0);
  lVar7 = FUN_015f6780(uVar5,uVar6,0);
  puVar4 = StringLiteral_3035;
  puVar3 = Method_System_TimeZoneInfo_TransitionTime_ValidateTransitionTime__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  if (lVar7 != 0) {
    uVar5 = FUN_01601ee8(lVar7,0x20,0x30,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    lVar7 = FUN_02020414(uVar5,*(undefined8 *)puVar3,*(undefined8 *)puVar4,0);
    if (lVar7 != 0) {
      FUN_01604648(lVar7,0x2e,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


