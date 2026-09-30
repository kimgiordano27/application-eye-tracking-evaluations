/*
FUNCTION_NAME: OVRManager$$get_tracker
ENTRY_POINT: 05d60c88
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_tracker(ulong param_1)

{
  undefined1 in_CY;
  float *pfVar1;
  float *pfVar2;
  long lVar3;
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
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s9;
  
code_r0x05d60c88:
  if (((bool)in_CY) || ((uint)param_1 <= (int)unaff_x23 - 1U)) {
LAB_05d60ddc:
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
  uVar6 = *(undefined8 *)(unaff_x28 + -2);
  uVar9 = *(undefined8 *)(unaff_x28 + -5);
  pfVar1 = unaff_x28 + -3;
  pfVar2 = unaff_x28;
  do {
    fVar4 = (float)uVar6 - (float)uVar9;
    fVar7 = (float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar9 >> 0x20);
    lVar3 = *unaff_x20;
    if (lVar3 == 0) {
LAB_05d60de0:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (((param_1 & 0xffffffff) <= unaff_x23) || (*(uint *)(lVar3 + 0x18) <= unaff_x23))
    goto LAB_05d60ddc;
    fVar11 = *unaff_x28;
    fVar12 = *pfVar2;
    fVar8 = *pfVar1;
    *(undefined8 *)(lVar3 + unaff_x26 + -0x1c) = *(undefined8 *)(unaff_x28 + -2);
    *(float *)(lVar3 + unaff_x26 + -0x14) = fVar11;
    lVar3 = *unaff_x20;
    if (lVar3 == 0) goto LAB_05d60de0;
    fVar12 = fVar12 - fVar8;
    fVar8 = fVar7;
    fVar10 = fVar12;
    uVar5 = FUN_06bddffc(0);
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) goto LAB_05d60ddc;
    lVar3 = lVar3 + unaff_x26;
    *(undefined4 *)(lVar3 + -0x10) = uVar5;
    *(float *)(lVar3 + -0xc) = fVar8;
    *(float *)(lVar3 + -8) = fVar10;
    *(float *)(lVar3 + -4) = fVar11;
    lVar3 = *unaff_x20;
    if (lVar3 == 0) goto LAB_05d60de0;
    if ((*(ulong *)(lVar3 + 0x18) & 0xffffffff) <= unaff_x23) goto LAB_05d60ddc;
    fVar8 = 0.0;
    if (unaff_x26 != 0x3c) {
      if ((uint)*(ulong *)(lVar3 + 0x18) <= (int)unaff_x23 - 1U) goto LAB_05d60ddc;
      fVar8 = *(float *)(lVar3 + unaff_x26 + -0x20);
      if (*(char *)(unaff_x22 + 0x828) == '\0') {
        thunk_FUN_032e1da0();
        *(undefined1 *)(unaff_x22 + 0x828) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      fVar8 = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar12 * fVar12) / unaff_s9 + fVar8;
    }
    *(float *)(lVar3 + unaff_x26) = fVar8;
    param_1 = *(ulong *)(unaff_x19 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    unaff_x26 = unaff_x26 + 0x20;
    unaff_x28 = unaff_x28 + 3;
    if ((long)(int)(uint)param_1 <= (long)unaff_x23) {
      return;
    }
    if (unaff_x26 != 0x3c) break;
    if ((uint)param_1 < 2) goto LAB_05d60ddc;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x2c);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
    pfVar1 = unaff_x25;
    pfVar2 = unaff_x24;
  } while( true );
  in_CY = (param_1 & 0xffffffff) <= unaff_x23;
  goto code_r0x05d60c88;
}


