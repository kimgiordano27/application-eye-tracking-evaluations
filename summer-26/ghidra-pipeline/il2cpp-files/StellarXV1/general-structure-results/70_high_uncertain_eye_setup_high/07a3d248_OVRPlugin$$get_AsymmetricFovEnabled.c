/*
FUNCTION_NAME: OVRPlugin$$get_AsymmetricFovEnabled
ENTRY_POINT: 07a3d248
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_AsymmetricFovEnabled(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  float *unaff_x24;
  float *pfVar3;
  long unaff_x25;
  undefined1 unaff_w26;
  long unaff_x27;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float fVar9;
  undefined8 in_stack_00000000;
  
code_r0x07a3d248:
  if ((param_1 <= unaff_x23) || ((uint)param_1 <= (int)unaff_x23 - 1U)) {
LAB_07a3d2f0:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  fVar9 = *(float *)(unaff_x27 + unaff_x25 + -4);
  if (*(char *)(unaff_x22 + 0x4e9) == '\0') {
    FUN_04077588();
    *(undefined1 *)(unaff_x22 + 0x4e9) = unaff_w26;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar8 = (float)((ulong)in_stack_00000000 >> 0x20);
  fVar9 = SQRT((float)in_stack_00000000 * (float)in_stack_00000000 + fVar8 * fVar8 +
               unaff_s8 * unaff_s8) / unaff_s9 + fVar9;
  pfVar3 = unaff_x24;
  do {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    lVar2 = unaff_x27 + unaff_x25;
    unaff_x25 = unaff_x25 + 0x20;
    unaff_x24 = pfVar3 + 3;
    *(float *)(lVar2 + 0x1c) = fVar9;
    if ((long)(int)(uint)uVar1 <= (long)unaff_x23) {
      return;
    }
    if (unaff_x25 == 0x20) {
      if ((uint)uVar1 < 2) goto LAB_07a3d2f0;
      fVar8 = *(float *)(unaff_x19 + 0x34);
      uVar6 = *(undefined8 *)(unaff_x19 + 0x2c);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
      fVar9 = *(float *)(unaff_x19 + 0x28);
    }
    else {
      if ((uVar1 & 0xffffffff) <= unaff_x23) goto LAB_07a3d2f0;
      fVar8 = *unaff_x24;
      uVar6 = *(undefined8 *)(pfVar3 + 1);
      uVar7 = *(undefined8 *)(pfVar3 + -2);
      fVar9 = *pfVar3;
    }
    fVar5 = (float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar7 >> 0x20);
    in_stack_00000000 = CONCAT44(fVar5,(float)uVar6 - (float)uVar7);
    unaff_s8 = fVar8 - fVar9;
    lVar2 = *unaff_x20;
    if (lVar2 == 0) {
LAB_07a3d2f4:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (((uVar1 & 0xffffffff) <= unaff_x23) || (*(uint *)(lVar2 + 0x18) <= unaff_x23))
    goto LAB_07a3d2f0;
    fVar8 = *unaff_x24;
    *(undefined8 *)(lVar2 + unaff_x25) = *(undefined8 *)(pfVar3 + 1);
    *(float *)((undefined8 *)(lVar2 + unaff_x25) + 1) = fVar8;
    lVar2 = *unaff_x20;
    if (lVar2 == 0) goto LAB_07a3d2f4;
    fVar8 = unaff_s8;
    uVar4 = FUN_089b94d0(0);
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_07a3d2f0;
    lVar2 = lVar2 + unaff_x25;
    *(undefined4 *)(lVar2 + 0xc) = uVar4;
    *(float *)(lVar2 + 0x10) = fVar5;
    *(float *)(lVar2 + 0x14) = fVar8;
    *(float *)(lVar2 + 0x18) = fVar9;
    unaff_x27 = *unaff_x20;
    if (unaff_x27 == 0) goto LAB_07a3d2f4;
    param_1 = (ulong)*(uint *)(unaff_x27 + 0x18);
    if (unaff_x25 != 0x20) goto code_r0x07a3d248;
    fVar9 = 0.0;
    pfVar3 = unaff_x24;
    if (param_1 == 0) goto LAB_07a3d2f0;
  } while( true );
}


