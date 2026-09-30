/*
FUNCTION_NAME: OVRManager$$GetSystemHeadsetTheme
ENTRY_POINT: 0745d6d4
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


float OVRManager__GetSystemHeadsetTheme
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined4 in_stack_00000048;
  
  lVar8 = *(long *)(*unaff_x22 + 0xb8);
  fStack000000000000002c = *(float *)(lVar8 + 0x18);
  fVar18 = *(float *)(lVar8 + 0x1c);
  fVar19 = *(float *)(lVar8 + 0x20);
  fVar14 = (float)FUN_08a5d3f4(param_4,0);
  if (DAT_0983637d == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_0983637d = '\x01';
  }
  puVar3 = PTR_DAT_091a1008;
  fStack0000000000000030 = fStack0000000000000030 - fVar14;
  fStack0000000000000034 = fStack0000000000000034 - param_2;
  fStack0000000000000038 = fStack0000000000000038 - param_3;
                    /* try { // try from 0745d740 to 0755d747 has its CatchHandler @ 0745d794 */
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar14 = DAT_0191476c;
                    /* try { // try from 0745d754 to 0755d75f has its CatchHandler @ 0745d790 */
                    /* try { // try from 0745d760 to 0755d77f has its CatchHandler @ 0745d65c */
  fStack0000000000000024 =
       SQRT(fStack0000000000000038 * fStack0000000000000038 +
            fStack0000000000000030 * fStack0000000000000030 +
            fStack0000000000000034 * fStack0000000000000034);
  if (fStack0000000000000024 <= DAT_0191476c) {
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745d780 with catch @ 0745d78c
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745d754 with catch @ 0745d790
                        */
    if (DAT_098362c7 == '\0') {
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745d740 with catch @ 0745d794
                        */
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
                    /* try { // try from 0745d7ac to 0755d7af has its CatchHandler @ 0745d7d8 */
    pfVar10 = *(float **)(*unaff_x22 + 0xb8);
                    /* try { // try from 0745d7b0 to 0755d7e7 has its CatchHandler @ 0745d65c */
    fStack0000000000000030 = *pfVar10;
    fStack0000000000000034 = pfVar10[1];
    fStack0000000000000024 = pfVar10[2];
  }
  else {
    fStack0000000000000030 = fStack0000000000000030 / fStack0000000000000024;
    fStack0000000000000034 = fStack0000000000000034 / fStack0000000000000024;
    fStack0000000000000024 = fStack0000000000000038 / fStack0000000000000024;
                    /* try { // try from 0745d780 to 0755d783 has its CatchHandler @ 0745d78c */
                    /* try { // try from 0745d784 to 0755d7ab has its CatchHandler @ 0745d65c */
  }
  fVar17 = fVar18 * fStack0000000000000024;
  fVar20 = fStack000000000000002c * fStack0000000000000024;
  fVar16 = fStack000000000000002c * fStack0000000000000034;
                    /* catch() { ... } // from try @ 0745d7ac with catch @ 0745d7d8 */
  fStack000000000000002c = fStack0000000000000030;
  if (DAT_0983637d == '\0') {
                    /* try { // try from 0745d7e8 to 0755d7ef has its CatchHandler @ 0745d804 */
    FUN_03d2d2b0(PTR_DAT_091a1008);
                    /* try { // try from 0745d7f0 to 0755d7fb has its CatchHandler @ 0745d65c */
    DAT_0983637d = '\x01';
  }
                    /* try { // try from 0745d7fc to 0755d803 has its CatchHandler @ 0745d804 */
  fVar17 = fVar17 - fVar19 * fStack0000000000000034;
  fVar20 = fVar19 * fStack0000000000000030 - fVar20;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0745d7e8 with catch @ 0745d804
                       catch(type#2 @ 00000000) { ... } // from try @ 0745d7fc with catch @ 0745d804
                        */
  fVar16 = fVar16 - fVar18 * fStack0000000000000030;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar19 = fStack000000000000002c;
  fVar18 = fStack0000000000000024;
  fStack000000000000001c = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar20 * fVar20);
  if (fStack000000000000001c <= fVar14) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar10 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000014 = *pfVar10;
    fVar20 = pfVar10[1];
    fStack000000000000001c = pfVar10[2];
  }
  else {
    fStack0000000000000014 = fVar17 / fStack000000000000001c;
    fVar20 = fVar20 / fStack000000000000001c;
    fStack000000000000001c = fVar16 / fStack000000000000001c;
  }
  puVar4 = PTR_DAT_0921fb08;
  lVar8 = *(long *)PTR_DAT_0921fb08;
  if (unaff_w20 != 1) {
    fStack0000000000000014 = -fStack0000000000000014;
    fVar20 = -fVar20;
    fStack000000000000001c = -fStack000000000000001c;
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar8 = *(long *)puVar4;
  }
  lVar9 = *(long *)(lVar8 + 0xb8);
  bVar5 = unaff_w20 != 1;
  lVar8 = 0x2c;
  if (bVar5) {
    lVar8 = 0x74;
  }
  lVar1 = 0x28;
  if (bVar5) {
    lVar1 = 0x70;
  }
  lVar2 = 0x24;
  if (bVar5) {
    lVar2 = 0x6c;
  }
  fVar16 = (float)FUN_08a44d84(uStack000000000000003c,fStack0000000000000040,fStack0000000000000044,
                               in_stack_00000048,*(undefined4 *)(lVar9 + lVar2),
                               *(undefined4 *)(lVar9 + lVar1),*(undefined4 *)(lVar9 + lVar8),0);
  if (DAT_09837382 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    DAT_09837382 = '\x01';
  }
  fVar17 = fVar18 * fVar18 + fVar19 * fVar19 + fStack0000000000000034 * fStack0000000000000034;
  if (**(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8) <= fVar17) {
    fVar15 = fVar18 * fStack0000000000000044 +
             fVar19 * fVar16 + fStack0000000000000034 * fStack0000000000000040;
    fVar16 = fVar16 - (fVar19 * fVar15) / fVar17;
    fStack0000000000000040 = fStack0000000000000040 - (fStack0000000000000034 * fVar15) / fVar17;
    fStack0000000000000044 = fStack0000000000000044 - (fVar18 * fVar15) / fVar17;
  }
  if (DAT_0983637d == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_0983637d = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar18 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                fVar16 * fVar16 + fStack0000000000000040 * fStack0000000000000040);
  if (fVar18 <= fVar14) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar10 = *(float **)(*unaff_x22 + 0xb8);
    fVar16 = *pfVar10;
    fStack0000000000000040 = pfVar10[1];
    fStack0000000000000044 = pfVar10[2];
  }
  else {
    fVar16 = fVar16 / fVar18;
    fStack0000000000000040 = fStack0000000000000040 / fVar18;
    fStack0000000000000044 = fStack0000000000000044 / fVar18;
  }
  fStack0000000000000004 = fStack0000000000000034;
  fVar14 = (float)FUN_03e64c4c(fVar16,fStack0000000000000040,fStack0000000000000044,
                               fStack0000000000000014,fVar20,fStack000000000000001c,0);
  plVar13 = *(long **)(unaff_x19 + 0x28);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar8 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x21) {
        puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0745daa4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03d8f370(plVar13,*unaff_x21,0);
LAB_0745daa4:
  iVar6 = (*(code *)*puVar7)(plVar13,puVar7[1]);
  fVar18 = -fVar14;
  if (iVar6 != 1) {
    fVar18 = fVar14;
  }
  if (fVar18 < -70.0) {
    fVar18 = fVar18 + 360.0;
  }
  return fVar18;
}


