/*
FUNCTION_NAME: OVRPlugin$$GetFaceVisemesState
ENTRY_POINT: 05bce6fc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetFaceVisemesState(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  float *pfVar6;
  ulong *unaff_x19;
  float *unaff_x22;
  long unaff_x23;
  long *plVar7;
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
  float fVar20;
  float unaff_s9;
  float unaff_s12;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 in_stack_00000098;
  undefined4 uStack000000000000009c;
  
  plVar7 = *(long **)(unaff_x23 + 0xa80);
  fVar8 = (float)FUN_069c57a8(0);
  fVar13 = unaff_s12;
  fVar11 = unaff_s9;
  lVar5 = FUN_069d3a80();
  if (lVar5 != 0) {
    fVar9 = (float)FUN_069e6fbc(lVar5,0);
    if (DAT_07546bbf == '\0') {
      FUN_03188a78(PTR_DAT_070c22f8);
      DAT_07546bbf = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    fVar10 = SQRT(unaff_s12 * unaff_s12 + fVar8 * fVar8 + unaff_s9 * unaff_s9);
    if (fVar10 <= DAT_012e3cb4) {
      if (DAT_075457d6 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457d6 = '\x01';
      }
      pfVar6 = *(float **)(*plVar7 + 0xb8);
      fVar8 = *pfVar6;
      unaff_s9 = pfVar6[1];
      unaff_s12 = pfVar6[2];
    }
    else {
      fVar8 = fVar8 / fVar10;
      unaff_s9 = unaff_s9 / fVar10;
      unaff_s12 = unaff_s12 / fVar10;
    }
    puVar1 = PTR_DAT_070f13a0;
    fVar10 = *unaff_x22;
    fVar12 = unaff_x22[1];
    fVar14 = unaff_x22[2];
    fVar15 = unaff_x22[3];
    fVar22 = fVar8 * fVar10;
    fVar23 = unaff_s9 * fVar12;
    fVar16 = unaff_x22[4];
    fVar17 = unaff_x22[5];
    fVar24 = unaff_s12 * fVar14;
    fVar20 = unaff_s12 * fVar17 + fVar8 * fVar15 + unaff_s9 * fVar16;
    if (DAT_07546c44 == '\0') {
      FUN_03188a78(PTR_DAT_070cf060);
      fVar10 = *unaff_x22;
      fVar12 = unaff_x22[1];
      fVar14 = unaff_x22[2];
      fVar15 = unaff_x22[3];
      DAT_07546c44 = '\x01';
      fVar16 = unaff_x22[4];
      fVar17 = unaff_x22[5];
    }
    fVar19 = ABS(fVar20);
    if (ABS(fVar20) <= 0.0) {
      fVar19 = 0.0;
    }
    uStack000000000000009c = 0;
    uStack0000000000000018 = 0;
    in_stack_00000010 = 0;
    fVar21 = **(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) * 8.0;
    fVar18 = fVar19 * DAT_012e3b94;
    if (fVar19 * DAT_012e3b94 <= fVar21) {
      fVar18 = fVar21;
    }
    fVar19 = 0.0;
    if (fVar18 <= ABS(0.0 - fVar20)) {
      fVar19 = ((fVar13 * unaff_s12 + fVar9 * fVar8 + fVar11 * unaff_s9) -
               (fVar24 + fVar22 + fVar23)) / fVar20;
    }
    FUN_05bceb74(fVar10 + fVar15 * fVar19,fVar12 + fVar16 * fVar19,fVar14 + fVar19 * fVar17);
    uVar4 = uStack0000000000000018;
    uVar2 = in_stack_00000010;
    uVar3 = in_stack_00000010._4_4_;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_069e4d6c(uVar2 & 0xffffffff,uVar3,uVar4,in_stack_00000098,in_stack_00000008._4_4_,
                 &stack0x00000030,0);
    FUN_05bce9c4(&stack0x00000010);
    unaff_x19[1] = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    *unaff_x19 = in_stack_00000010;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000024;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


