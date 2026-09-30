/*
FUNCTION_NAME: OVRPlugin$$get_batteryStatus
ENTRY_POINT: 0746ffd8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_batteryStatus(void)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  ulong *unaff_x19;
  float *unaff_x22;
  long *unaff_x23;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s9;
  float unaff_s12;
  float fVar20;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 in_stack_000000a8;
  
  fVar4 = (float)FUN_08a44d84(0);
  fVar7 = unaff_s9;
  fVar9 = unaff_s12;
  lVar2 = FUN_08a4d98c();
  if (lVar2 != 0) {
    fVar5 = (float)FUN_08a5d3f4(lVar2,0);
    if (DAT_0983637d == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_0983637d = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    fVar6 = SQRT(unaff_s12 * unaff_s12 + fVar4 * fVar4 + unaff_s9 * unaff_s9);
    if (fVar6 <= DAT_0191476c) {
      if (DAT_098362c7 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362c7 = '\x01';
      }
      pfVar3 = *(float **)(*unaff_x23 + 0xb8);
      fVar4 = *pfVar3;
      unaff_s9 = pfVar3[1];
      unaff_s12 = pfVar3[2];
    }
    else {
      fVar4 = fVar4 / fVar6;
      unaff_s9 = unaff_s9 / fVar6;
      unaff_s12 = unaff_s12 / fVar6;
    }
    puVar1 = PTR_DAT_091f9220;
    fVar6 = *unaff_x22;
    fVar8 = unaff_x22[1];
    fVar10 = unaff_x22[2];
    fVar11 = unaff_x22[3];
    fVar12 = unaff_x22[4];
    fVar13 = unaff_x22[5];
    fVar14 = fVar4 * fVar6;
    fVar16 = unaff_s9 * fVar8;
    fVar20 = unaff_s12 * fVar10;
    fVar19 = unaff_s12 * fVar13 + fVar4 * fVar11 + unaff_s9 * fVar12;
    if (DAT_098363dc == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a2ee8);
      DAT_098363dc = '\x01';
      fVar6 = *unaff_x22;
      fVar8 = unaff_x22[1];
      fVar10 = unaff_x22[2];
      fVar11 = unaff_x22[3];
      fVar12 = unaff_x22[4];
      fVar13 = unaff_x22[5];
    }
    fVar17 = ABS(fVar19);
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    fVar18 = **(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8) * 8.0;
    fVar15 = fVar17 * DAT_01914a48;
    if (fVar17 * DAT_01914a48 <= fVar18) {
      fVar15 = fVar18;
    }
    fVar17 = 0.0;
    if (fVar15 <= ABS(0.0 - fVar19)) {
      fVar17 = ((fVar9 * unaff_s12 + fVar5 * fVar4 + fVar7 * unaff_s9) - (fVar20 + fVar14 + fVar16))
               / fVar19;
    }
    FUN_0747045c(fVar6 + fVar11 * fVar17,fVar8 + fVar12 * fVar17,fVar10 + fVar17 * fVar13);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_08a5b7d0(0,0,0,&stack0x00000040,0);
    FUN_074702ac();
    unaff_x19[1] = in_stack_00000008;
    *unaff_x19 = in_stack_00000000 & 0xffffffff00000000;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


