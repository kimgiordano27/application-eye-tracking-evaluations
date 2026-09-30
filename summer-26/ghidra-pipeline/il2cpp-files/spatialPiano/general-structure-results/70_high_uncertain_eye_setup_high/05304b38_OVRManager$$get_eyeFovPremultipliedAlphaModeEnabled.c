/*
FUNCTION_NAME: OVRManager$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 05304b38
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_eyeFovPremultipliedAlphaModeEnabled(long param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar4;
  long unaff_x23;
  long unaff_x24;
  ulong uVar5;
  ulong unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float unaff_s10;
  float fVar9;
  float unaff_s11;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s15;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000050;
  ulong in_stack_00000080;
  
  while( true ) {
    unaff_x25 = unaff_x25 + 1;
    unaff_x24 = unaff_x24 + 0x20;
    fVar9 = (float)in_stack_00000080;
    if (param_1 <= (long)unaff_x25) break;
    fVar7 = (float)unaff_x20[2];
    in_stack_00000080 = (ulong)(uint)unaff_x20[1];
    fVar8 = (float)FUN_05304df8(*unaff_x20,in_stack_00000080,fVar7,in_stack_00000050);
    lVar4 = *(long *)(unaff_x19 + 0x68);
    if (lVar4 == 0) goto LAB_05304c5c;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x25) goto LAB_05304c58;
    *(ulong *)(lVar4 + unaff_x24 + 0x20) =
         CONCAT44((float)((ulong)in_stack_00000040 >> 0x20) * (float)in_stack_00000080,
                  (float)in_stack_00000040 * fVar8);
    *(float *)(lVar4 + unaff_x24 + 0x28) = in_stack_00000038._4_4_ * fVar7;
    lVar4 = *(long *)(unaff_x19 + 0x68);
    if (lVar4 == 0) goto LAB_05304c5c;
    if (*(char *)(unaff_x26 + 0x2bf) == '\0') {
      FUN_02f08768();
      *(undefined1 *)(unaff_x26 + 0x2bf) = unaff_w27;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar10 = fVar7 - unaff_s11;
    param_2 = fVar8 - param_2;
    fVar9 = (float)in_stack_00000080 - fVar9;
    fVar11 = fVar10 * fVar10 + param_2 * param_2 + fVar9 * fVar9;
    fVar12 = SQRT(fVar11);
    if (fVar12 <= unaff_s10) {
      if (*(char *)(unaff_x28 + 0x2c1) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x28 + 0x2c1) = unaff_w27;
      }
      pfVar2 = *(float **)(*unaff_x22 + 0xb8);
      param_2 = *pfVar2;
      fVar9 = pfVar2[1];
      fVar10 = pfVar2[2];
    }
    else {
      param_2 = param_2 / fVar12;
      fVar9 = fVar9 / fVar12;
      fVar10 = fVar10 / fVar12;
    }
    uVar6 = FUN_060df954(param_2,0);
    if (*(uint *)(lVar4 + 0x18) <= unaff_x25) goto LAB_05304c58;
    lVar4 = lVar4 + unaff_x24;
    *(undefined4 *)(lVar4 + 0x2c) = uVar6;
    *(float *)(lVar4 + 0x30) = fVar9;
    *(float *)(lVar4 + 0x34) = fVar10;
    *(float *)(lVar4 + 0x38) = fVar11;
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
    param_1 = (long)*(int *)(unaff_x19 + 0x50);
    unaff_s11 = fVar7;
    param_2 = fVar8;
  }
  if (1 < (int)param_1) {
    lVar3 = *(long *)(unaff_x19 + 0x68);
    lVar4 = 0x5c;
    uVar5 = 1;
    do {
      if (lVar3 == 0) {
LAB_05304c5c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar5 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar5)) {
LAB_05304c58:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar3 = lVar3 + lVar4;
      fVar8 = *(float *)(lVar3 + -0x38);
      fVar7 = *(float *)(lVar3 + -0x34);
      fVar9 = *(float *)(lVar3 + -0x3c);
      fVar10 = *(float *)(lVar3 + -0x1c);
      fVar11 = *(float *)(lVar3 + -0x18);
      fVar12 = *(float *)(lVar3 + -0x14);
      if (*(char *)(unaff_x23 + 0x2c7) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x23 + 0x2c7) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar3 = *(long *)(unaff_x19 + 0x68);
      if (lVar3 == 0) goto LAB_05304c5c;
      if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar5 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar5))
      goto LAB_05304c58;
      fVar9 = fVar9 - fVar10;
      fVar8 = fVar8 - fVar11;
      pfVar2 = (float *)(lVar3 + lVar4);
      fVar7 = fVar7 - fVar12;
      iVar1 = *(int *)(unaff_x19 + 0x50);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x20;
      *pfVar2 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7) / unaff_s15 + pfVar2[-8];
    } while ((long)uVar5 < (long)iVar1);
  }
  return;
}


