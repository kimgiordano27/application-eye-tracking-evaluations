/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughStyle
ENTRY_POINT: 074767a8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetInsightPassthroughStyle(void)

{
  uint uVar1;
  uint in_w8;
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
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  undefined8 uVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 unaff_d8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined8 unaff_d12;
  
  while( true ) {
    if (in_w8 == 0) {
      FUN_03d2d2b0();
      *(undefined1 *)(unaff_x22 + 0x2cc) = unaff_w24;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    fVar11 = (float)unaff_d8 - (float)unaff_d12;
    fVar14 = (float)((ulong)unaff_d8 >> 0x20) - (float)((ulong)unaff_d12 >> 0x20);
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    uVar2 = (ulong)uVar1;
    unaff_s9 = unaff_s9 +
               SQRT((unaff_s10 - unaff_s11) * (unaff_s10 - unaff_s11) + fVar11 * fVar11 +
                    fVar14 * fVar14);
    if ((long)(int)uVar1 <= (long)(unaff_x25 + 2)) {
      if ((int)uVar1 < 1) {
        return;
      }
      uVar6 = 0;
      lVar7 = 0x3c;
      pfVar8 = (float *)(unaff_x19 + 0x28);
      goto LAB_07476820;
    }
    if ((uVar2 <= unaff_x25 + 2) || (unaff_x25 = unaff_x25 + 1, uVar2 <= unaff_x25)) break;
    unaff_d8 = *(undefined8 *)((long)unaff_x23 + 0xc);
    unaff_s10 = *(float *)(unaff_x23 + 1);
    unaff_s11 = *(float *)((long)unaff_x23 + -4);
    in_w8 = (uint)*(byte *)(unaff_x22 + 0x2cc);
    unaff_d12 = *unaff_x23;
    unaff_x23 = (undefined8 *)((long)unaff_x23 + 0xc);
  }
LAB_0747699c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
LAB_07476820:
  if (lVar7 == 0x3c) {
    if ((uint)uVar2 < 2) goto LAB_0747699c;
    uVar10 = *(undefined8 *)(unaff_x19 + 0x2c);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x20);
    pfVar3 = (float *)(unaff_x19 + 0x28);
    pfVar4 = (float *)(unaff_x19 + 0x34);
  }
  else {
    if (((uVar2 & 0xffffffff) <= uVar6) || ((uint)uVar2 <= (int)uVar6 - 1U)) goto LAB_0747699c;
    uVar10 = *(undefined8 *)(pfVar8 + -2);
    uVar13 = *(undefined8 *)(pfVar8 + -5);
    pfVar3 = pfVar8 + -3;
    pfVar4 = pfVar8;
  }
  fVar11 = (float)uVar10 - (float)uVar13;
  fVar14 = (float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar13 >> 0x20);
  lVar5 = *unaff_x20;
  if (lVar5 == 0) {
LAB_074769a0:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (((uVar2 & 0xffffffff) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= uVar6)) goto LAB_0747699c;
  fVar16 = *pfVar8;
  fVar17 = *pfVar4;
  fVar12 = *pfVar3;
  *(undefined8 *)(lVar5 + lVar7 + -0x1c) = *(undefined8 *)(pfVar8 + -2);
  *(float *)(lVar5 + lVar7 + -0x14) = fVar16;
  lVar5 = *unaff_x20;
  if (lVar5 == 0) goto LAB_074769a0;
  fVar17 = fVar17 - fVar12;
  fVar12 = fVar14;
  fVar15 = fVar17;
  uVar9 = FUN_08a44b2c(0);
  if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_0747699c;
  lVar5 = lVar5 + lVar7;
  *(undefined4 *)(lVar5 + -0x10) = uVar9;
  *(float *)(lVar5 + -0xc) = fVar12;
  *(float *)(lVar5 + -8) = fVar15;
  *(float *)(lVar5 + -4) = fVar16;
  lVar5 = *unaff_x20;
  if (lVar5 == 0) goto LAB_074769a0;
  if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) <= uVar6) goto LAB_0747699c;
  fVar12 = 0.0;
  if (lVar7 != 0x3c) {
    if ((uint)*(ulong *)(lVar5 + 0x18) <= (int)uVar6 - 1U) goto LAB_0747699c;
    fVar12 = *(float *)(lVar5 + lVar7 + -0x20);
    if (*(char *)(unaff_x22 + 0x2cc) == '\0') {
      FUN_03d2d2b0();
      *(undefined1 *)(unaff_x22 + 0x2cc) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    fVar12 = SQRT(fVar11 * fVar11 + fVar14 * fVar14 + fVar17 * fVar17) / unaff_s9 + fVar12;
  }
  *(float *)(lVar5 + lVar7) = fVar12;
  uVar2 = *(ulong *)(unaff_x19 + 0x18);
  uVar6 = uVar6 + 1;
  lVar7 = lVar7 + 0x20;
  pfVar8 = pfVar8 + 3;
  if ((long)(int)uVar2 <= (long)uVar6) {
    return;
  }
  goto LAB_07476820;
}


