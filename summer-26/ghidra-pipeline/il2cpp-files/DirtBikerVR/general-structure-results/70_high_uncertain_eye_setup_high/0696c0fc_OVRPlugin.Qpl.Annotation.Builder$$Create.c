/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Create
ENTRY_POINT: 0696c0fc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Create(void)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  float *pfVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float unaff_s12;
  float unaff_s13;
  float fStack000000000000001c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  FUN_07cacf0c();
  puVar6 = PTR_DAT_08486c60;
  puVar5 = PTR_DAT_084868a0;
  fVar4 = DAT_015c5ce0;
  in_stack_00000098 = in_stack_00000058;
  in_stack_00000090 = in_stack_00000050;
  in_stack_000000a8 = in_stack_00000068;
  in_stack_000000a0 = in_stack_00000060;
                    /* try { // try from 0696c114 to 06a6c11b has its CatchHandler @ 0696c3b4 */
  in_stack_000000b8 = in_stack_00000078;
  in_stack_000000b0 = in_stack_00000070;
  in_stack_000000c8 = in_stack_00000088;
  in_stack_000000c0 = in_stack_00000080;
  if (unaff_x22 != 0) {
    if (0 < *(int *)(unaff_x22 + 0x18)) {
      bVar3 = false;
                    /* try { // try from 0696c138 to 06a6c143 has its CatchHandler @ 0696c488 */
      uVar10 = 0;
      fStack000000000000001c = unaff_s12;
      do {
                    /* try { // try from 0696c160 to 06a6c163 has its CatchHandler @ 0696c344 */
        if (0 < unaff_w23) {
                    /* try { // try from 0696c164 to 06a6c16f has its CatchHandler @ 0696c414 */
          iVar9 = 0;
          lVar1 = unaff_x22 + uVar10 * 0xc;
          puVar2 = (undefined8 *)(unaff_x22 + 0x20 + uVar10 * 0xc);
          do {
            if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0696c50c;
                    /* try { // try from 0696c184 to 06a6c18f has its CatchHandler @ 0696c408 */
            FUN_07d23160(&stack0x00000050,*(long *)(unaff_x19 + 0x10),iVar9,0);
            in_stack_000000f8 = in_stack_00000078;
            in_stack_000000f0 = in_stack_00000070;
            fVar11 = *(float *)(unaff_x20 + 0x40);
            if (unaff_s12 <= *(float *)(unaff_x20 + 0x40)) {
              fVar11 = unaff_s12;
            }
            fVar14 = 0.0;
            if (0.0 <= unaff_s12) {
              fVar14 = fVar11;
            }
            in_stack_000000d8 = in_stack_00000058;
            in_stack_000000d0 = in_stack_00000050;
            in_stack_000000e8 = in_stack_00000068;
            in_stack_000000e0 = in_stack_00000060;
            if (unaff_s13 < fVar14) {
              uVar21 = in_stack_00000060;
              uVar19 = in_stack_00000070;
              UnityEngine_UIElements_Length__Equals(&stack0x000000d0,0);
              fVar18 = (float)uVar19;
              fVar16 = (float)uVar21;
              fVar11 = (float)FUN_07c888bc(&stack0x00000090,0);
              if ((*(long *)(unaff_x20 + 0x90) == 0) ||
                 (lVar7 = *(long *)(*(long *)(unaff_x20 + 0x90) + 0x28), lVar7 == 0))
              goto LAB_0696c50c;
              fVar15 = fVar16;
              fVar17 = fVar18;
              fVar12 = (float)FUN_07cac280(lVar7,0);
              fVar20 = fVar15;
              fVar22 = fVar17;
              fVar13 = (float)UnityEngine_UIElements_Length__Equals(&stack0x000000d0,0);
              if (DAT_08974d8c == '\0') {
                FUN_03a8a718(puVar6);
                DAT_08974d8c = '\x01';
              }
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              fVar15 = fVar15 - fVar20;
              fVar12 = fVar12 - fVar13;
              fVar17 = fVar17 - fVar22;
              fVar20 = SQRT(fVar17 * fVar17 + fVar12 * fVar12 + fVar15 * fVar15);
              if (fVar20 <= fVar4) {
                if (DAT_08974d8f == '\0') {
                  FUN_03a8a718(puVar5);
                  DAT_08974d8f = '\x01';
                }
                pfVar8 = *(float **)(*(long *)puVar5 + 0xb8);
                fVar12 = *pfVar8;
                fVar22 = pfVar8[1];
                fVar20 = pfVar8[2];
              }
              else {
                fVar12 = fVar12 / fVar20;
                fVar22 = fVar15 / fVar20;
                fVar20 = fVar17 / fVar20;
              }
              fVar13 = (float)FUN_07d22938(&stack0x000000d0,0);
              fVar20 = fVar20 * fVar17;
              fVar15 = fVar20 + fVar12 * fVar13 + fVar22 * fVar15;
              fVar22 = (float)FUN_07d22938(&stack0x000000d0,0);
              unaff_s12 = fStack000000000000001c;
              if (fVar15 <= 0.0) {
                fVar22 = -fVar22;
                fVar20 = -fVar20;
                fVar17 = -fVar17;
              }
              fVar15 = -fVar22;
              fVar13 = -fVar20;
              fVar12 = -fVar17;
              if (0.0 <= fVar16 || 0.0 <= fVar20) {
                fVar15 = fVar22;
                fVar13 = fVar20;
                fVar12 = fVar17;
              }
              fVar20 = (float)FUN_07c88914(fVar15,&stack0x00000090,0);
              if (DAT_08974d8c == '\0') {
                FUN_03a8a718(puVar6);
                DAT_08974d8c = '\x01';
              }
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              fVar22 = SQRT(fVar12 * fVar12 + fVar20 * fVar20 + fVar13 * fVar13);
              if (fVar22 <= fVar4) {
                if (DAT_08974d8f == '\0') {
                  FUN_03a8a718(puVar5);
                  DAT_08974d8f = '\x01';
                }
                uVar21 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
                fVar12 = *(float *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
              }
              else {
                fVar12 = fVar12 / fVar22;
                uVar21 = CONCAT44(fVar13 / fVar22,fVar20 / fVar22);
              }
              if (*(uint *)(unaff_x22 + 0x18) <= uVar10) {
LAB_0696c510:
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              fVar16 = *(float *)(lVar1 + 0x24) - fVar16;
              fVar11 = *(float *)(lVar1 + 0x20) - fVar11;
              fVar18 = *(float *)(lVar1 + 0x28) - fVar18;
              fVar20 = (float)FUN_07c941e8(0);
              fVar11 = (fVar11 * fVar11 + fVar16 * fVar16 + fVar18 * fVar18) *
                       (*(float *)(unaff_x20 + 0x44) * (fVar20 + fVar20 + -1.0) + 1.0);
              if (fVar11 < fVar14 * fVar14) {
                if (*(uint *)(unaff_x22 + 0x18) <= uVar10) goto LAB_0696c510;
                bVar3 = true;
                fVar14 = fVar14 - SQRT(fVar11);
                *puVar2 = CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar14 +
                                   (float)((ulong)*puVar2 >> 0x20),
                                   (float)uVar21 * fVar14 + (float)*puVar2);
                *(float *)(puVar2 + 1) = fVar12 * fVar14 + *(float *)(puVar2 + 1);
              }
            }
            iVar9 = iVar9 + 1;
          } while (unaff_w23 != iVar9);
        }
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)*(int *)(unaff_x22 + 0x18));
      if (bVar3) {
        FUN_07c72230(unaff_x21);
        FUN_07c74ba0(unaff_x21,0);
        FUN_07c74c60(unaff_x21,0);
        FUN_07c74d20(unaff_x21,0);
      }
    }
    return;
  }
LAB_0696c50c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


