/*
FUNCTION_NAME: OVRPlugin$$GetBodyState4
ENTRY_POINT: 05326f14
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBodyState4(ulong param_1,float param_2)

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
  
code_r0x05326f14:
  pfVar3 = unaff_x24;
  if (param_1 == 0) {
LAB_05326fc4:
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  do {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    lVar2 = unaff_x27 + unaff_x25;
    unaff_x25 = unaff_x25 + 0x20;
    unaff_x24 = pfVar3 + 3;
    *(float *)(lVar2 + 0x1c) = param_2;
    if ((long)(int)(uint)uVar1 <= (long)unaff_x23) {
      return;
    }
    if (unaff_x25 == 0x20) {
      if ((uint)uVar1 < 2) goto LAB_05326fc4;
      fVar12 = *(float *)(unaff_x19 + 0x34);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x2c);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
      fVar11 = *(float *)(unaff_x19 + 0x28);
    }
    else {
      if ((uVar1 & 0xffffffff) <= unaff_x23) goto LAB_05326fc4;
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
LAB_05326fc8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (((uVar1 & 0xffffffff) <= unaff_x23) || (*(uint *)(lVar2 + 0x18) <= unaff_x23))
    goto LAB_05326fc4;
    fVar7 = *unaff_x24;
    *(undefined8 *)(lVar2 + unaff_x25) = *(undefined8 *)(pfVar3 + 1);
    *(float *)((undefined8 *)(lVar2 + unaff_x25) + 1) = fVar7;
    lVar2 = *(long *)(unaff_x20 + 0x70);
    if (lVar2 == 0) goto LAB_05326fc8;
    fVar7 = fVar6;
    fVar9 = fVar12;
    uVar5 = FUN_060df954(0);
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_05326fc4;
    lVar2 = lVar2 + unaff_x25;
    *(undefined4 *)(lVar2 + 0xc) = uVar5;
    *(float *)(lVar2 + 0x10) = fVar7;
    *(float *)(lVar2 + 0x14) = fVar9;
    *(float *)(lVar2 + 0x18) = fVar11;
    unaff_x27 = *(long *)(unaff_x20 + 0x70);
    if (unaff_x27 == 0) goto LAB_05326fc8;
    param_1 = (ulong)*(uint *)(unaff_x27 + 0x18);
    if (unaff_x25 == 0x20) break;
    if ((param_1 <= unaff_x23) || (*(uint *)(unaff_x27 + 0x18) <= (int)unaff_x23 - 1U))
    goto LAB_05326fc4;
    param_2 = *(float *)(unaff_x27 + unaff_x25 + -4);
    if (*(char *)(unaff_x22 + 0x2c7) == '\0') {
      FUN_02f08768();
      *(undefined1 *)(unaff_x22 + 0x2c7) = unaff_w26;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    param_2 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar12 * fVar12) / unaff_s9 + param_2;
    pfVar3 = unaff_x24;
  } while( true );
  param_2 = 0.0;
  goto code_r0x05326f14;
}


