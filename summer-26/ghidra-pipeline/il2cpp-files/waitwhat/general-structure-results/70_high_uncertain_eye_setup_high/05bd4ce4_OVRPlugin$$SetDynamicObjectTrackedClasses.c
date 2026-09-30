/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClasses
ENTRY_POINT: 05bd4ce4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetDynamicObjectTrackedClasses(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  float *unaff_x24;
  float *pfVar3;
  long unaff_x25;
  undefined1 unaff_w26;
  long unaff_x27;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float unaff_s9;
  
code_r0x05bd4ce4:
  fVar11 = 0.0;
  pfVar3 = unaff_x24;
  if (param_1 == 0) {
LAB_05bd4d98:
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  do {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    lVar2 = unaff_x27 + unaff_x25;
    unaff_x25 = unaff_x25 + 0x20;
    unaff_x24 = pfVar3 + 3;
    *(float *)(lVar2 + 0x1c) = fVar11;
    if ((long)(int)(uint)uVar1 <= (long)unaff_x23) {
      return;
    }
    if (unaff_x25 == 0x20) {
      if ((uint)uVar1 < 2) goto LAB_05bd4d98;
      fVar12 = *(float *)(unaff_x19 + 0x34);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x2c);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
      fVar11 = *(float *)(unaff_x19 + 0x28);
    }
    else {
      if ((uVar1 & 0xffffffff) <= unaff_x23) goto LAB_05bd4d98;
      fVar12 = *unaff_x24;
      uVar8 = *(undefined8 *)(pfVar3 + 1);
      uVar10 = *(undefined8 *)(pfVar3 + -2);
      fVar11 = *pfVar3;
    }
    fVar4 = (float)uVar8 - (float)uVar10;
    fVar6 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
    fVar12 = fVar12 - fVar11;
    lVar2 = *(long *)(unaff_x20 + 0x70);
    if (lVar2 == 0) {
LAB_05bd4d9c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (((uVar1 & 0xffffffff) <= unaff_x23) || (*(uint *)(lVar2 + 0x18) <= unaff_x23))
    goto LAB_05bd4d98;
    fVar7 = *unaff_x24;
    *(undefined8 *)(lVar2 + unaff_x25) = *(undefined8 *)(pfVar3 + 1);
    *(float *)((undefined8 *)(lVar2 + unaff_x25) + 1) = fVar7;
    lVar2 = *(long *)(unaff_x20 + 0x70);
    if (lVar2 == 0) goto LAB_05bd4d9c;
    fVar7 = fVar6;
    fVar9 = fVar12;
    uVar5 = FUN_069c5558(0);
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_05bd4d98;
    lVar2 = lVar2 + unaff_x25;
    *(undefined4 *)(lVar2 + 0xc) = uVar5;
    *(float *)(lVar2 + 0x10) = fVar7;
    *(float *)(lVar2 + 0x14) = fVar9;
    *(float *)(lVar2 + 0x18) = fVar11;
    unaff_x27 = *(long *)(unaff_x20 + 0x70);
    if (unaff_x27 == 0) goto LAB_05bd4d9c;
    param_1 = (ulong)*(uint *)(unaff_x27 + 0x18);
    if (unaff_x25 == 0x20) goto code_r0x05bd4ce4;
    if ((param_1 <= unaff_x23) || (*(uint *)(unaff_x27 + 0x18) <= (int)unaff_x23 - 1U))
    goto LAB_05bd4d98;
    fVar11 = *(float *)(unaff_x27 + unaff_x25 + -4);
    if (*(char *)(unaff_x22 + 0xbbc) == '\0') {
      FUN_03188a78();
      *(undefined1 *)(unaff_x22 + 0xbbc) = unaff_w26;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    fVar11 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar12 * fVar12) / unaff_s9 + fVar11;
    pfVar3 = unaff_x24;
  } while( true );
}


