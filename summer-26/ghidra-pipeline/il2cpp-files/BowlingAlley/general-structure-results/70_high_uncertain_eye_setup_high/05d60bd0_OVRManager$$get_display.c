/*
FUNCTION_NAME: OVRManager$$get_display
ENTRY_POINT: 05d60bd0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_display(void)

{
  uint uVar1;
  undefined1 in_CY;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar6;
  undefined1 unaff_w24;
  ulong unaff_x25;
  long lVar7;
  float *pfVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float unaff_s9;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  
  while (!(bool)in_CY) {
    uVar14 = *unaff_x23;
    fVar15 = *(float *)((long)unaff_x23 + -4);
    fVar16 = *(float *)(unaff_x23 + -2);
    uVar17 = *(undefined8 *)((long)unaff_x23 + -0xc);
    if (*(char *)(unaff_x22 + 0x828) == '\0') {
      thunk_FUN_032e1da0();
      *(undefined1 *)(unaff_x22 + 0x828) = unaff_w24;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    fVar15 = fVar15 - fVar16;
    fVar16 = (float)uVar14 - (float)uVar17;
    fVar10 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar17 >> 0x20);
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    uVar2 = (ulong)uVar1;
    unaff_s9 = unaff_s9 + SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar10 * fVar10);
    unaff_x23 = (undefined8 *)((long)unaff_x23 + 0xc);
    if ((long)(int)uVar1 <= (long)(unaff_x25 + 2)) {
      if ((int)uVar1 < 1) {
        return;
      }
      uVar6 = 0;
      lVar7 = 0x3c;
      pfVar8 = (float *)(unaff_x19 + 0x28);
      goto LAB_05d60c60;
    }
    if (uVar2 <= unaff_x25 + 2) break;
    unaff_x25 = unaff_x25 + 1;
    in_CY = uVar2 <= unaff_x25;
  }
LAB_05d60ddc:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
LAB_05d60c60:
  if (lVar7 == 0x3c) {
    if ((uint)uVar2 < 2) goto LAB_05d60ddc;
    uVar14 = *(undefined8 *)(unaff_x19 + 0x2c);
    uVar17 = *(undefined8 *)(unaff_x19 + 0x20);
    pfVar3 = (float *)(unaff_x19 + 0x28);
    pfVar4 = (float *)(unaff_x19 + 0x34);
  }
  else {
    if (((uVar2 & 0xffffffff) <= uVar6) || ((uint)uVar2 <= (int)uVar6 - 1U)) goto LAB_05d60ddc;
    uVar14 = *(undefined8 *)(pfVar8 + -2);
    uVar17 = *(undefined8 *)(pfVar8 + -5);
    pfVar3 = pfVar8 + -3;
    pfVar4 = pfVar8;
  }
  fVar15 = (float)uVar14 - (float)uVar17;
  fVar16 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar17 >> 0x20);
  lVar5 = *unaff_x20;
  if (lVar5 == 0) {
LAB_05d60de0:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (((uVar2 & 0xffffffff) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= uVar6)) goto LAB_05d60ddc;
  fVar12 = *pfVar8;
  fVar13 = *pfVar4;
  fVar10 = *pfVar3;
  *(undefined8 *)(lVar5 + lVar7 + -0x1c) = *(undefined8 *)(pfVar8 + -2);
  *(float *)(lVar5 + lVar7 + -0x14) = fVar12;
  lVar5 = *unaff_x20;
  if (lVar5 == 0) goto LAB_05d60de0;
  fVar13 = fVar13 - fVar10;
  fVar10 = fVar16;
  fVar11 = fVar13;
  uVar9 = FUN_06bddffc(0);
  if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_05d60ddc;
  lVar5 = lVar5 + lVar7;
  *(undefined4 *)(lVar5 + -0x10) = uVar9;
  *(float *)(lVar5 + -0xc) = fVar10;
  *(float *)(lVar5 + -8) = fVar11;
  *(float *)(lVar5 + -4) = fVar12;
  lVar5 = *unaff_x20;
  if (lVar5 == 0) goto LAB_05d60de0;
  if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) <= uVar6) goto LAB_05d60ddc;
  fVar10 = 0.0;
  if (lVar7 != 0x3c) {
    if ((uint)*(ulong *)(lVar5 + 0x18) <= (int)uVar6 - 1U) goto LAB_05d60ddc;
    fVar10 = *(float *)(lVar5 + lVar7 + -0x20);
    if (*(char *)(unaff_x22 + 0x828) == '\0') {
      thunk_FUN_032e1da0();
      *(undefined1 *)(unaff_x22 + 0x828) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    fVar10 = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar13 * fVar13) / unaff_s9 + fVar10;
  }
  *(float *)(lVar5 + lVar7) = fVar10;
  uVar2 = *(ulong *)(unaff_x19 + 0x18);
  uVar6 = uVar6 + 1;
  lVar7 = lVar7 + 0x20;
  pfVar8 = pfVar8 + 3;
  if ((long)(int)uVar2 <= (long)uVar6) {
    return;
  }
  goto LAB_05d60c60;
}


