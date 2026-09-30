/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetTranslation
ENTRY_POINT: 05304a14
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetTranslation
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
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
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float fVar12;
  float unaff_s9;
  float unaff_s10;
  float fVar13;
  float unaff_s11;
  float unaff_s15;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  ulong uStack0000000000000080;
  undefined8 uStack0000000000000088;
  
  uVar9 = param_3._8_8_;
  uVar4 = param_3._0_8_;
  while (fVar13 = param_4, uStack0000000000000080 = uVar4, uStack0000000000000088 = uVar9,
        param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= unaff_x25) goto LAB_05304c58;
    *(ulong *)(param_1 + unaff_x24 + 0x20) =
         CONCAT44((float)((ulong)in_stack_00000040 >> 0x20) * (float)uVar4,
                  (float)in_stack_00000040 * param_2._0_4_);
    *(float *)(param_1 + unaff_x24 + 0x28) = in_stack_00000038._4_4_ * fVar13;
    lVar5 = *(long *)(unaff_x19 + 0x68);
    if (lVar5 == 0) break;
    if (*(char *)(unaff_x26 + 0x2bf) == '\0') {
      _uStack0000000000000070 = param_2;
      FUN_02f08768();
      *(undefined1 *)(unaff_x26 + 0x2bf) = unaff_w27;
      param_2 = _uStack0000000000000070;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      _uStack0000000000000070 = param_2;
      thunk_FUN_02f6670c();
      param_2 = _uStack0000000000000070;
    }
    fVar10 = fVar13 - unaff_s11;
    fVar6 = param_2._0_4_ - unaff_s8;
    fVar8 = (float)uStack0000000000000080 - unaff_s9;
    fVar11 = fVar10 * fVar10 + fVar6 * fVar6 + fVar8 * fVar8;
    fVar12 = SQRT(fVar11);
    if (fVar12 <= unaff_s10) {
      if (*(char *)(unaff_x28 + 0x2c1) == '\0') {
        _uStack0000000000000070 = param_2;
        FUN_02f08768();
        *(undefined1 *)(unaff_x28 + 0x2c1) = unaff_w27;
        param_2 = _uStack0000000000000070;
      }
      pfVar2 = *(float **)(*unaff_x22 + 0xb8);
      fVar6 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar10 = pfVar2[2];
    }
    else {
      fVar6 = fVar6 / fVar12;
      fVar8 = fVar8 / fVar12;
      fVar10 = fVar10 / fVar12;
    }
    _uStack0000000000000070 = param_2;
    uVar7 = FUN_060df954(fVar6,0);
    param_2 = _uStack0000000000000070;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x25) goto LAB_05304c58;
    lVar5 = lVar5 + unaff_x24;
    *(undefined4 *)(lVar5 + 0x2c) = uVar7;
    *(float *)(lVar5 + 0x30) = fVar8;
    *(float *)(lVar5 + 0x34) = fVar10;
    *(float *)(lVar5 + 0x38) = fVar11;
    if (unaff_x25 != 0) {
      if (*(char *)(unaff_x23 + 0x2c7) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x23 + 0x2c7) = unaff_w27;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      unaff_s15 = unaff_s15 + fVar12;
    }
    unaff_x25 = unaff_x25 + 1;
    unaff_x24 = unaff_x24 + 0x20;
    unaff_s8 = (float)uStack0000000000000070;
    unaff_s9 = (float)uStack0000000000000080;
    if ((long)*(int *)(unaff_x19 + 0x50) <= (long)unaff_x25) {
      if (*(int *)(unaff_x19 + 0x50) < 2) {
        return;
      }
      lVar3 = *(long *)(unaff_x19 + 0x68);
      lVar5 = 0x5c;
      uVar4 = 1;
      param_2 = _uStack0000000000000070;
      goto LAB_05304b6c;
    }
    param_4 = (float)unaff_x20[2];
    uVar4 = (ulong)(uint)unaff_x20[1];
    uVar9 = 0;
    param_2 = FUN_05304df8(*unaff_x20,uVar4,param_4,in_stack_00000050);
    unaff_s11 = fVar13;
    param_1 = *(long *)(unaff_x19 + 0x68);
  }
LAB_05304c5c:
  _uStack0000000000000070 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
LAB_05304b6c:
  if (lVar3 == 0) goto LAB_05304c5c;
  if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar4)) {
LAB_05304c58:
    _uStack0000000000000070 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  lVar3 = lVar3 + lVar5;
  fVar6 = *(float *)(lVar3 + -0x38);
  fVar8 = *(float *)(lVar3 + -0x34);
  fVar13 = *(float *)(lVar3 + -0x3c);
  fVar10 = *(float *)(lVar3 + -0x1c);
  fVar11 = *(float *)(lVar3 + -0x18);
  fVar12 = *(float *)(lVar3 + -0x14);
  if (*(char *)(unaff_x23 + 0x2c7) == '\0') {
    _uStack0000000000000070 = param_2;
    FUN_02f08768();
    *(undefined1 *)(unaff_x23 + 0x2c7) = 1;
    param_2 = _uStack0000000000000070;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    _uStack0000000000000070 = param_2;
    thunk_FUN_02f6670c();
    param_2 = _uStack0000000000000070;
  }
  lVar3 = *(long *)(unaff_x19 + 0x68);
  if (lVar3 == 0) goto LAB_05304c5c;
  if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar4))
  goto LAB_05304c58;
  fVar13 = fVar13 - fVar10;
  fVar6 = fVar6 - fVar11;
  pfVar2 = (float *)(lVar3 + lVar5);
  fVar8 = fVar8 - fVar12;
  iVar1 = *(int *)(unaff_x19 + 0x50);
  uVar4 = uVar4 + 1;
  lVar5 = lVar5 + 0x20;
  *pfVar2 = SQRT(fVar13 * fVar13 + fVar6 * fVar6 + fVar8 * fVar8) / unaff_s15 + pfVar2[-8];
  if ((long)iVar1 <= (long)uVar4) {
    return;
  }
  goto LAB_05304b6c;
}


