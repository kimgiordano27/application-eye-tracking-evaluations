/*
FUNCTION_NAME: OVRManager$$add_AudioInChanged
ENTRY_POINT: 07459470
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_AudioInChanged(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  float *unaff_x21;
  long unaff_x22;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined8 in_stack_000000c8;
  
                    /* try { // try from 07459474 to 07559477 has its CatchHandler @ 074595c0 */
  *(undefined1 *)(unaff_x22 + 0x7cd) = 1;
                    /* try { // try from 07459478 to 07559487 has its CatchHandler @ 07459608 */
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  if (*(long *)(unaff_x19 + 0x128) != 0) {
    fVar11 = unaff_x21[1];
    in_stack_000000c8._4_4_ = unaff_x21[2];
                    /* try { // try from 07459490 to 07559497 has its CatchHandler @ 074595d8 */
    fVar12 = *unaff_x21;
                    /* try { // try from 07459498 to 0755949f has its CatchHandler @ 074595d4 */
    fVar7 = (float)FUN_08a5d3f4(*(long *)(unaff_x19 + 0x128),0);
                    /* try { // try from 074594a0 to 075594a7 has its CatchHandler @ 074595cc */
                    /* try { // try from 074594ac to 075594af has its CatchHandler @ 074594dc */
                    /* try { // try from 074594b4 to 075594b7 has its CatchHandler @ 074594d8 */
    if (DAT_09836325 == '\0') {
                    /* try { // try from 074594bc to 075594bf has its CatchHandler @ 074594c8 */
                    /* try { // try from 074594c0 to 075594f7 has its CatchHandler @ 074590ac */
      FUN_03d2d2b0(PTR_DAT_091a0f88);
                    /* catch() { ... } // from try @ 07459394 with catch @ 074594c4 */
                    /* catch() { ... } // from try @ 074594bc with catch @ 074594c8 */
      DAT_09836325 = '\x01';
    }
                    /* catch() { ... } // from try @ 07459378 with catch @ 074594cc */
                    /* catch() { ... } // from try @ 07459348 with catch @ 074594d0 */
                    /* catch() { ... } // from try @ 0745934c with catch @ 074594d4 */
                    /* catch() { ... } // from try @ 074594b4 with catch @ 074594d8 */
                    /* catch() { ... } // from try @ 074594ac with catch @ 074594dc */
                    /* catch() { ... } // from try @ 07459318 with catch @ 074594e0 */
    lVar3 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar10 = *(float *)(lVar3 + 0x18);
    fVar14 = *(float *)(lVar3 + 0x1c);
    fVar13 = *(float *)(lVar3 + 0x20);
    if (DAT_09837382 == '\0') {
                    /* try { // try from 074594f8 to 075594fb has its CatchHandler @ 074595b4 */
      FUN_03d2d2b0(PTR_DAT_091a2ee8);
                    /* try { // try from 074594fc to 0755955f has its CatchHandler @ 074590ac */
      DAT_09837382 = '\x01';
    }
    fVar8 = fVar13 * fVar13 + fVar10 * fVar10 + fVar14 * fVar14;
    fVar12 = fVar12 - fVar7;
    fVar11 = fVar11 - param_2;
    param_3 = in_stack_000000c8._4_4_ - param_3;
    fVar7 = **(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8);
    if (fVar7 <= fVar8) {
      fVar9 = param_3 * fVar13 + fVar12 * fVar10 + fVar11 * fVar14;
      fVar7 = (fVar10 * fVar9) / fVar8;
      fVar12 = fVar12 - fVar7;
      fVar11 = fVar11 - (fVar14 * fVar9) / fVar8;
      param_3 = param_3 - (fVar13 * fVar9) / fVar8;
    }
    if (DAT_098362cc == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_098362cc = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    puVar1 = PTR_DAT_091f9220;
    if (*(long *)(unaff_x19 + 0x128) != 0) {
      fVar10 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + param_3 * param_3);
      fVar11 = (float)FUN_08a5d3f4(*(long *)(unaff_x19 + 0x128),0);
      fVar12 = fVar7;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      fVar13 = (float)FUN_08a5bb88();
      plVar6 = *(long **)(unaff_x19 + 0x138);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_08a5b7d0(fVar11 + fVar10 * fVar13,unaff_x21[1],fVar7 + fVar10 * fVar12,
                   *(undefined4 *)(unaff_x20 + 0xc),*(undefined4 *)(unaff_x20 + 0x10),
                   *(undefined4 *)(unaff_x20 + 0x14),*(undefined4 *)(unaff_x20 + 0x18),
                   &stack0x00000040,0);
      uStack0000000000000068 = uStack0000000000000048;
      uStack0000000000000060 = in_stack_00000040;
      uStack0000000000000074 = uStack0000000000000054;
      uStack0000000000000078 = in_stack_00000058;
      uStack000000000000006c = uStack000000000000004c;
      uStack0000000000000070 = uStack0000000000000050;
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09220378) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
              goto LAB_074596ac;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)PTR_DAT_09220378,2);
LAB_074596ac:
        (*(code *)*puVar2)(plVar6,&stack0x00000060,puVar2[1]);
        *(undefined8 *)(unaff_x19 + 0x14c) = in_stack_00000008;
        *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000;
        *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000014;
        *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


