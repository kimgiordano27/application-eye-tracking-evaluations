/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 0696c2f8
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


void OVRPlugin_Qpl_Annotation_Builder__Add(float param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  float *pfVar2;
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
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float unaff_s9;
  float unaff_s10;
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
  
  while( true ) {
                    /* try { // try from 0696c2f8 to 06a6c2fb has its CatchHandler @ 0696c41c */
                    /* try { // try from 0696c2fc to 06a6c2ff has its CatchHandler @ 0696c418 */
    fVar6 = (float)param_2;
                    /* try { // try from 0696c300 to 06a6c303 has its CatchHandler @ 0696c40c */
    fVar4 = -param_1;
    fVar5 = -fVar6;
    fVar10 = -(float)param_3;
    if (0.0 <= unaff_s9 || 0.0 <= fVar6) {
      fVar4 = param_1;
      fVar5 = fVar6;
      fVar10 = (float)param_3;
    }
    fVar4 = (float)FUN_07c88914(fVar4,&stack0x00000090,0);
    if (*(char *)(unaff_x21 + 0xd8c) == '\0') {
      FUN_03a8a718();
      *(undefined1 *)(unaff_x21 + 0xd8c) = 1;
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar6 = SQRT(fVar10 * fVar10 + fVar4 * fVar4 + fVar5 * fVar5);
    if (fVar6 <= unaff_s14) {
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718();
        DAT_08974d8f = '\x01';
      }
      uVar9 = **(undefined8 **)(*unaff_x25 + 0xb8);
      fVar10 = *(float *)(*(undefined8 **)(*unaff_x25 + 0xb8) + 1);
    }
    else {
      fVar10 = fVar10 / fVar6;
      uVar9 = CONCAT44(fVar5 / fVar6,fVar4 / fVar6);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x27) break;
    fVar4 = *unaff_x29;
    fVar6 = unaff_x29[1];
    fVar7 = unaff_x29[2];
    fVar5 = (float)FUN_07c941e8(0);
    fVar4 = ((fVar4 - fStack000000000000004c) * (fVar4 - fStack000000000000004c) +
             (fVar6 - unaff_s9) * (fVar6 - unaff_s9) +
            (fVar7 - fStack0000000000000048) * (fVar7 - fStack0000000000000048)) *
            (*(float *)(unaff_x20 + 0x44) * (fVar5 + fVar5 + -1.0) + 1.0);
    if (fVar4 < unaff_s10 * unaff_s10) {
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x27) break;
      uStack0000000000000018 = 1;
      fVar4 = unaff_s10 - SQRT(fVar4);
      *unaff_x28 = CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar4 +
                            (float)((ulong)*unaff_x28 >> 0x20),
                            (float)uVar9 * fVar4 + (float)*unaff_x28);
      *(float *)(unaff_x28 + 1) = fVar10 * fVar4 + *(float *)(unaff_x28 + 1);
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
      fVar4 = *(float *)(unaff_x20 + 0x40);
      if (fStack000000000000001c <= *(float *)(unaff_x20 + 0x40)) {
        fVar4 = fStack000000000000001c;
      }
      unaff_s10 = 0.0;
      if (0.0 <= fStack000000000000001c) {
        unaff_s10 = fVar4;
      }
      in_stack_000000d8 = in_stack_00000058;
      in_stack_000000d0 = in_stack_00000050;
      in_stack_000000e8 = in_stack_00000068;
      in_stack_000000e0 = in_stack_00000060;
    } while (unaff_s10 <= unaff_s13);
    uVar9 = in_stack_00000060;
    uVar8 = in_stack_00000070;
    UnityEngine_UIElements_Length__Equals(&stack0x000000d0,0);
    fStack0000000000000048 = (float)uVar8;
    unaff_s9 = (float)uVar9;
    fStack000000000000004c = (float)FUN_07c888bc(&stack0x00000090,0);
    if ((*(long *)(unaff_x20 + 0x90) == 0) ||
       (lVar1 = *(long *)(*(long *)(unaff_x20 + 0x90) + 0x28), lVar1 == 0)) {
LAB_0696c50c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    fVar10 = unaff_s9;
    fVar6 = fStack0000000000000048;
    fVar3 = (float)FUN_07cac280(lVar1,0);
    fVar4 = fVar10;
    fVar5 = fVar6;
    fVar7 = (float)UnityEngine_UIElements_Length__Equals(&stack0x000000d0,0);
    if (*(char *)(unaff_x21 + 0xd8c) == '\0') {
      FUN_03a8a718();
      *(undefined1 *)(unaff_x21 + 0xd8c) = 1;
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar10 = fVar10 - fVar4;
    fVar3 = fVar3 - fVar7;
    fVar6 = fVar6 - fVar5;
    param_3 = (ulong)(uint)fVar6;
    fVar4 = SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar10 * fVar10);
    if (fVar4 <= unaff_s14) {
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718();
        DAT_08974d8f = '\x01';
      }
      pfVar2 = *(float **)(*unaff_x25 + 0xb8);
      fVar3 = *pfVar2;
      fVar5 = pfVar2[1];
      fVar6 = pfVar2[2];
    }
    else {
      fVar3 = fVar3 / fVar4;
      fVar5 = fVar10 / fVar4;
      fVar6 = fVar6 / fVar4;
    }
    fVar4 = (float)FUN_07d22938(&stack0x000000d0,0);
    fVar6 = fVar6 * (float)param_3;
    param_2 = (ulong)(uint)fVar6;
    param_1 = (float)FUN_07d22938(&stack0x000000d0,0);
    if (fVar6 + fVar3 * fVar4 + fVar5 * fVar10 <= 0.0) {
      param_1 = -param_1;
      param_2 = (ulong)(uint)-(float)param_2;
      param_3 = (ulong)(uint)-(float)param_3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


