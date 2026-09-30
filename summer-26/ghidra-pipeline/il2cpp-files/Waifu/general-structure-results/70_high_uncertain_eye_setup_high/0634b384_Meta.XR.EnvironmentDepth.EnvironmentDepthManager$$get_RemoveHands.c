/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$get_RemoveHands
ENTRY_POINT: 0634b384
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_RemoveHands(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  char in_NG;
  bool bVar4;
  bool bVar5;
  char in_OV;
  bool bVar6;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  ulong unaff_x24;
  uint unaff_w25;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 unaff_d9;
  undefined4 unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  do {
    if (in_NG != in_OV || ((unaff_w25 ^ 0xffffffff) & 1) != 0) {
      if (0 < unaff_w22) {
        fVar9 = unaff_s11 / unaff_s12;
        bVar4 = false;
        bVar5 = false;
        bVar6 = false;
        if ((uint)ABS(fVar9) < 0x7f800001) {
          bVar4 = false;
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar9)) {
            bVar4 = fVar9 < 1.0;
            bVar5 = fVar9 == 1.0;
            bVar6 = false;
          }
        }
        fVar11 = *(float *)(*(long *)(unaff_x19 + 0xe8) + unaff_x21 * 4);
        fVar10 = 1.0;
        if (bVar5 || bVar4 != bVar6) {
          fVar10 = fVar9;
        }
        bVar4 = true;
        if (((uint)ABS(fVar10) < 0x7f800001) && (bVar4 = false, !NAN(fVar10))) {
          bVar4 = fVar10 < 0.0;
        }
        fVar9 = 1.0;
        if (!bVar4) {
          fVar9 = 1.0 - fVar10;
        }
        bVar4 = false;
        bVar5 = false;
        bVar6 = false;
        if ((uint)ABS(fVar11) < 0x7f800001) {
          bVar4 = false;
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar9) && !NAN(fVar11)) {
            bVar4 = fVar9 < fVar11;
            bVar5 = fVar9 == fVar11;
            bVar6 = false;
          }
        }
        if (bVar5 || bVar4 != bVar6) {
          fVar9 = fVar11;
        }
        *(float *)(*(long *)(unaff_x19 + 0xe8) + unaff_x21 * 4) = fVar9;
      }
      *(int *)(*(long *)(unaff_x19 + 0xf8) + unaff_x21 * 4) = unaff_w22;
      puVar1 = (undefined8 *)(*(long *)(unaff_x19 + 0x108) + unaff_x21 * 0xc);
      *puVar1 = unaff_d9;
      *(undefined4 *)(puVar1 + 1) = unaff_s10;
      puVar1 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + unaff_x21 * 0xc);
      *(undefined4 *)(puVar1 + 1) = in_stack_00000018;
      *puVar1 = in_stack_00000010;
      return;
    }
    unaff_w25 = 0;
    iVar7 = *(int *)(*(long *)(unaff_x19 + 0xd8) + (ulong)unaff_w23 * (unaff_x24 & 0xffffffff) +
                    0x1c);
    if (0 < iVar7) {
      iVar8 = *(int *)(*(long *)(unaff_x19 + 0xd8) + unaff_w23 * unaff_x24 + 0x14);
      do {
        iVar3 = *(int *)(*(long *)(unaff_x19 + 0xb8) + (long)iVar8 * 4);
        uVar2 = *(uint *)(*(long *)(unaff_x19 + 8) + (long)iVar3 * 4);
        if ((uVar2 & 1) != 0) {
          if ((uVar2 >> 5 & 1) == 0) {
            if ((((uVar2 >> 6 & 1) == 0) && ((uVar2 >> 7 & 1) == 0)) && ((uVar2 >> 8 & 1) == 0)) {
              if ((uVar2 >> 9 & 1) != 0) goto LAB_0634b35c;
              fVar9 = (float)FUN_0634bbbc();
            }
            else {
              fVar9 = (float)FUN_0634b60c();
            }
          }
          else {
            fVar9 = (float)FUN_0634b460();
          }
          if ((fVar9 < unaff_s11) && (fVar9 <= unaff_s12)) {
            unaff_d9 = in_stack_00000000;
            unaff_s10 = in_stack_00000008;
            unaff_w22 = iVar3;
            unaff_s11 = fVar9;
          }
        }
LAB_0634b35c:
        iVar7 = iVar7 + -1;
        iVar8 = iVar8 + 1;
      } while (iVar7 != 0);
    }
    in_OV = SBORROW4(unaff_w23,1);
    in_NG = (int)(unaff_w23 - 1) < 0;
  } while( true );
}


