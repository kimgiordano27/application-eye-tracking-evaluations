/*
FUNCTION_NAME: OVRPlugin$$SaveSpace
ENTRY_POINT: 0368e47c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__SaveSpace(undefined1 param_1 [16],undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long unaff_x20;
  float *unaff_x21;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 unaff_d8;
  undefined8 uVar7;
  float fVar8;
  undefined8 unaff_d9;
  float fVar9;
  float unaff_s10;
  float unaff_s11;
  float fVar10;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  float in_stack_00000028;
  undefined8 uStack000000000000002c;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  
  fVar5 = (float)param_2 - (float)unaff_d9;
  fVar6 = (float)((ulong)param_2 >> 0x20) - (float)((ulong)unaff_d9 >> 0x20);
  if (((unaff_s11 == 0.0) && (fVar5 == 0.0)) && (fVar6 == 0.0)) {
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_040c1d04(&stack0x00000010,*(long *)(unaff_x20 + 0x20),0);
    uVar1 = uStack0000000000000010;
    fVar5 = *unaff_x21;
    uVar7 = *(undefined8 *)(unaff_x21 + 1);
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    fVar10 = (float)uVar1 - fVar5;
    fVar6 = (float)uVar7;
    fVar8 = (float)uStack0000000000000014 - fVar6;
    fVar4 = (float)((ulong)uVar7 >> 0x20);
    fVar9 = SUB84(uStack0000000000000014,4) - fVar4;
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar3 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8);
    if (fVar3 <= DAT_00c926ac) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      fStack0000000000000034 =
           **(float **)
             (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
      in_stack_00000038 =
           *(undefined8 *)
            (*(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8) + 1)
      ;
    }
    else {
      fStack0000000000000034 = fVar10 / fVar3;
      in_stack_00000038 = CONCAT44(fVar9 / fVar3,fVar8 / fVar3);
    }
    unaff_d9 = CONCAT44(fVar4 - fVar9,fVar6 - fVar8);
    unaff_d8 = 0x7f7fffff;
    in_stack_00000028 = fVar5 - fVar10;
  }
  else {
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar4 = SQRT(fVar6 * fVar6 + unaff_s11 * unaff_s11 + fVar5 * fVar5);
    if (fVar4 <= DAT_00c926ac) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      fStack0000000000000034 =
           **(float **)
             (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
      in_stack_00000038 =
           *(undefined8 *)
            (*(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8) + 1)
      ;
      in_stack_00000028 = unaff_s10;
    }
    else {
      fStack0000000000000034 = unaff_s11 / fVar4;
      in_stack_00000038 = CONCAT44(fVar6 / fVar4,fVar5 / fVar4);
      in_stack_00000028 = unaff_s10;
    }
  }
  uStack000000000000002c = unaff_d9;
  uVar2 = FUN_0368e368(unaff_d8);
  return uVar2 & 1;
}


