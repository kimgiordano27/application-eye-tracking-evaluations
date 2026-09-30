/*
FUNCTION_NAME: OVRManager$$remove_InputFocusAcquired
ENTRY_POINT: 07459024
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusAcquired(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *plVar7;
  long unaff_x21;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  float unaff_s8;
  float unaff_s9;
  float fVar13;
  float unaff_s10;
  float fVar14;
  float unaff_s11;
  float fVar15;
  float fVar16;
  float unaff_s13;
  float fVar17;
  float fVar18;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_000000c8;
  
  puVar1 = PTR_DAT_091a0f88;
                    /* catch() { ... } // from try @ 07459004 with catch @ 07459028 */
                    /* try { // try from 07459030 to 07559043 has its CatchHandler @ 074590a8 */
  lVar3 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
  fVar16 = *(float *)(lVar3 + 0x18);
  fVar18 = *(float *)(lVar3 + 0x1c);
  fVar17 = *(float *)(lVar3 + 0x20);
                    /* catch() { ... } // from try @ 07458f04 with catch @ 07459044
                       try { // try from 07459044 to 0755905f has its CatchHandler @ 074587f8 */
  if (DAT_09837382 == '\0') {
                    /* catch() { ... } // from try @ 07458fb4 with catch @ 07459048 */
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    DAT_09837382 = '\x01';
  }
                    /* try { // try from 07459060 to 07559063 has its CatchHandler @ 07459084 */
                    /* try { // try from 07459064 to 0755908b has its CatchHandler @ 074587f8 */
  fVar8 = fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18;
                    /* catch() { ... } // from try @ 07459060 with catch @ 07459084 */
  fVar13 = unaff_s13 - unaff_s9;
  fVar14 = unaff_s11 - unaff_s10;
                    /* try { // try from 0745908c to 07559093 has its CatchHandler @ 074590a8 */
  fVar15 = in_stack_000000c8._4_4_ - unaff_s8;
                    /* try { // try from 07459094 to 0755909f has its CatchHandler @ 074587f8 */
  if (**(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8) <= fVar8) {
                    /* try { // try from 074590a0 to 075590a7 has its CatchHandler @ 074590a8 */
                    /* catch() { ... } // from try @ 07458fcc with catch @ 074590a8
                       catch() { ... } // from try @ 07459030 with catch @ 074590a8
                       catch() { ... } // from try @ 0745908c with catch @ 074590a8
                       catch() { ... } // from try @ 074590a0 with catch @ 074590a8 */
                    /* try { // try from 074590ac to 075591f3 has its CatchHandler @ 074590ac
                       catch() { ... } // from try @ 074590ac with catch @ 074590ac
                       catch() { ... } // from try @ 07459420 with catch @ 074590ac
                       catch() { ... } // from try @ 074594c0 with catch @ 074590ac
                       catch() { ... } // from try @ 074594fc with catch @ 074590ac
                       catch() { ... } // from try @ 074595b4 with catch @ 074590ac
                       catch() { ... } // from try @ 0745963c with catch @ 074590ac
                       catch() { ... } // from try @ 074596c4 with catch @ 074590ac
                       catch() { ... } // from try @ 074596f8 with catch @ 074590ac
                       catch() { ... } // from try @ 07459724 with catch @ 074590ac
                       catch() { ... } // from try @ 07459754 with catch @ 074590ac */
    fVar10 = fVar15 * fVar17 + fVar13 * fVar16 + fVar14 * fVar18;
    fVar13 = fVar13 - (fVar16 * fVar10) / fVar8;
    fVar14 = fVar14 - (fVar18 * fVar10) / fVar8;
    fVar15 = fVar15 - (fVar17 * fVar10) / fVar8;
  }
  if (DAT_0983637d == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_0983637d = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar16 = SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14);
  if (fVar16 <= DAT_0191476c) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar13 = *pfVar4;
    fVar14 = pfVar4[1];
    fVar15 = pfVar4[2];
  }
  else {
    fVar13 = fVar13 / fVar16;
    fVar14 = fVar14 / fVar16;
    fVar15 = fVar15 / fVar16;
  }
  uVar11 = (ulong)(uint)fVar15;
  uVar5 = (ulong)(uint)fVar14;
  if (*(char *)(unaff_x21 + 0x325) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    *(undefined1 *)(unaff_x21 + 0x325) = 1;
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  uVar12 = (ulong)*(uint *)(lVar3 + 0x18);
  uVar9 = FUN_08a44a78(fVar13,uVar5,uVar11,uVar12,*(undefined4 *)(lVar3 + 0x1c),
                       *(undefined4 *)(lVar3 + 0x20),0);
  plVar7 = *(long **)(unaff_x19 + 0x138);
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  FUN_08a5b7d0(*unaff_x20,unaff_x20[1],unaff_x20[2],uVar9,uVar5,uVar11,uVar12,&stack0x00000040,0);
  uStack0000000000000074 = CONCAT44(in_stack_00000058,uStack0000000000000054);
  in_stack_00000068 = in_stack_00000048;
  in_stack_00000060 = in_stack_00000040;
  uStack000000000000006c = uStack000000000000004c;
  in_stack_00000070 = in_stack_00000050;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09220378) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_07459264;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_09220378,2);
LAB_07459264:
  (*(code *)*puVar2)(plVar7,&stack0x00000060,puVar2[1]);
  *(undefined8 *)(unaff_x19 + 0x14c) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000014;
  *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return;
}


