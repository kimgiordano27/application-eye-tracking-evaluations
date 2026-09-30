/*
FUNCTION_NAME: OVRPlugin.OVRP_1_43_0$$.cctor
ENTRY_POINT: 07ca9b60
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_43_0___cctor(void)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  char unaff_w22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
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
  
  while( true ) {
    lVar2 = *unaff_x26;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar2 = *unaff_x26;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x25) goto LAB_07ca9cec;
    uVar1 = *(uint *)(lVar2 + unaff_x24 + 0x20);
    lVar2 = *(long *)(unaff_x19 + 0x48);
    if ((int)uVar1 < 0) {
      if (DAT_0a51bf45 == '\0') {
        FUN_04447ba8();
        DAT_0a51bf45 = unaff_w22;
      }
      pfVar3 = *(float **)(*unaff_x21 + 0xb8);
      fVar6 = *pfVar3;
      fVar8 = pfVar3[1];
      fVar10 = pfVar3[2];
      fVar5 = pfVar3[3];
    }
    else {
      lVar4 = *unaff_x20;
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_07ca9cec;
      lVar4 = lVar4 + (ulong)uVar1 * 0x1c;
      fVar7 = *(float *)(lVar4 + 0x30);
      fVar9 = *(float *)(lVar4 + 0x34);
      fVar11 = *(float *)(lVar4 + 0x38);
      fVar5 = (float)FUN_095165fc(*(undefined4 *)(lVar4 + 0x2c),0);
      lVar4 = *unaff_x20;
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x25) goto LAB_07ca9cec;
      lVar4 = lVar4 + unaff_x23;
      fVar12 = *(float *)(lVar4 + 0x2c);
      fVar15 = *(float *)(lVar4 + 0x30);
      fVar14 = *(float *)(lVar4 + 0x34);
      fVar13 = *(float *)(lVar4 + 0x38);
      fVar6 = (fVar7 * fVar14 + fVar11 * fVar12 + fVar5 * fVar13) - fVar9 * fVar15;
      fVar8 = (fVar9 * fVar12 + fVar11 * fVar15 + fVar7 * fVar13) - fVar5 * fVar14;
      fVar10 = (fVar5 * fVar15 + fVar11 * fVar14 + fVar9 * fVar13) - fVar7 * fVar12;
      fVar5 = ((fVar11 * fVar13 - fVar5 * fVar12) - fVar7 * fVar15) - fVar9 * fVar14;
    }
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x25) {
LAB_07ca9cec:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar2 = lVar2 + unaff_x24 * 4;
    unaff_x24 = unaff_x24 + 4;
    unaff_x25 = unaff_x25 + 1;
    unaff_x23 = unaff_x23 + 0x1c;
    *(float *)(lVar2 + 0x20) = fVar6;
    *(float *)(lVar2 + 0x24) = fVar8;
    *(float *)(lVar2 + 0x28) = fVar10;
    *(float *)(lVar2 + 0x2c) = fVar5;
    if (unaff_x24 == 0x68) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


