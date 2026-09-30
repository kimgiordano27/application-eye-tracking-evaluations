/*
FUNCTION_NAME: OVRManager$$add_HMDLost
ENTRY_POINT: 07a1e200
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_HMDLost(void)

{
  float fVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  float unaff_s8;
  float fVar13;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar14;
  float unaff_s12;
  float fVar15;
  float unaff_s13;
  float fVar16;
  float fVar17;
  float in_stack_00000008;
  undefined4 in_stack_00000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack000000000000001c;
  float fStack000000000000006c;
  
  FUN_04077588(PTR_DAT_09285ae0);
  *(undefined1 *)(unaff_x21 + 0x4e9) = 1;
  puVar2 = PTR_DAT_09285ae0;
  fVar16 = unaff_s11 - unaff_s8;
  fVar17 = unaff_s12 - unaff_s9;
  fVar14 = unaff_s13 - unaff_s10;
  fStack000000000000006c = unaff_s8;
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar13 = *(float *)(unaff_x20 + 0x40);
                    /* try { // try from 07a1e250 to 07b1e257 has its CatchHandler @ 07a1e294 */
  if (DAT_098854e7 == '\0') {
                    /* try { // try from 07a1e264 to 07b1e267 has its CatchHandler @ 07a1e290 */
                    /* try { // try from 07a1e268 to 07b1e287 has its CatchHandler @ 07a1e1bc */
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  fVar15 = SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar17 * fVar17);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
                    /* try { // try from 07a1e288 to 07b1e28b has its CatchHandler @ 07a1e28c */
  fVar1 = DAT_01aecf88;
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a1e288 with catch @ 07a1e28c
                       try { // try from 07a1e28c to 07b1e2af has its CatchHandler @ 07a1e1bc */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a1e264 with catch @ 07a1e290
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a1e250 with catch @ 07a1e294
                        */
  if (fVar15 <= DAT_01aecf88) {
                    /* try { // try from 07a1e2b0 to 07b1e2b3 has its CatchHandler @ 07a1e2cc */
    if (DAT_098854f1 == '\0') {
                    /* try { // try from 07a1e2b4 to 07b1e2cf has its CatchHandler @ 07a1e1bc */
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
                    /* catch() { ... } // from try @ 07a1e2b0 with catch @ 07a1e2cc */
                    /* try { // try from 07a1e2d0 to 07b1e2d7 has its CatchHandler @ 07a1e2e0 */
    pfVar8 = *(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
                    /* try { // try from 07a1e2d8 to 07b1e2e3 has its CatchHandler @ 07a1e1bc */
    fVar16 = *pfVar8;
    fVar17 = pfVar8[1];
    fVar14 = pfVar8[2];
  }
  else {
    fVar16 = fVar16 / fVar15;
    fVar17 = fVar17 / fVar15;
    fVar14 = fVar14 / fVar15;
  }
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar2 = PTR_DAT_09285c68;
  fVar12 = SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar17 * fVar17);
  if (fVar12 <= fVar1) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar8 = *(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
    fVar16 = *pfVar8;
    fVar17 = pfVar8[1];
    fVar14 = pfVar8[2];
  }
  else {
    fVar16 = fVar16 / fVar12;
    fVar17 = fVar17 / fVar12;
    fVar14 = fVar14 / fVar12;
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  fVar15 = fVar15 + fVar13;
  uVar3 = FUN_089cbcc8(unaff_x20 + 0x50,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar2);
  }
  in_stack_00000008 = fStack000000000000006c;
  fStack0000000000000014 = fVar16;
  in_stack_00000018 = fVar17;
  fStack000000000000001c = fVar14;
  uVar4 = FUN_08a4dc10(fVar15,&stack0x00000008,uVar10,uVar3,0);
  fVar14 = 0.0;
  if (0 < (int)uVar4) {
    uVar5 = FUN_074e5d94(*(undefined8 *)(unaff_x20 + 0x48),0);
    if ((uVar5 & 1) != 0) {
      lVar9 = *(long *)(unaff_x20 + 0x58);
      if (lVar9 == 0) {
LAB_07a1e4d0:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(lVar9 + 0x18) == 0) {
LAB_07a1e4d4:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar9 = lVar9 + 0x20;
LAB_07a1e488:
      fVar14 = (float)FUN_08a53440(lVar9,0);
      fVar15 = fVar15 - fVar14;
      uVar10 = 1;
      fVar14 = 0.0;
      if (0.0 <= fVar15) {
        fVar14 = fVar15;
      }
      goto LAB_07a1e4a4;
    }
    uVar5 = 0;
    lVar11 = 0x20;
    do {
      lVar9 = *(long *)(unaff_x20 + 0x58);
      if (lVar9 == 0) goto LAB_07a1e4d0;
      if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_07a1e4d4;
      uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
      lVar9 = FUN_08a53350(lVar9 + lVar11,0);
      if (lVar9 == 0) goto LAB_07a1e4d0;
      uVar6 = FUN_089c7bf8(lVar9,0);
      uVar7 = FUN_074e4b3c(uVar10,uVar6,0);
      if ((uVar7 & 1) != 0) {
        lVar9 = *(long *)(unaff_x20 + 0x58);
        if (lVar9 == 0) goto LAB_07a1e4d0;
        if (*(uint *)(lVar9 + 0x18) <= (uint)uVar5) goto LAB_07a1e4d4;
        lVar9 = lVar9 + lVar11;
        goto LAB_07a1e488;
      }
      uVar5 = uVar5 + 1;
      lVar11 = lVar11 + 0x2c;
    } while (uVar4 != uVar5);
  }
  uVar10 = 0;
LAB_07a1e4a4:
  *unaff_x19 = fVar14;
  return uVar10;
}


