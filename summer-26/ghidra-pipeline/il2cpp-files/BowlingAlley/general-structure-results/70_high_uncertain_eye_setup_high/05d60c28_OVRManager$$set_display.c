/*
FUNCTION_NAME: OVRManager$$set_display
ENTRY_POINT: 05d60c28
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


void OVRManager__set_display(ulong param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar4;
  undefined1 unaff_w24;
  ulong unaff_x25;
  long lVar5;
  float *pfVar6;
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
    unaff_s9 = unaff_s9 + SQRT(param_2);
    if ((long)(int)param_1 <= (long)(unaff_x25 + 2)) break;
    if ((param_1 & 0xffffffff) <= unaff_x25 + 2) goto LAB_05d60ddc;
    unaff_x25 = unaff_x25 + 1;
    if ((param_1 & 0xffffffff) <= unaff_x25) goto LAB_05d60ddc;
    uVar9 = *(undefined8 *)((long)unaff_x23 + 0xc);
    fVar7 = *(float *)(unaff_x23 + 1);
    fVar10 = *(float *)((long)unaff_x23 + -4);
    uVar12 = *unaff_x23;
    if (*(char *)(unaff_x22 + 0x828) == '\0') {
      thunk_FUN_032e1da0();
      *(undefined1 *)(unaff_x22 + 0x828) = unaff_w24;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    fVar7 = fVar7 - fVar10;
    fVar10 = (float)uVar9 - (float)uVar12;
    fVar11 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar12 >> 0x20);
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
    param_2 = fVar7 * fVar7 + fVar10 * fVar10 + fVar11 * fVar11;
    unaff_x23 = (undefined8 *)((long)unaff_x23 + 0xc);
  }
                    /* try { // try from 05d60c44 to 05e60d5f has its CatchHandler @ 05d60c44
                       catch() { ... } // from try @ 05d60c44 with catch @ 05d60c44
                       catch() { ... } // from try @ 05d610cc with catch @ 05d60c44
                       catch() { ... } // from try @ 05d61140 with catch @ 05d60c44 */
  if (0 < (int)param_1) {
    uVar4 = 0;
    lVar5 = 0x3c;
    pfVar6 = (float *)(unaff_x19 + 0x28);
    do {
      if (lVar5 == 0x3c) {
        if ((uint)param_1 < 2) goto LAB_05d60ddc;
        uVar9 = *(undefined8 *)(unaff_x19 + 0x2c);
        uVar12 = *(undefined8 *)(unaff_x19 + 0x20);
        pfVar1 = (float *)(unaff_x19 + 0x28);
        pfVar2 = (float *)(unaff_x19 + 0x34);
      }
      else {
        if (((param_1 & 0xffffffff) <= uVar4) || ((uint)param_1 <= (int)uVar4 - 1U)) {
LAB_05d60ddc:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        uVar9 = *(undefined8 *)(pfVar6 + -2);
        uVar12 = *(undefined8 *)(pfVar6 + -5);
        pfVar1 = pfVar6 + -3;
        pfVar2 = pfVar6;
      }
      fVar7 = (float)uVar9 - (float)uVar12;
      fVar10 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar12 >> 0x20);
      lVar3 = *unaff_x20;
      if (lVar3 == 0) {
LAB_05d60de0:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (((param_1 & 0xffffffff) <= uVar4) || (*(uint *)(lVar3 + 0x18) <= uVar4))
      goto LAB_05d60ddc;
      fVar14 = *pfVar6;
      fVar15 = *pfVar2;
      fVar11 = *pfVar1;
      *(undefined8 *)(lVar3 + lVar5 + -0x1c) = *(undefined8 *)(pfVar6 + -2);
      *(float *)(lVar3 + lVar5 + -0x14) = fVar14;
      lVar3 = *unaff_x20;
      if (lVar3 == 0) goto LAB_05d60de0;
      fVar15 = fVar15 - fVar11;
      fVar11 = fVar10;
      fVar13 = fVar15;
      uVar8 = FUN_06bddffc(0);
      if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_05d60ddc;
      lVar3 = lVar3 + lVar5;
      *(undefined4 *)(lVar3 + -0x10) = uVar8;
      *(float *)(lVar3 + -0xc) = fVar11;
      *(float *)(lVar3 + -8) = fVar13;
      *(float *)(lVar3 + -4) = fVar14;
      lVar3 = *unaff_x20;
      if (lVar3 == 0) goto LAB_05d60de0;
      if ((*(ulong *)(lVar3 + 0x18) & 0xffffffff) <= uVar4) goto LAB_05d60ddc;
      fVar11 = 0.0;
      if (lVar5 != 0x3c) {
        if ((uint)*(ulong *)(lVar3 + 0x18) <= (int)uVar4 - 1U) goto LAB_05d60ddc;
        fVar11 = *(float *)(lVar3 + lVar5 + -0x20);
        if (*(char *)(unaff_x22 + 0x828) == '\0') {
          thunk_FUN_032e1da0();
          *(undefined1 *)(unaff_x22 + 0x828) = 1;
        }
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        fVar11 = SQRT(fVar7 * fVar7 + fVar10 * fVar10 + fVar15 * fVar15) / unaff_s9 + fVar11;
      }
      *(float *)(lVar3 + lVar5) = fVar11;
      param_1 = *(ulong *)(unaff_x19 + 0x18);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x20;
      pfVar6 = pfVar6 + 3;
    } while ((long)uVar4 < (long)(int)param_1);
  }
  return;
}


