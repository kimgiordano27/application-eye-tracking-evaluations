/*
FUNCTION_NAME: OVRPlugin$$DestroyDynamicObjectTracker
ENTRY_POINT: 05bd4c20
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyDynamicObjectTracker(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  float *unaff_x24;
  long lVar3;
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
  
  lVar3 = 0x20;
  while( true ) {
    if (lVar3 == 0x20) {
      if ((uint)param_2 < 2) goto LAB_05bd4d98;
      fVar12 = *(float *)(unaff_x19 + 0x34);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x2c);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
      fVar11 = *(float *)(unaff_x19 + 0x28);
    }
    else {
      if ((param_2 & 0xffffffff) <= unaff_x23) goto LAB_05bd4d98;
      fVar12 = *unaff_x24;
      uVar8 = *(undefined8 *)(unaff_x24 + -2);
      uVar10 = *(undefined8 *)(unaff_x24 + -5);
      fVar11 = unaff_x24[-3];
    }
    fVar4 = (float)uVar8 - (float)uVar10;
    fVar6 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
    fVar12 = fVar12 - fVar11;
    lVar2 = *(long *)(unaff_x20 + 0x70);
    if (lVar2 == 0) break;
    if (((param_2 & 0xffffffff) <= unaff_x23) || (*(uint *)(lVar2 + 0x18) <= unaff_x23)) {
LAB_05bd4d98:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    fVar7 = *unaff_x24;
    *(undefined8 *)(lVar2 + lVar3) = *(undefined8 *)(unaff_x24 + -2);
    *(float *)((undefined8 *)(lVar2 + lVar3) + 1) = fVar7;
    lVar2 = *(long *)(unaff_x20 + 0x70);
    if (lVar2 == 0) break;
    fVar7 = fVar6;
    fVar9 = fVar12;
    uVar5 = FUN_069c5558(0);
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_05bd4d98;
    lVar2 = lVar2 + lVar3;
    *(undefined4 *)(lVar2 + 0xc) = uVar5;
    *(float *)(lVar2 + 0x10) = fVar7;
    *(float *)(lVar2 + 0x14) = fVar9;
    *(float *)(lVar2 + 0x18) = fVar11;
    lVar2 = *(long *)(unaff_x20 + 0x70);
    if (lVar2 == 0) break;
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (lVar3 == 0x20) {
      fVar11 = 0.0;
      if ((ulong)uVar1 == 0) goto LAB_05bd4d98;
    }
    else {
      if ((uVar1 <= unaff_x23) || (uVar1 <= (int)unaff_x23 - 1U)) goto LAB_05bd4d98;
      fVar11 = *(float *)(lVar2 + lVar3 + -4);
      if (*(char *)(unaff_x22 + 0xbbc) == '\0') {
        FUN_03188a78();
        *(undefined1 *)(unaff_x22 + 0xbbc) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar11 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar12 * fVar12) / unaff_s9 + fVar11;
    }
    param_2 = *(ulong *)(unaff_x19 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    lVar2 = lVar2 + lVar3;
    lVar3 = lVar3 + 0x20;
    unaff_x24 = unaff_x24 + 3;
    *(float *)(lVar2 + 0x1c) = fVar11;
    if ((long)(int)param_2 <= (long)unaff_x23) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


