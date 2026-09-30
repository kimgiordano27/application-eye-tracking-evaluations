/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetTranslation
ENTRY_POINT: 05304a20
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetTranslation
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  ulong in_x9;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong uVar4;
  ulong unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float fVar11;
  float unaff_s9;
  float fVar12;
  float unaff_s10;
  float fVar13;
  float unaff_s11;
  float unaff_s15;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000050;
  float in_stack_00000070;
  ulong in_stack_00000080;
  
  while (fVar13 = param_4, unaff_x25 < in_x9) {
    fVar12 = (float)in_stack_00000080;
    *(ulong *)(param_1 + unaff_x24 + 0x20) =
         CONCAT44((float)((ulong)in_stack_00000040 >> 0x20) * fVar12,
                  (float)in_stack_00000040 * in_stack_00000070);
    *(float *)(param_1 + unaff_x24 + 0x28) = in_stack_00000038._4_4_ * fVar13;
    lVar5 = *(long *)(unaff_x19 + 0x68);
    if (lVar5 == 0) goto LAB_05304c5c;
    if (*(char *)(unaff_x26 + 0x2bf) == '\0') {
      FUN_02f08768();
      *(undefined1 *)(unaff_x26 + 0x2bf) = unaff_w27;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar9 = fVar13 - unaff_s11;
    fVar6 = in_stack_00000070 - unaff_s8;
    fVar8 = fVar12 - unaff_s9;
    fVar10 = fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8;
    fVar11 = SQRT(fVar10);
    if (fVar11 <= unaff_s10) {
      if (*(char *)(unaff_x28 + 0x2c1) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x28 + 0x2c1) = unaff_w27;
      }
      pfVar2 = *(float **)(*unaff_x22 + 0xb8);
      fVar6 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
    }
    else {
      fVar6 = fVar6 / fVar11;
      fVar8 = fVar8 / fVar11;
      fVar9 = fVar9 / fVar11;
    }
    uVar7 = FUN_060df954(fVar6,0);
    if (*(uint *)(lVar5 + 0x18) <= unaff_x25) break;
    lVar5 = lVar5 + unaff_x24;
    *(undefined4 *)(lVar5 + 0x2c) = uVar7;
    *(float *)(lVar5 + 0x30) = fVar8;
    *(float *)(lVar5 + 0x34) = fVar9;
    *(float *)(lVar5 + 0x38) = fVar10;
    if (unaff_x25 != 0) {
      if (*(char *)(unaff_x23 + 0x2c7) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x23 + 0x2c7) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      unaff_s15 = unaff_s15 + fVar11;
    }
    unaff_x25 = unaff_x25 + 1;
    unaff_x24 = unaff_x24 + 0x20;
    if ((long)*(int *)(unaff_x19 + 0x50) <= (long)unaff_x25) {
      if (*(int *)(unaff_x19 + 0x50) < 2) {
        return;
      }
      lVar3 = *(long *)(unaff_x19 + 0x68);
      lVar5 = 0x5c;
      uVar4 = 1;
      goto LAB_05304b6c;
    }
    param_4 = (float)unaff_x20[2];
    in_stack_00000080 = (ulong)(uint)unaff_x20[1];
    fVar6 = (float)FUN_05304df8(*unaff_x20,in_stack_00000080,param_4,in_stack_00000050);
    param_1 = *(long *)(unaff_x19 + 0x68);
    if (param_1 == 0) goto LAB_05304c5c;
    unaff_s11 = fVar13;
    unaff_s8 = in_stack_00000070;
    unaff_s9 = fVar12;
    in_stack_00000070 = fVar6;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  }
LAB_05304c58:
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
LAB_05304b6c:
  if (lVar3 == 0) {
LAB_05304c5c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar4))
  goto LAB_05304c58;
  lVar3 = lVar3 + lVar5;
  fVar12 = *(float *)(lVar3 + -0x38);
  fVar6 = *(float *)(lVar3 + -0x34);
  fVar13 = *(float *)(lVar3 + -0x3c);
  fVar8 = *(float *)(lVar3 + -0x1c);
  fVar9 = *(float *)(lVar3 + -0x18);
  fVar10 = *(float *)(lVar3 + -0x14);
  if (*(char *)(unaff_x23 + 0x2c7) == '\0') {
    FUN_02f08768();
    *(undefined1 *)(unaff_x23 + 0x2c7) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar3 = *(long *)(unaff_x19 + 0x68);
  if (lVar3 == 0) goto LAB_05304c5c;
  if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar4))
  goto LAB_05304c58;
  fVar13 = fVar13 - fVar8;
  fVar12 = fVar12 - fVar9;
  pfVar2 = (float *)(lVar3 + lVar5);
  fVar6 = fVar6 - fVar10;
  iVar1 = *(int *)(unaff_x19 + 0x50);
  uVar4 = uVar4 + 1;
  lVar5 = lVar5 + 0x20;
  *pfVar2 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar6 * fVar6) / unaff_s15 + pfVar2[-8];
  if ((long)iVar1 <= (long)uVar4) {
    return;
  }
  goto LAB_05304b6c;
}


