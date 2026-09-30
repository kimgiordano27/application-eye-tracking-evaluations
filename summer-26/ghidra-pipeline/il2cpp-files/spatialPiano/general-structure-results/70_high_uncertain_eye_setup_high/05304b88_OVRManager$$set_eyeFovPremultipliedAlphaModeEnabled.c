/*
FUNCTION_NAME: OVRManager$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 05304b88
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_eyeFovPremultipliedAlphaModeEnabled(long param_1)

{
  float *pfVar1;
  int iVar2;
  long unaff_x19;
  undefined1 unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong uVar3;
  ulong unaff_x25;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s15;
  
  do {
    uVar3 = unaff_x24;
    param_1 = param_1 + unaff_x22;
    fVar5 = *(float *)(param_1 + -0x38);
    fVar4 = *(float *)(param_1 + -0x34);
    fVar6 = *(float *)(param_1 + -0x3c);
    fVar7 = *(float *)(param_1 + -0x1c);
    fVar8 = *(float *)(param_1 + -0x18);
    fVar9 = *(float *)(param_1 + -0x14);
    if (*(char *)(unaff_x23 + 0x2c7) == '\0') {
      FUN_02f08768();
      *(undefined1 *)(unaff_x23 + 0x2c7) = unaff_w20;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    param_1 = *(long *)(unaff_x19 + 0x68);
    if (param_1 == 0) {
LAB_05304c5c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((*(uint *)(param_1 + 0x18) <= unaff_x25) || (*(uint *)(param_1 + 0x18) <= uVar3)) {
LAB_05304c58:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    fVar6 = fVar6 - fVar7;
    fVar5 = fVar5 - fVar8;
    pfVar1 = (float *)(param_1 + unaff_x22);
    fVar4 = fVar4 - fVar9;
    iVar2 = *(int *)(unaff_x19 + 0x50);
    unaff_x24 = uVar3 + 1;
    unaff_x22 = unaff_x22 + 0x20;
    *pfVar1 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) / unaff_s15 + pfVar1[-8];
    if ((long)iVar2 <= (long)unaff_x24) {
      return;
    }
    if (param_1 == 0) goto LAB_05304c5c;
    if ((*(uint *)(param_1 + 0x18) <= uVar3) ||
       (unaff_x25 = uVar3, *(uint *)(param_1 + 0x18) <= unaff_x24)) goto LAB_05304c58;
  } while( true );
}


