/*
FUNCTION_NAME: OVRPlugin$$GetSystemHmd3DofModeEnabled
ENTRY_POINT: 01a2a834
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSystemHmd3DofModeEnabled(long param_1)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
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
  long lVar4;
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
  float fVar15;
  
  do {
    uVar1 = *(uint *)(param_1 + 0x20);
    lVar4 = *unaff_x19;
    if ((int)uVar1 < 0) {
      if (*(char *)(unaff_x26 + 0xf00) == '\0') {
        thunk_FUN_00d48444();
        *(undefined1 *)(unaff_x26 + 0xf00) = unaff_w27;
      }
      pfVar3 = *(float **)(*unaff_x21 + 0xb8);
      fVar6 = *pfVar3;
      fVar8 = pfVar3[1];
      fVar10 = pfVar3[2];
      fVar5 = pfVar3[3];
    }
    else {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar1) {
LAB_01a2a968:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar2 = unaff_x20 + (int)uVar1 * unaff_x28;
      fVar7 = *(float *)(lVar2 + 0x30);
      fVar9 = *(float *)(lVar2 + 0x34);
      fVar11 = *(float *)(lVar2 + 0x38);
      fVar5 = (float)FUN_02698858(*(undefined4 *)(lVar2 + 0x2c),0);
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) goto LAB_01a2a968;
      fVar12 = unaff_x25[-3];
      fVar15 = unaff_x25[-2];
      fVar14 = unaff_x25[-1];
      fVar13 = *unaff_x25;
      fVar6 = (fVar7 * fVar14 + fVar11 * fVar12 + fVar5 * fVar13) - fVar9 * fVar15;
      fVar8 = (fVar9 * fVar12 + fVar11 * fVar15 + fVar7 * fVar13) - fVar5 * fVar14;
      fVar10 = (fVar5 * fVar15 + fVar11 * fVar14 + fVar9 * fVar13) - fVar7 * fVar12;
      fVar5 = ((fVar11 * fVar13 - fVar5 * fVar12) - fVar7 * fVar15) - fVar9 * fVar14;
    }
    if (lVar4 == 0) {
LAB_01a2a96c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_01a2a968;
    lVar4 = lVar4 + unaff_x22 * 4;
    unaff_x22 = unaff_x22 + 4;
    unaff_x23 = unaff_x23 + 1;
    unaff_x25 = unaff_x25 + 7;
    *(float *)(lVar4 + 0x20) = fVar6;
    *(float *)(lVar4 + 0x24) = fVar8;
    *(float *)(lVar4 + 0x28) = fVar10;
    *(float *)(lVar4 + 0x2c) = fVar5;
    if (unaff_x22 == 0x68) {
      return 1;
    }
    lVar4 = *unaff_x24;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *unaff_x24;
    }
    param_1 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (param_1 == 0) goto LAB_01a2a96c;
    if (*(uint *)(param_1 + 0x18) <= unaff_x23) goto LAB_01a2a968;
    param_1 = param_1 + unaff_x22;
  } while( true );
}


