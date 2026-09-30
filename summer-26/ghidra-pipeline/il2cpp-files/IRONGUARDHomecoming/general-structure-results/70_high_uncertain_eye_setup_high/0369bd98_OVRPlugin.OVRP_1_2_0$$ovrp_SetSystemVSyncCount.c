/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrp_SetSystemVSyncCount
ENTRY_POINT: 0369bd98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_2_0__ovrp_SetSystemVSyncCount(void)

{
  float *pfVar1;
  long unaff_x19;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float unaff_s9;
  float fVar13;
  float unaff_s10;
  float unaff_s14;
  float fVar14;
  float fVar15;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  
  thunk_FUN_01ee6d7c();
  uVar9 = (ulong)(uint)(unaff_s14 * unaff_s14);
  fVar2 = SQRT(unaff_s14 * unaff_s14 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10);
  if (fVar2 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar1 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fVar12 = *pfVar1;
    fVar13 = pfVar1[1];
    fVar2 = pfVar1[2];
  }
  else {
    fVar12 = unaff_s9 / fVar2;
    fVar13 = unaff_s10 / fVar2;
    fVar2 = unaff_s14 / fVar2;
  }
  uVar11 = (ulong)(uint)fVar2;
  uVar8 = (ulong)(uint)fVar13;
  uVar6 = (ulong)(uint)fStack0000000000000030;
  fVar15 = *(float *)(unaff_x19 + 0x94);
  fStack000000000000000c = fStack0000000000000030;
  fStack0000000000000004 = in_stack_00000038;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar3 = (float)FUN_0407bc20(&stack0x00000030,0);
  fVar14 = *(float *)(unaff_x19 + 0x90);
  uVar7 = uVar6;
  uVar10 = uVar9;
  uVar4 = FUN_0407bc20(&stack0x00000030,0);
  uVar5 = FUN_04067568(fVar12,uVar8,uVar11,uVar4,uVar7,uVar10,0);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_0407de3c((fStack000000000000000c - fVar12 * fVar15) + fVar3 * fVar14,
                 (fStack0000000000000034 - fVar13 * fVar15) + (float)uVar6 * fVar14,
                 (fStack0000000000000004 - fVar2 * fVar15) + (float)uVar9 * fVar14,uVar5,uVar8,
                 uVar11,uVar4,*(long *)(unaff_x19 + 0x48),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


