/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 0696c190
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Add
               (undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  float *pfVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  ulong unaff_x27;
  undefined8 *unaff_x28;
  float *unaff_x29;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  undefined8 uVar13;
  float unaff_s9;
  float fVar14;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  uint uStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 uVar11;
  
  do {
    FUN_07d23160(param_1,param_2,param_3,param_4);
    in_stack_000000f8 = in_stack_00000078;
    in_stack_000000f0 = in_stack_00000070;
    fVar3 = *(float *)(unaff_x20 + 0x40);
    if (unaff_s12 <= *(float *)(unaff_x20 + 0x40)) {
      fVar3 = unaff_s12;
    }
    fVar6 = unaff_s9;
                    /* try { // try from 0696c1ac to 06a6c1b7 has its CatchHandler @ 0696c4bc */
    if (0.0 <= unaff_s12) {
      fVar6 = fVar3;
    }
    in_stack_000000d8 = in_stack_00000058;
    in_stack_000000d0 = in_stack_00000050;
    in_stack_000000e8 = in_stack_00000068;
    in_stack_000000e0 = in_stack_00000060;
    if (unaff_s13 < fVar6) {
      uVar13 = in_stack_00000060;
      uVar11 = in_stack_00000070;
      UnityEngine_UIElements_Length__Equals(&stack0x000000d0,0);
      fVar9 = (float)uVar11;
      fVar7 = (float)uVar13;
                    /* try { // try from 0696c1d4 to 06a6c1d7 has its CatchHandler @ 0696c340 */
      fVar3 = (float)FUN_07c888bc(&stack0x00000090,0);
                    /* try { // try from 0696c1d8 to 06a6c1f7 has its CatchHandler @ 0696c484 */
      if ((*(long *)(unaff_x20 + 0x90) == 0) ||
         (lVar1 = *(long *)(*(long *)(unaff_x20 + 0x90) + 0x28), lVar1 == 0)) {
LAB_0696c50c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      fVar8 = fVar7;
      fVar10 = fVar9;
      fVar4 = (float)FUN_07cac280(lVar1,0);
      fVar12 = fVar8;
      fVar14 = fVar10;
                    /* try { // try from 0696c208 to 06a6c213 has its CatchHandler @ 0696c480 */
      fVar5 = (float)UnityEngine_UIElements_Length__Equals(&stack0x000000d0,0);
                    /* try { // try from 0696c218 to 06a6c223 has its CatchHandler @ 0696c410 */
      if (*(char *)(unaff_x21 + 0xd8c) == '\0') {
        FUN_03a8a718();
        *(undefined1 *)(unaff_x21 + 0xd8c) = 1;
      }
                    /* try { // try from 0696c234 to 06a6c23f has its CatchHandler @ 0696c47c */
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
                    /* try { // try from 0696c244 to 06a6c24f has its CatchHandler @ 0696c3c4 */
      fVar8 = fVar8 - fVar12;
      fVar4 = fVar4 - fVar5;
      fVar10 = fVar10 - fVar14;
                    /* try { // try from 0696c260 to 06a6c26b has its CatchHandler @ 0696c4a4 */
      fVar12 = SQRT(fVar10 * fVar10 + fVar4 * fVar4 + fVar8 * fVar8);
      if (fVar12 <= unaff_s14) {
                    /* try { // try from 0696c288 to 06a6c28b has its CatchHandler @ 0696c33c */
                    /* try { // try from 0696c28c to 06a6c297 has its CatchHandler @ 0696c39c */
        if (DAT_08974d8f == '\0') {
          FUN_03a8a718();
          DAT_08974d8f = '\x01';
        }
        pfVar2 = *(float **)(*unaff_x25 + 0xb8);
        fVar4 = *pfVar2;
        fVar14 = pfVar2[1];
        fVar12 = pfVar2[2];
      }
      else {
        fVar4 = fVar4 / fVar12;
        fVar14 = fVar8 / fVar12;
        fVar12 = fVar10 / fVar12;
      }
      fVar5 = (float)FUN_07d22938(&stack0x000000d0,0);
      fVar12 = fVar12 * fVar10;
      fVar8 = fVar12 + fVar4 * fVar5 + fVar14 * fVar8;
      fVar14 = (float)FUN_07d22938(&stack0x000000d0,0);
      if (fVar8 <= 0.0) {
        fVar14 = -fVar14;
        fVar12 = -fVar12;
        fVar10 = -fVar10;
      }
      fVar8 = -fVar14;
      fVar5 = -fVar12;
      fVar4 = -fVar10;
      if (0.0 <= fVar7 || 0.0 <= fVar12) {
        fVar8 = fVar14;
        fVar5 = fVar12;
        fVar4 = fVar10;
      }
      fVar12 = (float)FUN_07c88914(fVar8,&stack0x00000090,0);
      if (*(char *)(unaff_x21 + 0xd8c) == '\0') {
        FUN_03a8a718();
        *(undefined1 *)(unaff_x21 + 0xd8c) = 1;
      }
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      fVar14 = SQRT(fVar4 * fVar4 + fVar12 * fVar12 + fVar5 * fVar5);
      if (fVar14 <= unaff_s14) {
        if (DAT_08974d8f == '\0') {
          FUN_03a8a718();
          DAT_08974d8f = '\x01';
        }
        uVar13 = **(undefined8 **)(*unaff_x25 + 0xb8);
        fVar4 = *(float *)(*(undefined8 **)(*unaff_x25 + 0xb8) + 1);
      }
      else {
        fVar4 = fVar4 / fVar14;
        uVar13 = CONCAT44(fVar5 / fVar14,fVar12 / fVar14);
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x27) {
LAB_0696c510:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      fVar12 = *unaff_x29;
      fVar8 = unaff_x29[1];
      fVar10 = unaff_x29[2];
      fVar14 = (float)FUN_07c941e8(0);
      fVar3 = ((fVar12 - fVar3) * (fVar12 - fVar3) + (fVar8 - fVar7) * (fVar8 - fVar7) +
              (fVar10 - fVar9) * (fVar10 - fVar9)) *
              (*(float *)(unaff_x20 + 0x44) * (fVar14 + fVar14 + -1.0) + 1.0);
      unaff_s9 = 0.0;
      unaff_s12 = fStack000000000000001c;
      if (fVar3 < fVar6 * fVar6) {
        if (*(uint *)(unaff_x22 + 0x18) <= unaff_x27) goto LAB_0696c510;
        uStack0000000000000018 = 1;
        fVar6 = fVar6 - SQRT(fVar3);
        *unaff_x28 = CONCAT44((float)((ulong)uVar13 >> 0x20) * fVar6 +
                              (float)((ulong)*unaff_x28 >> 0x20),
                              (float)uVar13 * fVar6 + (float)*unaff_x28);
        *(float *)(unaff_x28 + 1) = fVar4 * fVar6 + *(float *)(unaff_x28 + 1);
      }
    }
    unaff_w26 = unaff_w26 + 1;
    if (unaff_w23 == unaff_w26) {
      do {
        unaff_x27 = unaff_x27 + 1;
        if ((long)*(int *)(unaff_x22 + 0x18) <= (long)unaff_x27) {
          if ((uStack0000000000000018 & 1) != 0) {
            FUN_07c72230(in_stack_00000008);
            FUN_07c74ba0(in_stack_00000008,0);
            FUN_07c74c60(in_stack_00000008,0);
            FUN_07c74d20(in_stack_00000008,0);
          }
          return;
        }
      } while ((int)unaff_w23 < 1);
      unaff_w26 = 0;
      unaff_x28 = (undefined8 *)(in_stack_00000010 + unaff_x27 * 0xc);
      unaff_x29 = (float *)(unaff_x22 + unaff_x27 * 0xc + 0x20);
    }
    param_2 = *(long *)(unaff_x19 + 0x10);
    if (param_2 == 0) goto LAB_0696c50c;
    param_1 = &stack0x00000050;
    param_3 = (ulong)unaff_w26;
    param_4 = 0;
  } while( true );
}


