/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 0696c2a4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Add(undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  long lVar1;
  undefined1 in_w8;
  float *pfVar2;
  undefined **in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  ulong unaff_x27;
  undefined8 *unaff_x28;
  float *unaff_x29;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float unaff_s9;
  float unaff_s10;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  uint uStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000048;
  float fStack000000000000004c;
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
  
code_r0x0696c2a4:
  *(undefined1 *)((long)in_x9 + 0xd8f) = in_w8;
LAB_0696c2a8:
                    /* try { // try from 0696c2ac to 06a6c2b7 has its CatchHandler @ 0696c3b0 */
  pfVar2 = *(float **)(*unaff_x25 + 0xb8);
  fVar6 = *pfVar2;
  fVar8 = pfVar2[1];
  fVar10 = pfVar2[2];
  do {
    fVar4 = (float)param_3;
    fVar9 = (float)param_2;
    fVar3 = (float)FUN_07d22938(&stack0x000000d0,0);
                    /* try { // try from 0696c2cc to 06a6c2cf has its CatchHandler @ 0696c50c */
                    /* try { // try from 0696c2d0 to 06a6c2d3 has its CatchHandler @ 0696c504 */
                    /* try { // try from 0696c2d4 to 06a6c2d7 has its CatchHandler @ 0696b384 */
                    /* try { // try from 0696c2d8 to 06a6c2db has its CatchHandler @ 0696c468 */
    fVar10 = fVar10 * fVar4;
                    /* try { // try from 0696c2dc to 06a6c2df has its CatchHandler @ 0696c464 */
    fVar6 = fVar10 + fVar6 * fVar3 + fVar8 * fVar9;
    fVar8 = (float)FUN_07d22938(&stack0x000000d0,0);
    if (fVar6 <= 0.0) {
      fVar8 = -fVar8;
      fVar10 = -fVar10;
      fVar4 = -fVar4;
    }
    fVar6 = -fVar8;
    fVar3 = -fVar10;
    fVar9 = -fVar4;
    if (0.0 <= unaff_s9 || 0.0 <= fVar10) {
      fVar6 = fVar8;
      fVar3 = fVar10;
      fVar9 = fVar4;
    }
    fVar8 = (float)FUN_07c88914(fVar6,&stack0x00000090,0);
    if (*(char *)(unaff_x21 + 0xd8c) == '\0') {
      FUN_03a8a718();
      *(undefined1 *)(unaff_x21 + 0xd8c) = 1;
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar10 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar3 * fVar3);
    if (fVar10 <= unaff_s14) {
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718();
        DAT_08974d8f = '\x01';
      }
      uVar7 = **(undefined8 **)(*unaff_x25 + 0xb8);
      fVar9 = *(float *)(*(undefined8 **)(*unaff_x25 + 0xb8) + 1);
    }
    else {
      fVar9 = fVar9 / fVar10;
      uVar7 = CONCAT44(fVar3 / fVar10,fVar8 / fVar10);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x27) {
LAB_0696c510:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    fVar8 = *unaff_x29;
    fVar6 = unaff_x29[1];
    fVar3 = unaff_x29[2];
    fVar10 = (float)FUN_07c941e8(0);
    fVar8 = ((fVar8 - fStack000000000000004c) * (fVar8 - fStack000000000000004c) +
             (fVar6 - unaff_s9) * (fVar6 - unaff_s9) +
            (fVar3 - fStack0000000000000048) * (fVar3 - fStack0000000000000048)) *
            (*(float *)(unaff_x20 + 0x44) * (fVar10 + fVar10 + -1.0) + 1.0);
    if (fVar8 < unaff_s10 * unaff_s10) {
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x27) goto LAB_0696c510;
      uStack0000000000000018 = 1;
      fVar8 = unaff_s10 - SQRT(fVar8);
      *unaff_x28 = CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar8 +
                            (float)((ulong)*unaff_x28 >> 0x20),
                            (float)uVar7 * fVar8 + (float)*unaff_x28);
      *(float *)(unaff_x28 + 1) = fVar9 * fVar8 + *(float *)(unaff_x28 + 1);
    }
    do {
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
        } while (unaff_w23 < 1);
        unaff_w26 = 0;
        unaff_x28 = (undefined8 *)(in_stack_00000010 + unaff_x27 * 0xc);
        unaff_x29 = (float *)(unaff_x22 + unaff_x27 * 0xc + 0x20);
      }
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0696c50c;
      FUN_07d23160(&stack0x00000050,*(long *)(unaff_x19 + 0x10),unaff_w26,0);
      in_stack_000000f8 = in_stack_00000078;
      in_stack_000000f0 = in_stack_00000070;
      fVar8 = *(float *)(unaff_x20 + 0x40);
      if (fStack000000000000001c <= *(float *)(unaff_x20 + 0x40)) {
        fVar8 = fStack000000000000001c;
      }
      unaff_s10 = 0.0;
      if (0.0 <= fStack000000000000001c) {
        unaff_s10 = fVar8;
      }
      in_stack_000000d8 = in_stack_00000058;
      in_stack_000000d0 = in_stack_00000050;
      in_stack_000000e8 = in_stack_00000068;
      in_stack_000000e0 = in_stack_00000060;
    } while (unaff_s10 <= unaff_s13);
    uVar7 = in_stack_00000060;
    uVar5 = in_stack_00000070;
    UnityEngine_UIElements_Length__Equals(&stack0x000000d0,0);
    fStack0000000000000048 = (float)uVar5;
    unaff_s9 = (float)uVar7;
    fStack000000000000004c = (float)FUN_07c888bc(&stack0x00000090,0);
    if ((*(long *)(unaff_x20 + 0x90) == 0) ||
       (lVar1 = *(long *)(*(long *)(unaff_x20 + 0x90) + 0x28), lVar1 == 0)) {
LAB_0696c50c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    fVar8 = unaff_s9;
    fVar10 = fStack0000000000000048;
    fVar6 = (float)FUN_07cac280(lVar1,0);
    fVar3 = fVar8;
    fVar9 = fVar10;
    fVar4 = (float)UnityEngine_UIElements_Length__Equals(&stack0x000000d0,0);
    if (*(char *)(unaff_x21 + 0xd8c) == '\0') {
      FUN_03a8a718();
      *(undefined1 *)(unaff_x21 + 0xd8c) = 1;
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar8 = fVar8 - fVar3;
    param_2 = (ulong)(uint)fVar8;
    fVar6 = fVar6 - fVar4;
    fVar10 = fVar10 - fVar9;
    param_3 = (ulong)(uint)fVar10;
    fVar3 = SQRT(fVar10 * fVar10 + fVar6 * fVar6 + fVar8 * fVar8);
    if (fVar3 <= unaff_s14) break;
    fVar6 = fVar6 / fVar3;
    fVar8 = fVar8 / fVar3;
    fVar10 = fVar10 / fVar3;
  } while( true );
  if (DAT_08974d8f == '\0') goto code_r0x0696c294;
  goto LAB_0696c2a8;
code_r0x0696c294:
  FUN_03a8a718();
  in_w8 = 1;
  in_x9 = &PTR_FUN_08974000;
  goto code_r0x0696c2a4;
}


