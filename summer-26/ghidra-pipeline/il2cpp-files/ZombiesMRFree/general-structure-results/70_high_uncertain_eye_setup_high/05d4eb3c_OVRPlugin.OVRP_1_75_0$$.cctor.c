/*
FUNCTION_NAME: OVRPlugin.OVRP_1_75_0$$.cctor
ENTRY_POINT: 05d4eb3c
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


undefined8
OVRPlugin_OVRP_1_75_0___cctor
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8)

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
  float in_s16;
  float in_s18;
  float in_s19;
  float in_s22;
  float in_s23;
  float in_s24;
  
  do {
    fVar4 = (in_s18 + param_3) - in_s19;
    fVar5 = (in_s22 + in_s16) - in_s23;
    param_5 = (in_s24 + param_8 + param_6) - param_5;
    param_7 = ((param_4 - param_1) - param_2) - param_7;
    while( true ) {
      if (unaff_x29 == 0) goto LAB_05d4ea28;
      if (*(uint *)(unaff_x29 + 0x18) <= unaff_x25) goto LAB_05d4ebf4;
      lVar2 = unaff_x29 + unaff_x24 * 4;
      unaff_x24 = unaff_x24 + 4;
      unaff_x25 = unaff_x25 + 1;
      unaff_x23 = unaff_x23 + 0x1c;
      *(float *)(lVar2 + 0x20) = fVar4;
      *(float *)(lVar2 + 0x24) = fVar5;
      *(float *)(lVar2 + 0x28) = param_5;
      *(float *)(lVar2 + 0x2c) = param_7;
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
      unaff_x29 = *(long *)(unaff_x19 + 0x48);
      if (-1 < (int)uVar1) break;
      if (*(char *)(unaff_x27 + 0x663) == '\0') {
        FUN_02fe925c();
        *(undefined1 *)(unaff_x27 + 0x663) = unaff_w22;
      }
      pfVar3 = *(float **)(*unaff_x21 + 0xb8);
      fVar4 = *pfVar3;
      fVar5 = pfVar3[1];
      param_5 = pfVar3[2];
      param_7 = pfVar3[3];
    }
    lVar2 = *unaff_x20;
    if (lVar2 == 0) {
LAB_05d4ea28:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
LAB_05d4ebf4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar2 = lVar2 + (ulong)uVar1 * unaff_x28;
    fVar5 = *(float *)(lVar2 + 0x30);
    param_7 = *(float *)(lVar2 + 0x34);
    fVar6 = *(float *)(lVar2 + 0x38);
    fVar4 = (float)FUN_068ec9ec(*(undefined4 *)(lVar2 + 0x2c),0);
    lVar2 = *unaff_x20;
    if (lVar2 == 0) goto LAB_05d4ea28;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x25) goto LAB_05d4ebf4;
    lVar2 = lVar2 + unaff_x23;
    fVar7 = *(float *)(lVar2 + 0x2c);
    fVar10 = *(float *)(lVar2 + 0x30);
    fVar9 = *(float *)(lVar2 + 0x34);
    fVar8 = *(float *)(lVar2 + 0x38);
    in_s18 = fVar5 * fVar9;
    in_s19 = param_7 * fVar10;
    in_s22 = param_7 * fVar7;
    in_s23 = fVar4 * fVar9;
    in_s24 = fVar4 * fVar10;
    param_1 = fVar4 * fVar7;
    param_5 = fVar5 * fVar7;
    param_2 = fVar5 * fVar10;
    param_8 = fVar6 * fVar9;
    param_4 = fVar6 * fVar8;
    param_6 = param_7 * fVar8;
    param_7 = param_7 * fVar9;
    param_3 = fVar6 * fVar7 + fVar4 * fVar8;
    in_s16 = fVar6 * fVar10 + fVar5 * fVar8;
  } while( true );
}


