/*
FUNCTION_NAME: OVRManager$$set_boundary
ENTRY_POINT: 05d60d98
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


void OVRManager__set_boundary(void)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  float *unaff_x24;
  float *unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  float *unaff_x28;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s9;
  
  while( true ) {
    uVar3 = *(ulong *)(unaff_x19 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    unaff_x26 = unaff_x26 + 0x20;
    pfVar1 = unaff_x28 + 3;
    uVar2 = (uint)uVar3;
                    /* catch() { ... } // from try @ 05d60d60 with catch @ 05d60da8 */
    if ((long)(int)uVar2 <= (long)unaff_x23) {
                    /* try { // try from 05d60dc8 to 05e60de3 has its CatchHandler @ 05d61124 */
      return;
    }
    if (unaff_x26 == 0x3c) {
      if (uVar2 < 2) goto LAB_05d60ddc;
      uVar9 = *(undefined8 *)(unaff_x19 + 0x2c);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x20);
      pfVar4 = unaff_x25;
      pfVar5 = unaff_x24;
    }
    else {
      if (((uVar3 & 0xffffffff) <= unaff_x23) || (uVar2 <= (int)unaff_x23 - 1U)) goto LAB_05d60ddc;
      uVar9 = *(undefined8 *)(unaff_x28 + 1);
      uVar12 = *(undefined8 *)(unaff_x28 + -2);
      pfVar4 = unaff_x28;
      pfVar5 = pfVar1;
    }
    fVar7 = (float)uVar9 - (float)uVar12;
    fVar10 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar12 >> 0x20);
    lVar6 = *unaff_x20;
    if (lVar6 == 0) break;
    if (((uVar3 & 0xffffffff) <= unaff_x23) || (*(uint *)(lVar6 + 0x18) <= unaff_x23)) {
LAB_05d60ddc:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    fVar14 = *pfVar1;
    fVar15 = *pfVar5;
    fVar11 = *pfVar4;
    *(undefined8 *)(lVar6 + unaff_x26 + -0x1c) = *(undefined8 *)(unaff_x28 + 1);
    *(float *)(lVar6 + unaff_x26 + -0x14) = fVar14;
    lVar6 = *unaff_x20;
    if (lVar6 == 0) break;
    fVar15 = fVar15 - fVar11;
    fVar11 = fVar10;
    fVar13 = fVar15;
    uVar8 = FUN_06bddffc(0);
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_05d60ddc;
    lVar6 = lVar6 + unaff_x26;
    *(undefined4 *)(lVar6 + -0x10) = uVar8;
    *(float *)(lVar6 + -0xc) = fVar11;
    *(float *)(lVar6 + -8) = fVar13;
    *(float *)(lVar6 + -4) = fVar14;
    lVar6 = *unaff_x20;
    if (lVar6 == 0) break;
    if ((*(ulong *)(lVar6 + 0x18) & 0xffffffff) <= unaff_x23) goto LAB_05d60ddc;
    fVar11 = 0.0;
    if (unaff_x26 != 0x3c) {
      if ((uint)*(ulong *)(lVar6 + 0x18) <= (int)unaff_x23 - 1U) goto LAB_05d60ddc;
      fVar11 = *(float *)(lVar6 + unaff_x26 + -0x20);
      if (*(char *)(unaff_x22 + 0x828) == '\0') {
        thunk_FUN_032e1da0();
        *(undefined1 *)(unaff_x22 + 0x828) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      fVar11 = SQRT(fVar7 * fVar7 + fVar10 * fVar10 + fVar15 * fVar15) / unaff_s9 + fVar11;
    }
    *(float *)(lVar6 + unaff_x26) = fVar11;
    unaff_x28 = pfVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


