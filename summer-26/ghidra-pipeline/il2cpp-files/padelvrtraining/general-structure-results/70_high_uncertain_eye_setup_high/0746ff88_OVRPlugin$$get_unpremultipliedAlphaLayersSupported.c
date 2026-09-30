/*
FUNCTION_NAME: OVRPlugin$$get_unpremultipliedAlphaLayersSupported
ENTRY_POINT: 0746ff88
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__get_unpremultipliedAlphaLayersSupported
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  ulong *unaff_x19;
  float *unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack00000000000000a8;
  uint uStack00000000000000ac;
  
  uVar10 = (ulong)(uint)uStack0000000000000030;
  uStack00000000000000a8 = uStack0000000000000034;
  uStack00000000000000ac = uStack0000000000000030;
  uVar7 = FUN_0746f3c8();
  if (DAT_09836325 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    DAT_09836325 = '\x01';
  }
  puVar1 = PTR_DAT_091a0f88;
  lVar2 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
  fVar4 = (float)FUN_08a44d84(uVar7,uVar10,param_3,param_4,*(undefined4 *)(lVar2 + 0x18),
                              *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0);
  fVar23 = (float)param_3;
  fVar18 = (float)uVar10;
  fVar8 = fVar18;
  fVar11 = fVar23;
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
    fVar6 = SQRT(fVar23 * fVar23 + fVar4 * fVar4 + fVar18 * fVar18);
    if (fVar6 <= DAT_0191476c) {
      if (DAT_098362c7 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362c7 = '\x01';
      }
      pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar4 = *pfVar3;
      fVar18 = pfVar3[1];
      fVar23 = pfVar3[2];
    }
    else {
      fVar4 = fVar4 / fVar6;
      fVar18 = fVar18 / fVar6;
      fVar23 = fVar23 / fVar6;
    }
    puVar1 = PTR_DAT_091f9220;
    fVar6 = *unaff_x22;
    fVar9 = unaff_x22[1];
    fVar12 = unaff_x22[2];
    fVar13 = unaff_x22[3];
    fVar14 = unaff_x22[4];
    fVar15 = unaff_x22[5];
    fVar16 = fVar4 * fVar6;
    fVar19 = fVar18 * fVar9;
    fVar24 = fVar23 * fVar12;
    fVar22 = fVar23 * fVar15 + fVar4 * fVar13 + fVar18 * fVar14;
    if (DAT_098363dc == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a2ee8);
      DAT_098363dc = '\x01';
      fVar6 = *unaff_x22;
      fVar9 = unaff_x22[1];
      fVar12 = unaff_x22[2];
      fVar13 = unaff_x22[3];
      fVar14 = unaff_x22[4];
      fVar15 = unaff_x22[5];
    }
    fVar20 = ABS(fVar22);
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    fVar21 = **(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8) * 8.0;
    fVar17 = fVar20 * DAT_01914a48;
    if (fVar20 * DAT_01914a48 <= fVar21) {
      fVar17 = fVar21;
    }
    fVar20 = 0.0;
    if (fVar17 <= ABS(0.0 - fVar22)) {
      fVar20 = ((fVar11 * fVar23 + fVar5 * fVar4 + fVar8 * fVar18) - (fVar24 + fVar16 + fVar19)) /
               fVar22;
    }
    FUN_0747045c(fVar6 + fVar13 * fVar20,fVar9 + fVar14 * fVar20,fVar12 + fVar20 * fVar15);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_08a5b7d0(0,0,0,in_stack_00000028._4_4_,uStack00000000000000ac,uStack00000000000000a8,
                 uStack0000000000000038,&stack0x00000040,0);
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


