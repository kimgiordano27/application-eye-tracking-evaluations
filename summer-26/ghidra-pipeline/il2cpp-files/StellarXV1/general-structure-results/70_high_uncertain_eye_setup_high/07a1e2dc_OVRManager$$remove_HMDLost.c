/*
FUNCTION_NAME: OVRManager$$remove_HMDLost
ENTRY_POINT: 07a1e2dc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_HMDLost(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  float *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  float fVar11;
  float unaff_s8;
  float fVar12;
  float unaff_s12;
  float unaff_s13;
  float fVar13;
  float unaff_s14;
  float fVar14;
  float unaff_s15;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000068;
  
  fVar12 = *(float *)(param_1 + 8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07a1e2d0 with catch @ 07a1e2e0
                        */
  if (*(char *)(unaff_x22 + 0x4e7) == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    *(undefined1 *)(unaff_x22 + 0x4e7) = 1;
  }
                    /* try { // try from 07a1e300 to 07b1e3d3 has its CatchHandler @ 07a1e300
                       catch() { ... } // from try @ 07a1e300 with catch @ 07a1e300
                       catch() { ... } // from try @ 07a1e61c with catch @ 07a1e300
                       catch() { ... } // from try @ 07a1e654 with catch @ 07a1e300
                       catch() { ... } // from try @ 07a1e67c with catch @ 07a1e300 */
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar1 = PTR_DAT_09285c68;
  fVar11 = SQRT(fVar12 * fVar12 + unaff_s14 * unaff_s14 + unaff_s15 * unaff_s15);
  if (fVar11 <= unaff_s13) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar7 = *(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
    fVar13 = *pfVar7;
    fVar14 = pfVar7[1];
    fVar12 = pfVar7[2];
  }
  else {
    fVar13 = unaff_s14 / fVar11;
    fVar14 = unaff_s15 / fVar11;
    fVar12 = fVar12 / fVar11;
  }
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar2 = FUN_089cbcc8(unaff_x20 + 0x50,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar1);
  }
  in_stack_00000008 = in_stack_00000068._4_4_;
  fStack0000000000000014 = fVar13;
  in_stack_00000018 = fVar14;
  fStack000000000000001c = fVar12;
  uVar3 = FUN_08a4dc10(unaff_s12 + unaff_s8,&stack0x00000008,uVar9,uVar2,0);
  fVar12 = 0.0;
  if (0 < (int)uVar3) {
    uVar4 = FUN_074e5d94(*(undefined8 *)(unaff_x20 + 0x48),0);
    if ((uVar4 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + 0x58);
      if (lVar8 == 0) {
LAB_07a1e4d0:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_07a1e4d4:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar8 = lVar8 + 0x20;
LAB_07a1e488:
      fVar11 = (float)FUN_08a53440(lVar8,0);
      fVar11 = (unaff_s12 + unaff_s8) - fVar11;
      uVar9 = 1;
      fVar12 = 0.0;
      if (0.0 <= fVar11) {
        fVar12 = fVar11;
      }
      goto LAB_07a1e4a4;
    }
    uVar4 = 0;
    lVar10 = 0x20;
    do {
      lVar8 = *(long *)(unaff_x20 + 0x58);
      if (lVar8 == 0) goto LAB_07a1e4d0;
      if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_07a1e4d4;
      uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
      lVar8 = FUN_08a53350(lVar8 + lVar10,0);
      if (lVar8 == 0) goto LAB_07a1e4d0;
      uVar5 = FUN_089c7bf8(lVar8,0);
      uVar6 = FUN_074e4b3c(uVar9,uVar5,0);
      if ((uVar6 & 1) != 0) {
        lVar8 = *(long *)(unaff_x20 + 0x58);
        if (lVar8 == 0) goto LAB_07a1e4d0;
        if (*(uint *)(lVar8 + 0x18) <= (uint)uVar4) goto LAB_07a1e4d4;
        lVar8 = lVar8 + lVar10;
        goto LAB_07a1e488;
      }
      uVar4 = uVar4 + 1;
      lVar10 = lVar10 + 0x2c;
    } while (uVar3 != uVar4);
  }
  uVar9 = 0;
LAB_07a1e4a4:
  *unaff_x19 = fVar12;
  return uVar9;
}


