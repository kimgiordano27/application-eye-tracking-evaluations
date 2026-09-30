/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$get_Count
ENTRY_POINT: 0696c0b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__get_Count(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  int iVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
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
  
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    iVar8 = FUN_07d22e24(*(long *)(unaff_x19 + 0x10),0);
    fVar5 = DAT_015c5d24;
                    /* try { // try from 0696c0c8 to 06a6c0d3 has its CatchHandler @ 0696c48c */
    fVar25 = (*(float *)(unaff_x19 + 0x18) * *(float *)(unaff_x20 + 0x48)) / DAT_015c5a88;
    if (fVar25 <= DAT_015c5d24) {
      return;
    }
                    /* try { // try from 0696c0f0 to 06a6c0f3 has its CatchHandler @ 0696c348 */
    if (param_1 != 0) {
                    /* try { // try from 0696c0f4 to 06a6c103 has its CatchHandler @ 0696c3b8 */
      FUN_07cacf0c(&stack0x00000050,param_1,0);
      puVar7 = PTR_DAT_08486c60;
      puVar6 = PTR_DAT_084868a0;
      fVar4 = DAT_015c5ce0;
      in_stack_00000098 = in_stack_00000058;
      in_stack_00000090 = in_stack_00000050;
      in_stack_000000a8 = in_stack_00000068;
      in_stack_000000a0 = in_stack_00000060;
      in_stack_000000b8 = in_stack_00000078;
      in_stack_000000b0 = in_stack_00000070;
      in_stack_000000c8 = in_stack_00000088;
      in_stack_000000c0 = in_stack_00000080;
      if (unaff_x22 != 0) {
        if (*(int *)(unaff_x22 + 0x18) < 1) {
          return;
        }
        bVar3 = false;
        uVar12 = 0;
        do {
          if (0 < iVar8) {
            iVar11 = 0;
            lVar1 = unaff_x22 + uVar12 * 0xc;
            puVar2 = (undefined8 *)(unaff_x22 + 0x20 + uVar12 * 0xc);
            do {
              if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0696c50c;
              FUN_07d23160(&stack0x00000050,*(long *)(unaff_x19 + 0x10),iVar11,0);
              in_stack_000000f8 = in_stack_00000078;
              in_stack_000000f0 = in_stack_00000070;
              fVar13 = *(float *)(unaff_x20 + 0x40);
              if (fVar25 <= *(float *)(unaff_x20 + 0x40)) {
                fVar13 = fVar25;
              }
              fVar16 = 0.0;
              if (0.0 <= fVar25) {
                fVar16 = fVar13;
              }
              in_stack_000000d8 = in_stack_00000058;
              in_stack_000000d0 = in_stack_00000050;
              in_stack_000000e8 = in_stack_00000068;
              in_stack_000000e0 = in_stack_00000060;
              if (fVar5 < fVar16) {
                uVar23 = in_stack_00000060;
                uVar21 = in_stack_00000070;
                UnityEngine_UIElements_Length__Equals(&stack0x000000d0,0);
                fVar20 = (float)uVar21;
                fVar18 = (float)uVar23;
                fVar13 = (float)FUN_07c888bc(&stack0x00000090,0);
                if ((*(long *)(unaff_x20 + 0x90) == 0) ||
                   (lVar9 = *(long *)(*(long *)(unaff_x20 + 0x90) + 0x28), lVar9 == 0))
                goto LAB_0696c50c;
                fVar17 = fVar18;
                fVar19 = fVar20;
                fVar14 = (float)FUN_07cac280(lVar9,0);
                fVar22 = fVar17;
                fVar24 = fVar19;
                fVar15 = (float)UnityEngine_UIElements_Length__Equals(&stack0x000000d0,0);
                if (DAT_08974d8c == '\0') {
                  FUN_03a8a718(puVar7);
                  DAT_08974d8c = '\x01';
                }
                if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                fVar17 = fVar17 - fVar22;
                fVar14 = fVar14 - fVar15;
                fVar19 = fVar19 - fVar24;
                fVar22 = SQRT(fVar19 * fVar19 + fVar14 * fVar14 + fVar17 * fVar17);
                if (fVar22 <= fVar4) {
                  if (DAT_08974d8f == '\0') {
                    FUN_03a8a718(puVar6);
                    DAT_08974d8f = '\x01';
                  }
                  pfVar10 = *(float **)(*(long *)puVar6 + 0xb8);
                  fVar14 = *pfVar10;
                  fVar24 = pfVar10[1];
                  fVar22 = pfVar10[2];
                }
                else {
                  fVar14 = fVar14 / fVar22;
                  fVar24 = fVar17 / fVar22;
                  fVar22 = fVar19 / fVar22;
                }
                fVar15 = (float)FUN_07d22938(&stack0x000000d0,0);
                fVar22 = fVar22 * fVar19;
                fVar17 = fVar22 + fVar14 * fVar15 + fVar24 * fVar17;
                fVar24 = (float)FUN_07d22938(&stack0x000000d0,0);
                if (fVar17 <= 0.0) {
                  fVar24 = -fVar24;
                  fVar22 = -fVar22;
                  fVar19 = -fVar19;
                }
                fVar17 = -fVar24;
                fVar15 = -fVar22;
                fVar14 = -fVar19;
                if (0.0 <= fVar18 || 0.0 <= fVar22) {
                  fVar17 = fVar24;
                  fVar15 = fVar22;
                  fVar14 = fVar19;
                }
                fVar22 = (float)FUN_07c88914(fVar17,&stack0x00000090,0);
                if (DAT_08974d8c == '\0') {
                  FUN_03a8a718(puVar7);
                  DAT_08974d8c = '\x01';
                }
                if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                fVar24 = SQRT(fVar14 * fVar14 + fVar22 * fVar22 + fVar15 * fVar15);
                if (fVar24 <= fVar4) {
                  if (DAT_08974d8f == '\0') {
                    FUN_03a8a718(puVar6);
                    DAT_08974d8f = '\x01';
                  }
                  uVar23 = **(undefined8 **)(*(long *)puVar6 + 0xb8);
                  fVar14 = *(float *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
                }
                else {
                  fVar14 = fVar14 / fVar24;
                  uVar23 = CONCAT44(fVar15 / fVar24,fVar22 / fVar24);
                }
                if (*(uint *)(unaff_x22 + 0x18) <= uVar12) {
LAB_0696c510:
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c8();
                }
                fVar18 = *(float *)(lVar1 + 0x24) - fVar18;
                fVar13 = *(float *)(lVar1 + 0x20) - fVar13;
                fVar20 = *(float *)(lVar1 + 0x28) - fVar20;
                fVar22 = (float)FUN_07c941e8(0);
                fVar13 = (fVar13 * fVar13 + fVar18 * fVar18 + fVar20 * fVar20) *
                         (*(float *)(unaff_x20 + 0x44) * (fVar22 + fVar22 + -1.0) + 1.0);
                if (fVar13 < fVar16 * fVar16) {
                  if (*(uint *)(unaff_x22 + 0x18) <= uVar12) goto LAB_0696c510;
                  bVar3 = true;
                  fVar16 = fVar16 - SQRT(fVar13);
                  *puVar2 = CONCAT44((float)((ulong)uVar23 >> 0x20) * fVar16 +
                                     (float)((ulong)*puVar2 >> 0x20),
                                     (float)uVar23 * fVar16 + (float)*puVar2);
                  *(float *)(puVar2 + 1) = fVar14 * fVar16 + *(float *)(puVar2 + 1);
                }
              }
              iVar11 = iVar11 + 1;
            } while (iVar8 != iVar11);
          }
          uVar12 = uVar12 + 1;
          if ((long)*(int *)(unaff_x22 + 0x18) <= (long)uVar12) {
            if (!bVar3) {
              return;
            }
            FUN_07c72230(unaff_x21);
            FUN_07c74ba0(unaff_x21,0);
            FUN_07c74c60(unaff_x21,0);
            FUN_07c74d20(unaff_x21,0);
            return;
          }
        } while( true );
      }
    }
  }
LAB_0696c50c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


