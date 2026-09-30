/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryResults
ENTRY_POINT: 07a1faa0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceQueryResults(void)

{
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  int in_w9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *plVar6;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float unaff_s8;
  float fVar11;
  float unaff_s9;
  float fVar12;
  float unaff_s10;
  float fVar13;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 uStack0000000000000000;
  undefined8 uStack0000000000000004;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
                    /* catch() { ... } // from try @ 07a1f848 with catch @ 07a1faa0 */
  if (in_w9 == 0) {
                    /* catch() { ... } // from try @ 07a1f704 with catch @ 07a1faa4 */
                    /* catch() { ... } // from try @ 07a1f66c with catch @ 07a1faa8 */
                    /* catch() { ... } // from try @ 07a1f770 with catch @ 07a1faac */
    FUN_04077588(PTR_DAT_09285d58);
                    /* catch() { ... } // from try @ 07a1fa38 with catch @ 07a1fab0 */
                    /* catch() { ... } // from try @ 07a1f510 with catch @ 07a1fab4 */
    *(undefined1 *)(unaff_x23 + 0x4e6) = 1;
  }
                    /* catch() { ... } // from try @ 07a1f528 with catch @ 07a1fab8 */
                    /* catch() { ... } // from try @ 07a1f540 with catch @ 07a1fabc */
                    /* catch() { ... } // from try @ 07a1f558 with catch @ 07a1fac0 */
                    /* catch() { ... } // from try @ 07a1f58c with catch @ 07a1fac4 */
                    /* catch() { ... } // from try @ 07a1f5a4 with catch @ 07a1fac8 */
                    /* catch() { ... } // from try @ 07a1f5bc with catch @ 07a1facc */
  fVar11 = unaff_s13 - unaff_s8;
                    /* catch() { ... } // from try @ 07a1f5d4 with catch @ 07a1fad0 */
  fVar12 = unaff_s12 - unaff_s9;
  fVar13 = (float)uStack0000000000000000 - unaff_s10;
  fVar7 = unaff_s14 * unaff_s14 + unaff_s11 * unaff_s11 + unaff_s15 * unaff_s15;
                    /* try { // try from 07a1faec to 07b1faef has its CatchHandler @ 07a1fb00 */
  if (**(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) <= fVar7) {
                    /* catch() { ... } // from try @ 07a1faec with catch @ 07a1fb00 */
                    /* try { // try from 07a1fb04 to 07b1fb0b has its CatchHandler @ 07a1fb14 */
    fVar9 = fVar13 * unaff_s14 + fVar11 * unaff_s11 + fVar12 * unaff_s15;
                    /* try { // try from 07a1fb0c to 07b1fb17 has its CatchHandler @ 07a1f234 */
                    /* catch() { ... } // from try @ 07a1fb04 with catch @ 07a1fb14 */
    fVar11 = fVar11 - (unaff_s11 * fVar9) / fVar7;
    fVar12 = fVar12 - (unaff_s15 * fVar9) / fVar7;
    fVar13 = fVar13 - (unaff_s14 * fVar9) / fVar7;
  }
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar7 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12);
  if (fVar7 <= DAT_01aecf88) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x22 + 0xb8);
    fVar11 = *pfVar2;
    fVar12 = pfVar2[1];
    fVar13 = pfVar2[2];
  }
  else {
    fVar11 = fVar11 / fVar7;
    fVar12 = fVar12 / fVar7;
    fVar13 = fVar13 / fVar7;
  }
  if (*(char *)(unaff_x21 + 0x4eb) == '\0') {
    FUN_04077588(PTR_DAT_09285d60);
    *(undefined1 *)(unaff_x21 + 0x4eb) = 1;
  }
  lVar3 = *(long *)(*unaff_x22 + 0xb8);
  uVar10 = *(undefined4 *)(lVar3 + 0x18);
  uVar8 = FUN_089b941c(fVar11,fVar12,fVar13,uVar10,*(undefined4 *)(lVar3 + 0x1c),
                       *(undefined4 *)(lVar3 + 0x20),0);
  plVar6 = *(long **)(unaff_x19 + 0x138);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  FUN_089d99f0(*unaff_x20,unaff_x20[1],unaff_x20[2],uVar8,fVar12,fVar13,uVar10,&stack0x00000020,0);
  uStack0000000000000054 = CONCAT44(in_stack_00000038,uStack0000000000000034);
  in_stack_00000048 = in_stack_00000028;
  in_stack_00000040 = in_stack_00000020;
  uStack000000000000004c = uStack000000000000002c;
  in_stack_00000050 = in_stack_00000030;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092ed800) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_07a1fcc0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_092ed800,2);
LAB_07a1fcc0:
  (*(code *)*puVar1)((undefined1 *)((long)&stack0x00000000 + 4),plVar6,&stack0x00000040,puVar1[1]);
  *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  *(undefined8 *)(unaff_x19 + 0x144) = uStack0000000000000004;
  *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000018;
  *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
  return;
}


