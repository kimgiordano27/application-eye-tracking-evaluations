/*
FUNCTION_NAME: FUN_023c1fb4
ENTRY_POINT: 023c1fb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void FUN_023c1fb4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_34;
  
  puVar5 = StringLiteral_3263;
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  puVar1 = System_Func<STMAutoDelayData,_string>_TypeInfo;
  if ((DAT_0378202d & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(System_Func<STMAutoDelayData,_string>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3035);
    thunk_FUN_00d48444(Method_System_TimeZoneInfo_TransitionTime_ValidateTransitionTime__);
    thunk_FUN_00d48444(StringLiteral_3263);
    DAT_0378202d = 1;
  }
  local_34 = 0x40;
  uVar6 = FUN_0178e9b8(&local_34,0);
  uVar6 = FUN_01600424(*(undefined8 *)puVar5,uVar6,*(undefined8 *)puVar1,0);
  uVar9 = param_1[1];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar9 = FUN_0170170c(uVar9,2,0);
  lVar7 = FUN_015f6780(uVar6,uVar9,0);
  puVar4 = StringLiteral_3035;
  puVar3 = Method_System_TimeZoneInfo_TransitionTime_ValidateTransitionTime__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  if (lVar7 != 0) {
    uVar6 = FUN_01601ee8(lVar7,0x20,0x30,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar6 = FUN_02020414(uVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar4,0);
    local_34 = 0x40;
    uVar9 = FUN_0178e9b8(&local_34,0);
    uVar9 = FUN_01600424(*(undefined8 *)puVar5,uVar9,*(undefined8 *)puVar1,0);
    uVar8 = FUN_0170170c(*param_1,2,0);
    lVar7 = FUN_015f6780(uVar9,uVar8,0);
    if (lVar7 != 0) {
      uVar9 = FUN_01601ee8(lVar7,0x20,0x30,0);
      lVar7 = FUN_02020414(uVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar4,0);
      if (lVar7 != 0) {
        uVar9 = FUN_01604648(lVar7,0x2e,0);
        FUN_015f5b28(uVar6,uVar9,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


