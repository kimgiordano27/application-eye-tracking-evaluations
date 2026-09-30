/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$.cctor
ENTRY_POINT: 05d4eab4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_74_0___cctor(ulong param_1)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  long in_x9;
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
  
  do {
    if (*(uint *)(in_x9 + 0x18) <= (uint)param_1) {
LAB_05d4ebf4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar2 = in_x9 + param_1 * unaff_x28;
    fVar6 = *(float *)(lVar2 + 0x30);
    fVar8 = *(float *)(lVar2 + 0x34);
    fVar10 = *(float *)(lVar2 + 0x38);
    fVar4 = (float)FUN_068ec9ec(*(undefined4 *)(lVar2 + 0x2c),0);
    lVar2 = *unaff_x20;
    if (lVar2 == 0) {
LAB_05d4ea28:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_x25) goto LAB_05d4ebf4;
    lVar2 = lVar2 + unaff_x23;
    fVar11 = *(float *)(lVar2 + 0x2c);
    fVar14 = *(float *)(lVar2 + 0x30);
    fVar13 = *(float *)(lVar2 + 0x34);
    fVar12 = *(float *)(lVar2 + 0x38);
    fVar5 = (fVar6 * fVar13 + fVar10 * fVar11 + fVar4 * fVar12) - fVar8 * fVar14;
    fVar7 = (fVar8 * fVar11 + fVar10 * fVar14 + fVar6 * fVar12) - fVar4 * fVar13;
    fVar9 = (fVar4 * fVar14 + fVar10 * fVar13 + fVar8 * fVar12) - fVar6 * fVar11;
    fVar4 = ((fVar10 * fVar12 - fVar4 * fVar11) - fVar6 * fVar14) - fVar8 * fVar13;
    while( true ) {
      if (unaff_x29 == 0) goto LAB_05d4ea28;
      if (*(uint *)(unaff_x29 + 0x18) <= unaff_x25) goto LAB_05d4ebf4;
      lVar2 = unaff_x29 + unaff_x24 * 4;
      unaff_x24 = unaff_x24 + 4;
      unaff_x25 = unaff_x25 + 1;
      unaff_x23 = unaff_x23 + 0x1c;
      *(float *)(lVar2 + 0x20) = fVar5;
      *(float *)(lVar2 + 0x24) = fVar7;
      *(float *)(lVar2 + 0x28) = fVar9;
      *(float *)(lVar2 + 0x2c) = fVar4;
      if (unaff_x24 == 0x68) {
        return 1;
      }
      lVar2 = *unaff_x26;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar2 = *unaff_x26;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      if (lVar2 == 0) goto LAB_05d4ea28;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x25) goto LAB_05d4ebf4;
      uVar1 = *(uint *)(lVar2 + unaff_x24 + 0x20);
      param_1 = (ulong)uVar1;
      unaff_x29 = *(long *)(unaff_x19 + 0x48);
      if (-1 < (int)uVar1) break;
      if (*(char *)(unaff_x27 + 0x663) == '\0') {
        FUN_02fe925c();
        *(undefined1 *)(unaff_x27 + 0x663) = unaff_w22;
      }
      pfVar3 = *(float **)(*unaff_x21 + 0xb8);
      fVar5 = *pfVar3;
      fVar7 = pfVar3[1];
      fVar9 = pfVar3[2];
      fVar4 = pfVar3[3];
    }
    in_x9 = *unaff_x20;
    if (in_x9 == 0) goto LAB_05d4ea28;
  } while( true );
}


