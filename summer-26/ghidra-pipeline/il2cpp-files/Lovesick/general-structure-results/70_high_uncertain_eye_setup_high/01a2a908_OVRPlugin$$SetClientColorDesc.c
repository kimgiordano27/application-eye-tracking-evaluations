/*
FUNCTION_NAME: OVRPlugin$$SetClientColorDesc
ENTRY_POINT: 01a2a908
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetClientColorDesc(float *param_1)

{
  uint uVar1;
  float *pfVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  float *unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  long unaff_x29;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
code_r0x01a2a908:
  fVar4 = *param_1;
  fVar6 = param_1[1];
  fVar8 = param_1[2];
  fVar10 = param_1[3];
  pfVar2 = unaff_x25;
  do {
    if (unaff_x29 == 0) {
LAB_01a2a96c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(unaff_x29 + 0x18) <= unaff_x23) goto LAB_01a2a968;
    lVar3 = unaff_x29 + unaff_x22 * 4;
    unaff_x22 = unaff_x22 + 4;
    unaff_x23 = unaff_x23 + 1;
    unaff_x25 = pfVar2 + 7;
    *(float *)(lVar3 + 0x20) = fVar4;
    *(float *)(lVar3 + 0x24) = fVar6;
    *(float *)(lVar3 + 0x28) = fVar8;
    *(float *)(lVar3 + 0x2c) = fVar10;
    if (unaff_x22 == 0x68) {
      return 1;
    }
    lVar3 = *unaff_x24;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *unaff_x24;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 == 0) goto LAB_01a2a96c;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) {
LAB_01a2a968:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uVar1 = *(uint *)(lVar3 + unaff_x22 + 0x20);
    unaff_x29 = *unaff_x19;
    if ((int)uVar1 < 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar1) goto LAB_01a2a968;
    lVar3 = unaff_x20 + (int)uVar1 * unaff_x28;
    fVar5 = *(float *)(lVar3 + 0x30);
    fVar7 = *(float *)(lVar3 + 0x34);
    fVar9 = *(float *)(lVar3 + 0x38);
    fVar10 = (float)FUN_02698858(*(undefined4 *)(lVar3 + 0x2c),0);
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) goto LAB_01a2a968;
    fVar11 = pfVar2[4];
    fVar14 = pfVar2[5];
    fVar13 = pfVar2[6];
    fVar12 = *unaff_x25;
    fVar4 = (fVar5 * fVar13 + fVar9 * fVar11 + fVar10 * fVar12) - fVar7 * fVar14;
    fVar6 = (fVar7 * fVar11 + fVar9 * fVar14 + fVar5 * fVar12) - fVar10 * fVar13;
    fVar8 = (fVar10 * fVar14 + fVar9 * fVar13 + fVar7 * fVar12) - fVar5 * fVar11;
    fVar10 = ((fVar9 * fVar12 - fVar10 * fVar11) - fVar5 * fVar14) - fVar7 * fVar13;
    pfVar2 = unaff_x25;
  } while( true );
  if (*(char *)(unaff_x26 + 0xf00) == '\0') {
    thunk_FUN_00d48444();
    *(undefined1 *)(unaff_x26 + 0xf00) = unaff_w27;
  }
  param_1 = *(float **)(*unaff_x21 + 0xb8);
  goto code_r0x01a2a908;
}


