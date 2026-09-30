/*
FUNCTION_NAME: OVRManager$$get_boundary
ENTRY_POINT: 05d60d40
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


void OVRManager__get_boundary(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  uint in_w9;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
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
  float *pfVar6;
  long unaff_x29;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float fVar13;
  undefined8 in_stack_00000000;
  
  while (in_w9 < (uint)param_1) {
    fVar13 = *(float *)(unaff_x29 + unaff_x26 + -0x20);
    if (*(char *)(unaff_x22 + 0x828) == '\0') {
      thunk_FUN_032e1da0();
                    /* try { // try from 05d60d60 to 05e60d67 has its CatchHandler @ 05d60da8 */
      *(undefined1 *)(unaff_x22 + 0x828) = unaff_w27;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    fVar9 = (float)((ulong)in_stack_00000000 >> 0x20);
    fVar13 = SQRT((float)in_stack_00000000 * (float)in_stack_00000000 + fVar9 * fVar9 +
                  unaff_s8 * unaff_s8) / unaff_s9 + fVar13;
    pfVar6 = unaff_x28;
    do {
      *(float *)(unaff_x29 + unaff_x26) = fVar13;
      uVar2 = *(ulong *)(unaff_x19 + 0x18);
      unaff_x23 = unaff_x23 + 1;
      unaff_x26 = unaff_x26 + 0x20;
      unaff_x28 = pfVar6 + 3;
      uVar1 = (uint)uVar2;
      if ((long)(int)uVar1 <= (long)unaff_x23) {
        return;
      }
      if (unaff_x26 == 0x3c) {
        if (uVar1 < 2) goto LAB_05d60ddc;
        uVar8 = *(undefined8 *)(unaff_x19 + 0x2c);
        uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
        pfVar3 = unaff_x25;
        pfVar4 = unaff_x24;
      }
      else {
        if (((uVar2 & 0xffffffff) <= unaff_x23) || (uVar1 <= (int)unaff_x23 - 1U))
        goto LAB_05d60ddc;
        uVar8 = *(undefined8 *)(pfVar6 + 1);
        uVar10 = *(undefined8 *)(pfVar6 + -2);
        pfVar3 = pfVar6;
        pfVar4 = unaff_x28;
      }
      fVar13 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
      in_stack_00000000 = CONCAT44(fVar13,(float)uVar8 - (float)uVar10);
      lVar5 = *unaff_x20;
      if (lVar5 == 0) {
LAB_05d60de0:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (((uVar2 & 0xffffffff) <= unaff_x23) || (*(uint *)(lVar5 + 0x18) <= unaff_x23))
      goto LAB_05d60ddc;
      fVar11 = *unaff_x28;
      fVar12 = *pfVar4;
      fVar9 = *pfVar3;
      *(undefined8 *)(lVar5 + unaff_x26 + -0x1c) = *(undefined8 *)(pfVar6 + 1);
      *(float *)(lVar5 + unaff_x26 + -0x14) = fVar11;
      lVar5 = *unaff_x20;
      if (lVar5 == 0) goto LAB_05d60de0;
      unaff_s8 = fVar12 - fVar9;
      fVar9 = unaff_s8;
      uVar7 = FUN_06bddffc(0);
      if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_05d60ddc;
      lVar5 = lVar5 + unaff_x26;
      *(undefined4 *)(lVar5 + -0x10) = uVar7;
      *(float *)(lVar5 + -0xc) = fVar13;
      *(float *)(lVar5 + -8) = fVar9;
      *(float *)(lVar5 + -4) = fVar11;
      unaff_x29 = *unaff_x20;
      if (unaff_x29 == 0) goto LAB_05d60de0;
      param_1 = *(ulong *)(unaff_x29 + 0x18);
      if ((param_1 & 0xffffffff) <= unaff_x23) goto LAB_05d60ddc;
      fVar13 = 0.0;
      pfVar6 = unaff_x28;
    } while (unaff_x26 == 0x3c);
    in_w9 = (int)unaff_x23 - 1;
  }
LAB_05d60ddc:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


