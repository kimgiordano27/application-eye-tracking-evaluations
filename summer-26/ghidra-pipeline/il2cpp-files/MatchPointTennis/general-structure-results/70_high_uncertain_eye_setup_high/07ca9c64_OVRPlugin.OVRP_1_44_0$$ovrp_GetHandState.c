/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandState
ENTRY_POINT: 07ca9c64
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_44_0__ovrp_GetHandState(void)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined1 unaff_w22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  long unaff_x27;
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
  
code_r0x07ca9c64:
  if (*(char *)(unaff_x27 + 0xf45) == '\0') {
    FUN_04447ba8();
    *(undefined1 *)(unaff_x27 + 0xf45) = unaff_w22;
  }
  pfVar3 = *(float **)(*unaff_x21 + 0xb8);
  fVar4 = *pfVar3;
  fVar6 = pfVar3[1];
  fVar8 = pfVar3[2];
  fVar10 = pfVar3[3];
  do {
    if (unaff_x29 == 0) {
LAB_07ca9b20:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(unaff_x29 + 0x18) <= unaff_x25) {
LAB_07ca9cec:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar2 = unaff_x29 + unaff_x24 * 4;
    unaff_x24 = unaff_x24 + 4;
    unaff_x25 = unaff_x25 + 1;
    unaff_x23 = unaff_x23 + 0x1c;
    *(float *)(lVar2 + 0x20) = fVar4;
    *(float *)(lVar2 + 0x24) = fVar6;
    *(float *)(lVar2 + 0x28) = fVar8;
    *(float *)(lVar2 + 0x2c) = fVar10;
    if (unaff_x24 == 0x68) {
      return 1;
    }
    lVar2 = *unaff_x26;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar2 = *unaff_x26;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar2 == 0) goto LAB_07ca9b20;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x25) goto LAB_07ca9cec;
    uVar1 = *(uint *)(lVar2 + unaff_x24 + 0x20);
    unaff_x29 = *(long *)(unaff_x19 + 0x48);
    if ((int)uVar1 < 0) goto code_r0x07ca9c64;
    lVar2 = *unaff_x20;
    if (lVar2 == 0) goto LAB_07ca9b20;
    if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_07ca9cec;
    lVar2 = lVar2 + (ulong)uVar1 * unaff_x28;
    fVar5 = *(float *)(lVar2 + 0x30);
    fVar7 = *(float *)(lVar2 + 0x34);
    fVar9 = *(float *)(lVar2 + 0x38);
    fVar10 = (float)FUN_095165fc(*(undefined4 *)(lVar2 + 0x2c),0);
    lVar2 = *unaff_x20;
    if (lVar2 == 0) goto LAB_07ca9b20;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x25) goto LAB_07ca9cec;
    lVar2 = lVar2 + unaff_x23;
    fVar11 = *(float *)(lVar2 + 0x2c);
    fVar14 = *(float *)(lVar2 + 0x30);
    fVar13 = *(float *)(lVar2 + 0x34);
    fVar12 = *(float *)(lVar2 + 0x38);
    fVar4 = (fVar5 * fVar13 + fVar9 * fVar11 + fVar10 * fVar12) - fVar7 * fVar14;
    fVar6 = (fVar7 * fVar11 + fVar9 * fVar14 + fVar5 * fVar12) - fVar10 * fVar13;
    fVar8 = (fVar10 * fVar14 + fVar9 * fVar13 + fVar7 * fVar12) - fVar5 * fVar11;
    fVar10 = ((fVar9 * fVar12 - fVar10 * fVar11) - fVar5 * fVar14) - fVar7 * fVar13;
  } while( true );
}


